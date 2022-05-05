class MyStack {
    Deque<Integer> q;
    public MyStack() {
        q = new ArrayDeque<>();
    }
    
    public void push(int x) {
        q.offerLast(x) ;
    }
    
    public int pop() {
        return q.pollLast();
    }
    
    public int top() {
        return q.getLast();
    }
    
    public boolean empty() {
        return q.isEmpty();
    }
}