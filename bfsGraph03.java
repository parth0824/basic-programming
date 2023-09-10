import java.util.*;
public class bfsGraph03 {
    LinkedList<Integer> l[];
    bfsGraph03(int v){
        for(int i=0;i<v;i++){
            l[i] = new LinkedList<>();
        }
    }
    public void insert(int s,int d){
        l[s].add(d);
        l[d].add(s);
    }
    public void bfs(int source){
        boolean visited [] = new boolean [l.length];
        int parent [] = new int [l.length];
        Queue<Integer> q = new LinkedList<>();
        visited[source] = true ;
        parent[source] = -1;
        q.add(source);
        while(! q.isEmpty()){
            int p = q.poll();
            System.out.println(p+" ");
            for(int i:l[p]){
                if(visited[i] != true){
                    visited[i] = true;
                    q.add(i); 
                    parent[i] = p;
                }
            }
        }
    }
    public void dfs(int source){
        boolean visited [] = new boolean [l.length];
        int parent [] = new int [l.length];
        Stack<Integer> s = new Stack<>();
        visited[source] = true ;
        parent[source] = -1;
        s.add(source);
        while( !s.isEmpty()){
            int p = s.pop();
            System.out.println(p+" ");
            for(int i:l[p]){
                if(visited[i] != true ){
                    visited[i] = true ;
                    parent[i] = p;
                    s.add(i);
                }
            }
        }
    }
      
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int e = sc.nextInt();
        int v = sc.nextInt();
        bfsGraph03 b = new bfsGraph03(v);
        for(int i=0;i<e;i++){
            int s = sc.nextInt();
            int d = sc.nextInt();
            b.insert(s, d);
        }
    }
    
}
