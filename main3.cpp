# include <bits/stdc++.h>
using namespace std;
int main(){
    // solved
    int test;
    cin>>test;
    while(test--){
        int a,b; 
        cin>>a>>b;
        if(b%2==1)
        {
            b +=1;
            a-=2;
        }
        if(a>=0)
        {
            if(a%2==0)
            {
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
        else{
            cout<<"No\n";
        }
    }
}