class star6 {
    public static void main(String args[]){
        int a=5;
        for(int i=1;i<=a;i++){
            for(int j=i;j<=(2*a)-1;j++){
                if(j>=a){
                    System.out.print("* ");
                }
                else System.out.print("  ");
            }System.out.println();
        }
    }
}
