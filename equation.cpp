# include <bits/stdc++.h>
// Solved
using namespace std;
bool check(int a){
    for(int i =2; i<=sqrt(a); i++)
    {
        if(a%i==0)
        {
            return true;
        }
    }
    return false;
}
int main(){
    int num;
    cin>>num;
    int a = 4;
    int b = 4+num;
    while(!check(b) || !check(a))
    {
        a++;
        b++;
    }
    cout<<b<<' '<<a;
}