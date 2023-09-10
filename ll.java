class ll{
    class Node{
        String data;
        Node next;
        Node(String data){
            this.data = data;
            this.next = null;
        }
    }
    public void addFirst(String data){
        Node newNode = new Node(data);
        if(head == null){
            head = newNode;
        }
        newNode.next = head;
        head = newNode;
    }
     
    public static void main (String args[]){
        ll list = new ll();
        list.addFirst("a");
        list.addFirst("is");
    }
}