# include <bits/stdc++.h>
using namespace std;
// solved
int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b;
        cin>>a>>b;
        if(a%2==0)
        {
            a+=1;
        }
        int ct  = 0;
        for(int i =a; i<=b; i++)
        {
            if(i+2<=b)
            {
                i+=3;
                ct++;
            }
        }
        cout<<ct<<'\n';
    }
}