# include <bits/stdc++.h>
using namespace std;
// solved
int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin >>size;
        vector <int> v(size);
        for (int i =0; i<size ; i++){
            cin>>v[i];
        }
        int start=0;
        while(v[start]==0)
        {
            start++;
        }
        if(start==size-1)
        {
            cout<<0<<'\n';
            continue;
        }
        else{
            long long sum =0;
            int ct = 0;
            for(start;start<size-1;start++)
            {
                if(!v[start])
                {
                    ct++;
                }
                sum+=v[start];
            }
            
            cout<<sum+ct<<'\n';
        }

    }
}