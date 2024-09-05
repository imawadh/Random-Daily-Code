# include <bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    vector <pair<int,int>>v(size);
    for(int i =0; i<size; i++)
    {
        
        cin>>v[i].first>>v[i].second;

        long long int c = 1000000007;
        if(v[i].first<0)
        {
            cout<<1<<'\n';
        }
        else{
            long long int d = pow(v[i].first,v[i].second-1);
            cout<<d%c<<'\n';
        }

    }
}