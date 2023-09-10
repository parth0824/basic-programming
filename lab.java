import java.util.*;
class linkedlist1 {
    static int size;
    linkedlist1()
    {
        this.size=0;
    }
    static Node head;
    static Node tail;
    class Node{
        int data;
        Node next;
        Node(int data)
        {
            this.data=data;
        }
        Node(int data,Node next)
        {
            this.data=data;
            this.next=next;
        }
    }
    public void addfirst(int data)
    {
        Node newnode=new Node(data);
        newnode.next=head;
        head=newnode;
        if(tail==null)
        {
            tail=head;
        }
        size++;
    }
    public void addlast(int data)
    {
        if(tail==null)
        {
            addfirst(data);
            return;
        }
        Node newnode=new Node(data);
        tail.next=newnode;
        tail=newnode;
        size++;
    }
    public void addatindex(int data,int index)
    {
        if(index==0)
        {
            addfirst(data);
            return;
        }
        if(index==size-1)
        {
            addlast(data);
            return;
        }
        Node tmp=head;
        for(int i=1;i<index;i++)
        {
            tmp=tmp.next;
        }
        Node newnode=new Node(data,tmp.next);
        tmp.next=newnode;
        size++;
    }
    public void deletefirst()
    {
        if(head==null)
        {
            System.out.println("linked list is empty");
            return;
        }
        head=head.next;
        size--;
    }
    public void deletelast()
    {
        if(head==null)
        {
            System.out.println("linked list is empty");
            return;
        }
        Node secondlast=head;
        Node last=head.next;
        while(last.next!=null)
        {
            secondlast=secondlast.next;
            last=last.next;
        }
        secondlast.next=null;
        tail=secondlast;
        size--;
    }
    static int deleteatindex(int index)
    {
        Node tmp=head;
        for(int i=1;i<index;i++)
        {
            tmp=tmp.next;
        }
        int val=tmp.next.data;
        if(tmp.next.next==null)
        {
            tail=tmp;
        }
        else
        tmp.next=tmp.next.next;
        size--;
        return val;
    }
    int getsize()
    {
        return size;
    }
    public void display()
    {
        if(head==null)
        {
            System.out.println("linked list is empty");
        }
        Node tmp=head;
        while(tmp!=null)
        {
            System.out.print(tmp.data+"->");
            tmp=tmp.next;
        }
        System.out.println("null");
    }
    public static void main(String args[])
    {
        linkedlist1 list=new linkedlist1();
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0;i<n;i++)
        {
            int val=sc.nextInt();
            list.addlast(val);
        }
        int arr[]=new int[n/2];
        int j=1;
        for(int i=0;i<n/2;i++)
        {
            int a=deleteatindex(j);
            arr[j-1]=a;
            j++;
        }
        int k=n/2;
        for(int i=k-1;i>=0;i--)
        {
            int val=arr[i];
            list.addlast(val);
        }
        list.display();
    }
}





class binary1 {

    class Node{
        int data;
        Node left,right;
        Node(int ele,Node l,Node r)
        {
            data=ele;
            left=l;
            right=r;
        }
    }
    Node root;
    binary1()
    {
        root=null;
    }
    public Node insert(Node troot,int ele)
    {
        //recursive method
        if(troot!=null)
        {
            if(ele<troot.data)
            troot.left=insert(troot.left,ele);
            else if(ele>troot.data)
            {
                troot.right=insert(troot.right,ele);
            }
        }
        else
        {
            Node newnode=new Node(ele,null,null);
            troot=newnode;
        }
        return troot;

    }
    public void inorder(Node troot)
    {
        if(troot!=null)
        {
            inorder(troot.left);
            System.out.print(troot.data+" ");
            inorder(troot.right);
        }
    }
    public int minvalue(Node troot)
    {
        if(troot!=null)
        {
            Node p=null;
            while(troot!=null)
            {
                p=troot;
                troot=troot.left;
            }
            return p.data;
        }
        else 
        return -1;
    }
    public static void main(String args[])
    {
        binary1 obj=new binary1();
        obj.root=obj.insert(obj.root,50);  //only for recursive method insertion
        obj.insert(obj.root,30);
        obj.insert(obj.root,20);
        obj.insert(obj.root,60);
        obj.insert(obj.root,70);
        obj.insert(obj.root,100);
        int value=obj.minvalue(obj.root);
        System.out.println(value);
        
    }
    
}