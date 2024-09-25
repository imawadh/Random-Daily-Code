# include <bits/stdc++.h>
using namespace std;
int main(){
    // solved
    
        int size;
        cin >>size;
        vector <int> v(size);
        int ncount = 0;
        int zcount = 0;
        long long ans = 0;
        for (int i =0; i<size ; i++){
            cin>>v[i];
            if(v[i]>=1 || v[i]<=-1) ans += (abs(v[i])-1);
            if(v[i]==0) zcount++;
            if(v[i]<=-1)
            {
                ncount++;
            }
        }
        if(ncount%2==1)
        {
            if(zcount>=1)
            {
                zcount-=1;
                ans+=1;
            }
            else{
                ans+=2;
            }
            
        }
        ans+=zcount;
        cout<<ans<<'\n';
    
}