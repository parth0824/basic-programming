class star5 {
    public static void main(String args[]){
        int a=4;
        for(int i=1;i<=a;i++){
            for(int j=1;j<=(2*a);j++){
                if((j<=i)||(j>(2*a)-i)){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        for(int i=a;i>=1;i--){
            for(int j=1;j<=(2*a);j++){
                if((j<=i)||(j>(2*a)-i)){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
