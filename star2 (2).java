class star2 {
    public static void main (String args[]){
        int a=4;
        for(int i=1;i<=a;i++){
            for(int j=1;j<=a-i+1;j++){
                System.out.print(j);
            }
            System.out.println();
        }
    }
}
