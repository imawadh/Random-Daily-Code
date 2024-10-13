# include <bits/stdc++.h>
using namespace std;

vector <int> prime_factor(int a)
{
    vector <int> v;
    int end = sqrt(a);
    for(int i =2; i<=end; i++)
    // if(i<=end) this in the condition check it would increase its time but if it would have been i<=sqrt(a) it would have been reduced to some extend think why ? 
    {
        while(a%i==0)
        {
            v.push_back(i);
            a/=i;
        }
    }
    if(v.empty()) v.push_back(a);
    return v;
}
int main(){
    int test;
    cin>>test;
    vector <int> v = prime_factor(test);
    for(int i =0; i<v.size()-1; i++)
    {
        cout<<v[i]<<"*";
    }
    cout<<v[v.size()-1];
    
}