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
        int sum  = 0;
        for (int i =0; i<size ; i++){
            cin>>v[i];
            if(i%2==0)
            {
                sum+=v[i];
            }
            else{
                sum-=v[i];
            }
        }
        cout<<sum<<'\n';
    }
}