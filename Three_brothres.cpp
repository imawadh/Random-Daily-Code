# include <bits/stdc++.h>
using namespace std;
// solved 
int main(){
    
        
        vector <int> v(2);
        for (int i =0; i<2 ; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(v[0]!=1)
        {
            cout<<1<<'\n';
        }
        else if(v[1]!=2)
        {
            cout<<2<<'\n';
        }
        else{
            cout<<3<<'\n';
        }
    
}