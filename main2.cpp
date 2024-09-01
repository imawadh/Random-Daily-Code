# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int size1,size2;
        cin >>size1>>size2;
        vector <int> v(size1);
        for (int i =0; i<size1 ; i++){
            cin>>v[i];
        }
        int ans = 0;
        sort(v.begin(),v.end());
        while(size2--)
        {   char a;
            int b,c;
            cin>>a>>b>>c;
            if(a=='+'){
                for (int i =0; i<size1; i++){
                    if(v[i]>c)
                    {
                        break;
                    }
                    if(v[i]>=b)
                    {
                        v[i]+=1;
                    }
                    
                }
            }
            else{
                for (int i =0; i<size1; i++){
                    if(v[i]>c)
                {
                    break;
                }
                if(v[i]>=b)
                    {
                        v[i]-=1;
                    }
                
                }
                
            } 
            cout<<v[size1-1]<<' ';
        }
        cout<<endl;
    
}
}