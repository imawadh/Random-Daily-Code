# include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    vector <long long > v1(a);
    vector <long long > v2(b);
    for(int i =0; i<a; i++)
    {
        cin>>v1[i];
    }
    for(int j =0; j<b; j++)
    {
        cin>>v2[j];
    }
    
    
    for(int i =0; i<b ;i++)
    {
        bool flag = true;
        long long sum = v2[i] + v1[0];
        for(int j =0; j<a ;j++)
        {
            if((v2[i]+v1[j])%sum!=0)
            {
                flag = false;
                break;
            }
        }
        if(flag )
        {
            cout<<sum <<" ";
        }
        else{
            cout<<1<<' ';
        }
    }

}