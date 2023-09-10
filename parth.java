class parth{
    public static void main (String args []){
        int a=4,b=4;
        for(int i=1;i<=a;i++){
            for(int j=1;j<=b-i;j++){
                System.out.print(" ");
            }
            for(int j=b-i;j<b;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}