# include <bits/stdc++.h>
using namespace std;
// GCD using Eculid
int gcd(int a,int b)
{
    if(a%b==0)
    {
        return b;
    }
    else{
        return gcd(b,a%b);
    }
}
int main(){
    // int t;
    // cin>>t;
    // int d;
    // cin >>d;
    // vector <int> v(t);
    // for (int i =0; i<t ; i++){
    //     cin>>v[i];
    // }
    cout<<gcd(6,12);
    
}