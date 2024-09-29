// Way - 03 : Optimized Doubly LL
struct Node {
    string word;
    int freq;
    Node* prev;
    Node* next;

    Node(string k) : word(k), freq(1), prev(nullptr), next(nullptr) {}
};

class AllOne {
public:
    Node *head, *tail;
    unordered_map<string, Node*> um;

    // for base connection join head and tail [ both are empty ]
    AllOne() {
        head = new Node("");
        tail = new Node("");
        head->next = tail;
        tail->prev = head;
    }

    // moving character to new node if its count increase
    void moveToCorrectNextPosition(Node* node) {
        Node* ptr = node->next;
        // checkig if any node exist with current frequency
        while (ptr != tail && node->freq > ptr->freq) {
            ptr = ptr->next;
        }

        if (ptr != node->next) {
            // remove node from current place
            node->prev->next = node->next;
            node->next->prev = node->prev;

            // add it to new place before ptr
            ptr->prev->next = node;
            node->prev = ptr->prev;
            node->next = ptr;
            ptr->prev = node;
        }
    }

    // moving character to new node as its frequency decreased
    void moveToCorrectPrevPosition(Node* node) {
        Node* ptr = node->prev;
        // checkig if any node exist with current frequency
        while (ptr != head && node->freq < ptr->freq) {
            ptr = ptr->prev;
        }

        if (ptr != node->prev) {
            // remove node from current place
            node->prev->next = node->next;
            node->next->prev = node->prev;

            // add it to new place before ptr
            ptr->next->prev = node;
            node->next = ptr->next;
            node->prev = ptr;
            ptr->next = node;
        }
    }

    // increase the count of word
    void inc(string word) {
        if (um.find(word) != um.end()) {
            // already present -> update its count
            Node* node = um[word];
            node->freq++;

            // fix node position after upgrade
            moveToCorrectNextPosition(node);
        } 
        else {
            // create a new node
            Node* node = new Node(word);
            node->next = head->next;
            node->prev = head;

            head->next->prev = node;
            head->next = node;

            // store it in map
            um[word] = node;

            // insert it into the list
            moveToCorrectNextPosition(node);
        }
    }

    void dec(string word) {
        Node* node = um[word];
        node->freq--;

        moveToCorrectPrevPosition(node);

        // Here node will be at first position just next to head
        // if freq of node is zero then we follow same logic and 
        if (node->freq == 0) {
            node->next->prev = node->prev;
            node->prev->next = node->next;
            um.erase(word);
            delete node;
        }
    }

    string getMaxKey() {
        string ans = "";
        if (tail->prev != head)
            ans = tail->prev->word;
        return ans;
    }

    string getMinKey() {
        string ans = "";
        if (head->next != tail)
            ans = head->next->word;
        return ans;
    }
};