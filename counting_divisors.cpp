# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int num;
        cin>>num;
        int ans = 0;
        for(int i =2; i<=sqrt(num);i++)
        {
            if(num%i==0) {ans++;}

        }
        int val = static_cast<int>(round(sqrt(num)));
        if(val*val==num)
        {
            cout<<2*ans+1<<'\n';
        }
        else{
            cout<<2*ans+2<<'\n';
        }
    }
}