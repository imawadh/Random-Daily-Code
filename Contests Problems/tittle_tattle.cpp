# include <bits/stdc++.h>
using namespace std;
// not solved 
int main(){
    int a,b;
    cin>>a>>b;
    vector <int> v(a);
    for(int i=0; i<a; i++)
    {
        cin>>v[i];
    }
  
    vector <int> v1(a,0);
    int sum  =0;
    for(int i =0 ;i<b; i++)
    {
        int c,d;
        cin>>c>>d;
        if(v1[c-1])
        {
            v1[d-1]=1;
        }
        else{
            v1[c-1]=true;
            v1[d-1]=true;
            sum+=v[c-1];
        }
    }
    for(int i=0; i<a; i++)
    {
        if(v1[i]) continue;
        else sum+=v[i];
    }
    cout<<sum<<'\n';

}