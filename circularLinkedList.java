// ******************************************** CIRCULAR LINKED LIST **********************************************
class Node{
    int data;
    Node next;
    Node(int data){
        this.data = data;
    }
}
class circularLinkedList{
    Node head;
// ............................................. INSERTION START............................................
    public void insertAtEnd(int data){
        Node n = new Node (data);
        if(head == null){
            head = n;
            head.next = head;
        }
        else{
            Node temp = head;
            while(temp.next != head){
                temp = temp.next;
            }
            temp.next = n;
            n.next = head;
        }
    }
    public void insertAtBeg(int data){
        Node n = new Node(data);
        if(head == null){
            head = n;
            head.next = head;
        }
        else{
            Node temp = head;
            while(temp.next != head){
                temp = temp.next;
            }
            temp.next = n;
            n.next = head;
            head = n;
        }
    }
    public void insertAtAnyPosition(int data , int p){
        Node n = new Node(data);
        if(head == null){
            head = n;
            head.next = head;
        }
        else if(p > count() || p <= 1){
            System.out.println("INVALID POSITION");
        }
        else{
            Node temp = head;
            int s = 1;
            while(s < p-1){
                temp = temp.next;
                s++;
            }
            n.next = temp.next;
            temp.next = n;
        }
    }
// ................................................. INSERTIION END .................................................
// ................................................. DELETION START ..................................................
    public void deleteAtBeg(){
        if(head == null){
            System.out.println("INVALID OPERATION");
        }
        else{
            Node temp = head;
            while(temp.next != head){
                temp = temp.next;
            }
            temp.next = head.next;
            head = head.next;
        }
    }
    public void deleteAtEnd(){
        if(head == null){
            System.out.print("INVALID OPERATION");
        }
        else{
            Node temp = head;
            while(temp.next.next != head){
                temp = temp.next;
            }
            temp.next.next = null;
            temp.next = head;
        }
    }
    public void deleteAtAnyPosition(int p){
        if(p > count() || p <= 1){
            System.out.print("INVALID OPERATION");
            return ;
        }
        else if(head == null){
            System.out.print("INVALID OPERATION");
            return ;
        }        
        else{
            Node temp = head;
            int d = 1;
            while(d < p-1){
                temp = temp.next;
                d++;
            }
            Node t = temp.next;
            temp.next = t.next;
            t = null;
        }
    }
// ........................................... DELETION END ........................................................
// ........................................... COUNT START .........................................................
    public int count(){
        if(head == null){
            return 0;
        }
        else{
            Node temp = head;
            int t = 0;
            while(temp.next != head){
                t++;
                temp = temp.next;
            }
            return t+1;
        }
    }
// ........................................... COUNT END .........................................................
// ........................................... PRINT START .........................................................
    public void print(){
        Node temp = head;
        while(temp.next != head){
            System.out.print(temp.data+" ");
            temp = temp.next;
        }
        System.out.print(temp.data+" ");
        System.out.println();
    }
// ........................................... PRINT END .........................................................
    public static void main(String[] args) {
        circularLinkedList c = new circularLinkedList();
        c.insertAtEnd(10);
        c.insertAtEnd(20);
        c.insertAtEnd(30);
        c.print();    
        c.insertAtBeg(-10);   
        c.insertAtBeg(-20);
        c.insertAtBeg(-30);
        c.print();
        System.out.print("count="+c.count()+"\n");
        c.insertAtAnyPosition(0,4);
        c.print();
        c.deleteAtBeg();
        c.print();
        c.deleteAtEnd();
        c.print();
        c.deleteAtAnyPosition(5);
        c.print();
    }
}