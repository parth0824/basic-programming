class Node {
    int data;
    Node next;
    Node (int data){
        this.data = data;
        this.next = null;
    }
}
public class onesinglyLLWithHead{
    Node head;
    public void insertAtEnd(int data){
        Node n = new Node(data);
        if(head == null){
            head = n;
        }
        else{
            Node temp = head;
            while(temp.next != null){
                temp = temp.next;
            }
            temp.next = n;
        }
    }
    public void insertAtBeg(int data){
        Node n = new Node(data);
        n.next = head;
        head = n;
    }
    public void insertAtAnyPosition(int data,int p){// using data
        // not work if p = 1  
        Node n = new Node(data);
        if(head == null){
            head = n;
            return ;
        }
        Node temp = head;
        int a = 1;
        while(a < p-1){
            a++;
            temp = temp.next;
        }
        n.next = temp.next;
        temp.next = null;
        temp.next = n;
    }
    public void insertAtAnyPositionN(Node n,int p){// usinig  node
        Node temp = head ;
        int a = 1;
        while(a < p-1){
            temp = temp.next;
            a++;
        }
        n.next = temp.next;
        temp.next = null;
        temp.next = n;
    }
    public void deleteAtBeg(){
        head = head.next;
    }
    public void deleteAtEnd(){
        int a = count();
        int b = 1;
        Node temp = head;
        while(b < a -1){
            temp = temp.next;
            b++;
        }
        temp.next = null;
    }
    public void deleteAtPos(int p){ // delete by position
        Node temp = head;
        int a = 1;
        while(a < p-1){
            temp = temp.next;
            a++;
        }
        Node tem = temp.next;
        temp.next = tem.next;
    }
    public void deleteAtAnyPositionN(Node n){ // delete by node 
        Node temp = head;
    }
    public void searchD(int d){ // search with data
        int a = 1;int b =0;
        Node temp = head;
        for(int i=1;i<=count();i++){
            if(temp.data != d){
                temp = temp.next;
                a++;
            }
            else{
                System.out.println(a);b=1;
                return;
            }
        }
        System.out.println("NO FOUND");
    }
    public void searchN(Node n){ // search with node
        int a = 1;
        Node temp = head;
        for(int i=1;i<=count();i++){
            if(n != temp){
                temp = temp.next;
                a++;
            }
            else{
                System.out.println(a);
                return;
            }
        }
        System.out.println("NO FOUND");
    }
    public int count(){
        Node temp = head;
        int t = 0;
        while(temp != null){
            t++;
            temp = temp.next;
        }
        return t;
    }
    public void print(){
        Node tem = head;
        while(tem != null){
            System.out.print(tem.data+" ");
            tem = tem.next;
        }
        System.out.println();
    }
    public void call(Node a){
        if(a == null){
            return ;
        }
        call(a.next);
        System.out.print(a.data+" ");
    }
    public static void main(String[] args) {
        onesinglyLLWithHead s = new onesinglyLLWithHead();
        s.insertAtEnd(10);
        s.insertAtEnd(20);
        s.insertAtEnd(30);
        s.print();
        s.insertAtBeg(-10);
        s.insertAtBeg(-20);
        s.insertAtBeg(-30);
        s.print();
        s.insertAtAnyPosition(0,3);
        s.print();
        Node d = new Node(50);
        s.insertAtAnyPositionN(d,6);
        s.print();
        s.deleteAtBeg();
        s.print();
        s.deleteAtEnd();
        s.print();
        s.deleteAtPos(2);
        s.print();
        s.print();
        s.searchD(9);
        Node w = new Node(10);
        s.searchN(w);
        s.call(s.head);
    }
}