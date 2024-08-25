# include <bits/stdc++.h>
using namespace std;
// Done

int main(){
    int test;
    cin>>test;
    vector <int> v(test);
    for (int i =0; i<test ; i++){
        cin>>v[i];
    }
    if(test==1)
    {
        cout<<"YES";
    }
    else{
        int idx = 0;
        bool flag = false;
        while(v[idx]<v[idx+1])
        {
            idx++;
            if(idx==test-1)
            {
                flag = true;
                break;
            }
        }
        if(!flag){
            while(v[idx]==v[idx
            +1])
            {
                idx++;
                if(idx==test-1 )
                {
                    flag = true;
                    break;
                }
            }
        }
        if(!flag){
            while(v[idx]>v[idx+1])
            {
                idx++;
                if(idx==test-1 )
                {
                    flag = true;
                    break;

                }
            }
        }
        if(flag)
        {
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }   
            
    
}