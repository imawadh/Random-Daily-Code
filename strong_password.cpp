# include <bits/stdc++.h>
using namespace std;
//solved
int main(){
    int test;
    cin>>test;
    while(test--){
        string str;
        cin>>str;
        bool flag = false;
        cout<<str[0];
        for(int i =1; i<str.size(); i++)
        {
            
            if(str[i]==str[i-1] && flag == false)
            {
                flag=true;
                if(str[i]=='a')
                {
                    cout<<'b';
                }
                else{
                    cout<<'a';
                }
                
            }
            cout<<str[i];
        }
        if(!flag)
        {
            if(str[str.size()-1]=='a')
            {
                cout<<'b';
            }
            else{
                cout<<'a';
            }
            
        }
        cout<<endl;
        
           
       
    }
    }
