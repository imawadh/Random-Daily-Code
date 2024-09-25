# include <bits/stdc++.h>
using namespace std;
// not solved 
int main(){
    int test;
    cin>>test;
    while(test--){
        int size,val;
        cin >>size>>val;
        vector <int> v(size);
        int sum = 0;
        for (int i =0; i<size ; i++){
            cin>>v[i];
            sum+=v[i];
        }
        if(val>size){
            cout<<-1<<'\n';
            continue;
        }
        if(sum==val)
        {
            cout<<0<<'\n';
            continue;
        }
        if(sum<val)
        {
            cout<<-1<<'\n';
            continue;
        }
        int ct =0;
        int p1 = 0;
        int p2 = size-1;
        while(sum!=val)
        {
            if(v[p1]==1)
            {
                ct++;
                p1++;
                sum-=1;
            }
            else if(v[p2]==1)
            {
                ct++;
                p2--;
                sum-=1;
            }
            else{
                int c1 = 0;
                int c2 = 0;
                while(v[p1]!=1)
                {
                    p1++;
                    c1++;
                }
                while(v[p2]!=1)
                {
                    p2--;
                    c2++;
                }
                if(c1<c2)
                {
                    ct+=c1;
                    p2 = p2+c2;
                }
                else{
                    ct+=c2;
                    p1 = p1+c1;
                }
                sum-=1;
                ct++;
            }
            if(sum==val)
            {
                cout<<ct<<'\n';
                break;
            }
            

        } 
       
        

    }
}