class Node{
    int data;
    Node next;
    Node(int data){
        this.data = data;
    }
}
class tenQueueLL{
    Node f;
    Node r;
    public void enQueue(int data){
        Node n = new Node(data);
        if(f==null && r==null){
            f = n;
            r = n;
        }
        else{
            r.next = n;
            r = n;
        }
    }
    public void deQueue(){
        if(isEmpty()){
            System.out.println("UNDERFLOW");
            return ;
        }
        f = f.next;
    }
    public void print(){
        Node temp = f;
        while(temp != null){
            System.out.print(temp.data+" ");
            temp = temp.next;
        }
        System.out.println();
    }
    public boolean isEmpty(){
        if(f == null || r == null){
            return true;
        }
        return false;
    }
    public static void main(String args[]){
        tenQueueLL m = new tenQueueLL();
        m.enQueue(10);
        m.enQueue(20);
        m.enQueue(30);
        m.enQueue(40);
        m.print();
        m.deQueue();
        m.print();
        m.deQueue();
        m.print();
        m.deQueue();
        m.print();
        m.deQueue();
        m.print();
        m.deQueue();
        m.print();
    }
}