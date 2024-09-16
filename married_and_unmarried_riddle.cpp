# include <bits/stdc++.h>
using namespace std;
//  SOLVED 
int main(){
    int test;
    cin>>test;
    while(test--){
        string str;
        cin>>str;
        bool flag = false;
        int size = str.size();
        for(int i=0; i<str.size()-1; i++)
        {
            if(str[i]=='M' && str[i+1]=='U')
            {
                flag = true;
                cout<<"YES\n";
                break;
                
            }
            if(str[i]=='M' && str[i+1]!='M')
            {
                while(str[i+1]=='?')
                {
                    i++;
                }
                if(str[i+1]=='U')
                {
                    flag = true;
                    cout<<"YES\n";
                    break;
                }
            }
            
            
        }
        if(!flag)
        {
            cout<<"No\n";
        }
    }
}