# include <bits/stdc++.h>
using namespace std;
// SOLVED 
int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin >>size;
        size*=2;
        vector <int> v(size);
        for (int i =0; i<size ; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int i = 0;
        size-=1;
        int sum = v[i]+v[size];
        bool flag = true;
        while(i<=size)
        {
            if(v[i++]+v[size--]!=sum)
            {
                cout<<"IMBALANCED\n";
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout<<"PERFECT\n";
        }
    }
}