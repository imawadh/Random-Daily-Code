# include <bits/stdc++.h>
using namespace std;
//Solved 
int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin >>size;
        string str;
        cin>>str;
        if(str[0]=='M' ||str[size-1]=='M')
        {
            cout<<"NO\n";
            continue;
        }
        int cm=0,ct=0;
        for(int i=0; i<str.size(); i++)
        {
            if(cm>ct)
            {
                break;
            }
            if(str[i]=='T')    ct++;
            else cm++;
        }
        if(ct==2*cm)
        {
            ct = 0;
            cm = 0;
           for(int i=size-1; i>=0; i--)
            {
                if(cm>ct)
                {
                    break;
                }
                if(str[i]=='T')    ct++;
                else cm++;
            }
            if(ct==2*cm) cout<<"YES\n";
            else cout<<"No\n";

        }
        else{
            cout<<"NO\n";
        }
        

    }
}