// *************************************************** SINGLEY LINKED LIST ********************************************
class Node{
  int data;
  Node next;
  Node(int data){
      this.data = data;
  }
}
class SingleyLinkedList{
  Node head;
  // ..................................... insertion begin  .......................................
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
      if(head == null){
          head = n;
      }
      else{
          n.next = head;
          head = n;
      }
  }
  public void insertAtAnyPosition(int data,int p){
      Node n = new Node(data);
      if(p > count() || p <= 1){
          System.out.println("Invalid Position");
      }
      else if(head == null){
          head = n;
      }
      else{
          int b = 1;
          Node temp = head;
          while(b < p-1){
              temp = temp.next;
              b++;
          }
          n.next = temp.next;
          temp.next = null;
          temp.next = n;
      }
  }
  // ...................................... insertion end .....................................
  // ...................................... deletion start ....................................
  public void deleteAtEnd(){
      if(head == null){
          System.out.println("Invalid Operation");
      }
      else{
          Node temp = head;
          int q = count();
          int w = 1;
          while(w < q-1){
              temp = temp.next;
              w++;
          }
          temp.next = null;
      }
  }
  public void deleteAtBeg(){
      if(head == null){
          System.out.println("Invalid Operation");
      }
      else{
          Node temp = head;
          head = temp.next;
          temp = null;
      }
  }
  public void deleteAtAnyPosition(int p){
      if(p > count() || p <=1){
          System.out.println("Invalid Operation");
      }
      else if(head == null){
          System.out.println("Invalid Operation");
      }
      else{
          Node temp = head;
          int e = 1;
          while(e < p-1){
              temp = temp.next;
              e++;
          }
          Node z = temp.next;
          temp.next = temp.next.next;
          z = null;
      }
  }
// .................................... deletion end ............................................
// .................................... count start .............................................
  public int count(){
      Node temp = head;
      int a =0;
      while (temp !=null) {
          temp= temp.next;
          a++;
      }
      return a;
  }
// .................................... count end .............................................
// ...................................... print start .........................................
  public void print(){
      Node temp = head;
      while(temp !=null){
          System.out.print(temp.data+" ");
          temp = temp.next;
      }
      System.out.println();
  }
// ...................................... print end .........................................

  public static void main(String[] args){
      SingleyLinkedList s = new SingleyLinkedList ();
      s.insertAtEnd(10);
      s.insertAtEnd(20);
      s.insertAtEnd(30);
      s.print();
      s.insertAtBeg(-10);
      s.insertAtBeg(-20);
      s.insertAtBeg(-30);
      s.print();
      s.insertAtAnyPosition(0,4);
      s.print();  
      s.deleteAtBeg();
      s.print();
      s.deleteAtEnd();
      s.print();
      s.deleteAtAnyPosition(3);
      s.print();
  }
}   