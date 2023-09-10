class Solution {
public:
    vector<int> searchRange(vector<int>& b, int key) {
        if(b.size() == 1){
            vector<int> q;
            q.push_back(0);
            q.push_back(0);
            return q;
        }
        int f = -1 , e = -1,m;
        int s = 0, l = b.size();
        while(s < l){
            m = (s + l) /2;
            if(b[m] == key){
                f = m;
                l = m;
            }
            else if(b[m] > key){
                l =  m -1;
            }
            else if(b[m] < key){
                s = m + 1;
            }
        }
        s = 0;
        l = b.size();
        while(s < l){
            m = (s + l )/ 2;
            if(b[m] == key){
                e = m;
                s = m;
            }
            else if(b[m] > key){
                l = m - 1;
            }
            else if(b[m] < key){
                s = m + 1;                
            }
        }
        vector<int> g;
        g.push_back(f);
        g.push_back(e);
        return g;
    }
};