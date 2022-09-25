class MyCircularQueue {
public:
    int f=0,r=-1,s=0,filled=0;
    vector<int> arr;
    MyCircularQueue(int k) {
        arr.resize(k,0);
        s=k;
    }
    
    bool enQueue(int value) {
        if(filled<s){
            r=(r+1)%s;
            arr[r]=value;
            filled++;
            return true;
        }
        return false;
        
    }
    
    bool deQueue() {
        if(filled>0){
            arr[f]=0;
            f = (f+1)%s;
            filled--;
            return true;
        }
        return false;
        
    }
    
    int Front() {
        if(filled==0)return -1;
        return arr[f];
    }
    
    int Rear() {
        if(filled==0)return -1;
        return arr[r];
    }
    
    bool isEmpty() {
        if(filled==0)return true;
        return false;
    }
    
    bool isFull() {
        if(filled==s)return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */