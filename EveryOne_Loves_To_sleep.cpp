# include <bits/stdc++.h>
using namespace std;
// Solved
int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b,c;
        cin>>a>>b>>c;
        int time = b*60 + c;
        vector <int> v(a);
        for (int i =0; i<a; i++){
            int d,e;
            cin>>d>>e;
            v[i]=d*60+e;  
        }
        // cout<<time<<'\n';
        int maxt = 1500;
        int mint = v[0];
        for(int i =0; i<a; i++)
        {
            if(v[i]>=time && v[i]-time<=maxt)
            {
                maxt = v[i]-time;
            }
            if(v[i]<mint)
            {
                mint=v[i];
            }
            
        }
        if(maxt!=1500)
        {
            cout<<maxt/60<<' '<<maxt%60<<'\n';
        }
        else{
            cout<<(1440-time + mint)/60 <<' '<<(1440-time + mint)%60<<'\n';
        }
        
    }
}