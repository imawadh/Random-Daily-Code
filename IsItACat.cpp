# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    1st while(test--){
        int size;
        cin >>size;
        string str;
        cin>>str;
        int i = 0;
        while(str[i]=='M' || str[i]=='m')
        {
            if(i==str.size()-1)
            {
                cout<<"No\n";
                continue 1st; 
            }
            i++;
        }
        while(str[i]=='E' || str[i]=='e')
        {
            if(i==str.size()-1)
            {
                cout<<"No\n";
                continue 1st; 
            }
            i++;
        }
        while(str[i]=='O' || str[i]=='o')
        {
            if(i==str.size()-1)
            {
                cout<<"No\n";
                continue 1st; 
            }
            i++;
        }
        while(str[i]=='W' || str[i]=='w')
        {
            if(i==str.size()-1)
            {
                cout<<"Yes\n";
                continue 1st; 
            }
            i++;
        }
        cout<<"No\n";
        
    }
}