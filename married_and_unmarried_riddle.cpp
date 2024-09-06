# include <bits/stdc++.h>
using namespace std;
// NOT SOLVED 
int main(){
    int test;
    cin>>test;
    while(test--){
        string str;
        cin>>str;
        bool flag = false;
        for(int i=0; i<str.size()-1; i++)
        {
            if(str[i]=='M' &&  str[i+1] == 'U')
            {
                
                cout<<"Yes\n";
                flag = true;
                break;
            }
            if(str[i]=='M' && (str[i+1]=='?'))
            {
                if(i!=str.size()-2 && str[i+2]=='U' )
                {
                    cout<<"Yes\n";
                    flag = true;
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