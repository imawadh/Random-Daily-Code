# include <bits/stdc++.h>
using namespace std;
int main(){
    
        int size;
        cin >>size;
        vector <int> v(size);
        int max = 0;
        for (int i =0; i<size ; i++){
            cin>>v[i];
            if(v[i]>max)
            {
                max = v[i];
            }
        }
        int ans = 0;
        for (int i =0; i<size ; i++){
            if(v[i]<max)
            {
                ans+=(max-v[i]);
            }
        }
        cout<<ans;

    
}