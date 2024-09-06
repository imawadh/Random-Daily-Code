# include <bits/stdc++.h>
using namespace std;
// not solved 
int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b;
        cin>>a>>b;
        int ans = 0;
        for(int i =0; i<a; i++)
        {
            vector<int> v(b,0);
            for(int j =0; j<b; j++ )
            {
                int c; 
                cin>>c;
                v[i]=c;
            }
                int c = b-1;
                int idx = 0;
                while(c>=0)
                {
                    ans = ans + v[idx++]*c;
                    c-=2;
                }
                
                while(c!=b)
                {
                    ans = ans - v[idx++]*c;
                    c+=2;
                }
                cout<<ans<<'\n';
        }
        
    }
}