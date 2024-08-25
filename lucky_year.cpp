#include<bits/stdc++.h>
using namespace std;
// Done
int main(){
    int test;
    cin>>test;
    int val =test;
    deque <int> q1;
    while(val!=0)
    {
        if(val<=9)
        {
            q1.push_front(val+1);
        }
        else{
            q1.push_front(0);
        }
        val/=10;

    }
    int num = q1.front();
    q1.pop_front();
    while(!q1.empty())
    {
        num = num * 10 + q1.front();
        q1.pop_front();
    }
    cout<<num-test<<'\n';
}