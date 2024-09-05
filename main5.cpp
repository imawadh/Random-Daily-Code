# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b;
        cin>>a>>b;
        // long long sum1=b;
        // long long sum2=a+b-1;
        // long long val = a+b-1;
        // while(val!=b)
        // {
        //     if(sum1<sum2)
        //     {
        //         sum1+=(++b);
        //     }
        //     else{
        //         sum2+=(--val);
        //     }
        // }       
        cout<<abs(sum2-sum1)<<'\n';
    }
}