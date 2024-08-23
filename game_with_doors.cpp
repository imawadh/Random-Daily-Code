# include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        
        pair <int,int> p1;
        pair <int,int> p2;
        cin>>p1.first>>p1.second>>p2.first>>p2.second;
        
        vector <int> v(100,0);
        if(p1.second<p2.first || p2.second<p1.first)
        {
            cout<<1<<'\n';
        }
      
        else{
            int ans = 0;
            for(int i= p1.first ; i<p1.second; i++)
            {
                v[i-1]++;
            }
            for(int i= p2.first ; i<p2.second; i++)
            {
                v[i-1]++;

            }
            for(int i=0;i<100; i++)
            {
                if(v[i]==2)
                {
                    ans++;
                }
            }
            if(p1.first>p2.first)
            {
                ans++;
            }
            if(p2.second>p1.second)
            {
                ans++;
            }
            cout<<ans<<'\n';
        }
    }
}