# include <bits/stdc++.h>
using namespace std;
// solved 
int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin >>size;
        int i = size/5;
        int a = size%5;
        for(int j=0; j<i; j++)
        {
            cout<<"a";
            
        }
        if(a>0)
            {
                cout<<"a";
                a--;
            }
        for(int j=0; j<i; j++)
        {
            cout<<"e";
            
        }
        if(a>0)
            {
                cout<<"e";
                a--;
            }
        for(int j=0; j<i; j++)
        {
            cout<<"i";
            
        }
        if(a>0)
            {
                cout<<"i";
                a--;
            }
        for(int j=0; j<i; j++)
        {
            cout<<"o";
            
        }
        if(a>0)
            {
                cout<<"o";
                a--;
            }
        for(int j=0; j<i; j++)
        {
            cout<<"u";
            
        }
        if(a>0)
            {
                cout<<"u";
                a--;
            }
        // i = size%5;
        // string str = "aeiou";
        // for(int j=0; j<i; j++)
        // {
        //     cout<<str[j];
        // }
        cout<<'\n';

    }
}