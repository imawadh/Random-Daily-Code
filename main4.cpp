# include <bits/stdc++.h>
using namespace std;
//not solved
int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b,c;
        cin>>a>>b>>c;
        a+=(c-1);
        b+=(c-1);
        int ans;
        if(max(a,b)==a)
        {
           
            ans = 2*(a/c)-1;
        }
        else{
            
            ans = 2*(b/c);
        }
        cout<<ans<<'\n';

    }
}