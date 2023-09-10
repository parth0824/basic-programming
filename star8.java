class star8{
    public static void main (String args[]){
        int a=5;
        for(int i=1;i<=a;i++){
            for(int j=i;j<a;j++){
                System.out.print(" ");
            }
            for(int j=i;j>=1;j--){
                System.out.print(j);
            }
            for(int j=2;j<=i;j++){
                System.out.print(j);
            }
            System.out.println();
        }
    }
}