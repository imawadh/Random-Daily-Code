# include <bits/stdc++.h>
using namespace std;
// solved
int main(){
    int t;
    cin>>t;
    while(t--){
        int size;
        cin >>size;
        string str;
        cin>>str;
        if(str[0]==str[str.size()-1])
        {
            cout<<"N0\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}