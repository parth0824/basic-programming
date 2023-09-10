public class stackArray {
    int max = 5;
    int arr [] = new int [max];
    int top = -1;
    public void push(int data){
        if(isFull()){
            System.out.println("STACK OVERFLOW");
            return;
        }
        top++;
        arr[top] = data;
    }
    public int pop(){
        if(isEmpty()){
            System.out.println("STACK UNDERFLOW");
            return Integer.MIN_VALUE;
        }
        int x = arr[top];
        top--;
        return x;
    }
    public int peek(){
        if(isEmpty()){
            System.out.println("STACK UNDERFLOW");
            return Integer.MIN_VALUE;
        }
        return arr[top];
    }
    public boolean isEmpty(){
        if(top <= -1){
            return true;
        }
        else{
            return false;
        }
    }
    public boolean isFull(){
        if(top >= max){
            return true;
        }
        else{
            return false;
        }
    }
    public void print(){
        int count = 0;
        while(count <= top){
            System.out.print(arr[count]+"   ");
            count++;
        }
        System.out.println();
    }
    public static void main(String[] args){
        stackArray s = new stackArray();
        s.push(10);
        s.push(20);
        s.push(30);
        System.out.println(s.peek());
        s.print(); 
        s.peek();
        s.print();   
        s.pop();
        s.print();
        s.pop();
        s.print();
        s.pop();
        s.print();
    }
}