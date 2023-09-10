class Node{
    int data;
    Node next;
    Node(int data){
        this.data = data;
        this.next = null;
    }
}
public class oneNight {
    Node head;
    public void insertAtBeg(int data){
        Node n = new Node(10);
        if(head == null){
            head = n;
        }
        else{
            Node temp = head;
            while (temp.next != null){
                temp = temp.next;
            }
            temp.next = n;
        }

    }
    public static void main(String[] args) {
        oneNight o = new oneNight();

    }
}