# include <bits/stdc++.h>
using namespace std;
// solved
int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b;
        cin>>a>>b;
        int ans = 0;
        int start = 1;
        while(a<=b)
        {
            a+=start;
            start++;
            ans++;
        }
        cout<<ans<<'\n';
    }
}