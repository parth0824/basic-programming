public class sevenStackArray{
    int max = 5;
    int S [] = new int [max];
    int top = -1;
    public void print(){
        int i=0;
        while(i<=top){
            System.out.print(S[i]+" ");
            i++;
        }
        System.out.println();
    }
    public void push(int data){
        if(isFull()){
            System.out.println("Stack overFlow");
            return ;
        }
        top++;
        S[top] = data;
    }
    public void pop(){
        if(isEmpty()){
            System.out.println("Stack underFlow");
            return ;
        }
        System.out.println(S[top]);
        top--;
    }
    public boolean isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    }
    public boolean isFull(){
        if(top == max -1){
            return true;
        }
        return false ;
    }
    public static void main(String[] args) {
        sevenStackArray s = new sevenStackArray();
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);
        s.print();
        s.push(60);
        s.print();
        s.pop();
        s.print();
        s.pop();
        s.print();
        s.pop();
        s.print();
        s.pop();
        s.print();
        s.pop();
        s.pop();
    }    
}