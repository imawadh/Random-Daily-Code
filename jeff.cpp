# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    // Solved
    cin>>test;
    while(test--){
        int a,b;
        cin>>a>>b;
        string str;
        cin>>str;
        int ans = a-b;
        b-=1;
        for(;b<str.size();b++)
        {
            if(str[b]=='#')
            {
                ans++;
            }
        }
        if(ans>=a)
        {
            cout<<"JEFF\n";
        }
        else{
            cout<<"JAY\n";
        }
    }
}