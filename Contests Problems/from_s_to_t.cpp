#include <bits/stdc++.h>
using namespace std;
// solved
bool isSubSequence(string A, string B) 
    {
        int inx = 0;
        for(int i = 0 ; i<A.size(); i++)
        {
            bool flag = false;
            for(int j = inx; j<B.size(); j++)
            {
                if(B[j]==A[i])
                {
                    flag = true;
                    inx = j+1;
                    break;
                    
                }
            }
            if(!flag)
            {
                return false;
            }
        }
        return true;
    }
int main() {
    int test;
    cin >> test;
    while (test--) {
        string s, t, p;
        cin >> s >> t >> p;
        
        vector<int> vs(26, 0);
        vector<int> vt(26, 0);
        vector<int> vp(26, 0);
        
        for (int i = 0; i < s.size(); i++) {
            vs[s[i] - 'a'] += 1;
        }
        for (int i = 0; i < t.size(); i++) {
            vt[t[i] - 'a'] += 1;
        }
        for (int i = 0; i < p.size(); i++) {
            vp[p[i] - 'a'] += 1;
        }
        
        
        if(isSubSequence(s,t))
        {
            bool flag =  true;
            for(int i =0; i<26; i++)
            {
                if(vs[i]+vp[i]<vt[i])
                {
                    flag = false;
                    break;
                }
            }
            if(flag == false)
            {
                cout<<"NO\n";
                continue;
            }
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

        
    }
}
