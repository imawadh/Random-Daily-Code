# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int val;
        cin>>val;
        vector <pair<int,int>> v(val);
        for(int i =0; i<val; i++)
        {
            int a,b;
            cin>>a>>b;
            v[i].first=a;
            v[i].second=b;
        }
        int ans = 0;
        for(int i =0; i<val; i++)
        {
            for(int j=i+1; j<val; j++)
            {
                for(int k=j+1; k<val; k++)
                {
                    
                }
            }
        }

    }
}