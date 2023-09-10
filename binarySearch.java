class binarySearch{
    public static void main(String[] args) {
        int a[] = new int []{1,3,5,7,9,11,13,15};
        int s=0,e=a.length-1,m;
        int k = 0;
        while(s<=e){
            m =(e + s)/2;
            if(a[m]==k){
                System.out.println("element found at index:"+m);
                break;
            }
            if(k>a[m]){
                s = m + 1;
            }
            if(k<a[m]){
                e = m - 1;
            }
        }
        if(e<s){
            System.out.println("element not found");
        }
    }
}