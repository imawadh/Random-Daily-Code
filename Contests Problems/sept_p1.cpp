# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int size,seats;
        cin >>size>>seats;
        vector <int> v(size);
        int ans = 0;
        int sum = 0;
        for (int i =0; i<size ; i++){
            cin>>v[i];
            sum += v[i];
            ans += (v[i]/2);
        }
        int rs = seats-ans;
        ans*=2;
        int rp = sum-ans;
        if(rp<=rs)
        {
            ans+=rp;
        }
        else{
            ans = ans +  rs*2 - rp;
        }
        cout<<ans<<'\n';
        
        
    }
}