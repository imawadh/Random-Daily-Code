# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin >>size;
        vector <int> v(size);
        int sum = 0;
        for (int i =0; i<size ; i++){
            cin>>v[i];
            sum+=v[i];  
        }
        if(size<=2)
        {
            cout<<-1<<'\n';
        }
        
        else{
            
            sort(v.begin(),v.end());
            
            int ct  =0;
            while(sum/(size*2)<v[size/2])
            {
                sum+=1;
                ct++;

            }
            if(ct==0) cout<<0<<'\n';
            else cout<<ct+1<<'\n';
        }
       
    }
}