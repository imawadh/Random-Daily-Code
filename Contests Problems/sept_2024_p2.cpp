# include <bits/stdc++.h>
using namespace std;
// solved
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,x;
        cin >>n>>x;
        vector <int> v(n);
        int m = INT_MIN;
        long long sum = 0;
        for(int i =0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]>m)
            {
                m = v[i];
            }
            sum+=v[i];
        }
        if(sum%x==0)
        {
            if(m>sum/x)
            {
                cout<<m<<'\n';
            }
            else{
                cout<<sum/x<<'\n';
            }
        }
        else{
            if(m>sum/x+1)
            {
                cout<<m<<'\n';
            }
            else{
                cout<<sum/x+1<<'\n';
            }
            
        }
    }
}