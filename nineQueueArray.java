public class nineQueueArray {
    int max = 5;
    int Q [] = new int [max];
    int front =-1;
    int rear = -1;
    public void enQueue(int data){
        if(isFull()){
            System.out.println("OVERFLOW");
            return ;
        }
        if(front == -1 && rear == -1){
            front = 0;
        }
        rear++;
        Q[rear] = data;
    }
    public void deQueue(){
        if(front == max){
            System.out.println("UNDERFLOW");
            return ;
        }
        else{
            System.out.println(Q[front]);
            front++;
        }
    }
    public void print(){
        int f = front;
        int r = rear;
        while(f <= r){
            System.out.print(Q[f]+" ");
            f++;
        }
        System.out.println();
    }
    public boolean isFull(){
        if(rear == max-1){
            return true;
        }
        return false;
    }
    public static void main(String[] args){
        nineQueueArray n = new nineQueueArray();
        n.enQueue(10);
        n.enQueue(20);
        n.enQueue(30);
        n.enQueue(40);
        n.enQueue(50);
        n.print();
        n.deQueue();
        n.print();
        n.deQueue();
        n.print();
        n.deQueue();
        n.print();
        n.deQueue();
        n.print();
        n.deQueue();
        n.print();
        n.deQueue();
        n.print();
    }
}














































































// class Node{
//     int data;
//     Node next;
//     Node(int data){
//       this.data = data;
//     }
//   }
//   public class queue {
//     Node front; //head
//     Node rear; //tail
//     boolean isEmpty(){
//       if(front==null)
//         return true;
//       else
//         return false;
//     }
//     public void enqueue(int x){
//       Node n = new Node(x);
//       if(isEmpty()){
//         front=n;
//         rear=n;
//       }
//       else{
//         rear.next=n;
//         rear=n;
//       }
//     }
//     public int dequeue(){
//       if(isEmpty()){
//         System.out.println("Stack underflow");
//         return -1;
//       }
//       else{
//         int x=front.data;
//         front=front.next;
//         return x;
//       }
//     }
//     public int front(){
//       if(isEmpty()){
//         System.out.println("Stack underflow");
//         return -1;
//       }
//       else{
//         int x=front.data;
//         return x;
//       }
//     }
//     public int rear(){
//       if(isEmpty()){
//         System.out.println("Stack underflow");
//         return -1;
//       }
//       else{
//         int x=rear.data;
//         return x;
//       }
//     }
//   }
  
//   public static void main(String[] args) {
//         queue s = new queue();
//         System.out.println(s.dequeue());
//         s.enqueue(10);
//         s.enqueue(20);
//         System.out.println(s.dequeue());
//         s.enqueue(30);
//        }
//   }