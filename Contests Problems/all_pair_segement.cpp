# include <bits/stdc++.h>
using namespace std;
// not solved
int main(){
    int test;
    cin>>test;
    while(test--){
       int s1;
       int s2;
       cin>>s1>>s2;
       vector<int> v1(s1);
       vector <long long> v2(s2);
       for(int i =0; i<s1; i++)
       {
        cin>>v1[i];
       }
       for(int i =0; i<s2; i++)
       {
        cin>>v2[i];
       }
       if(s1==1)
       {
            for(int i = 0; i<s2; i++)
            {
                if(v2[i]==1)
                {
                    cout<<0<<' ';
                }
                else{
                    cout<<0<<" ";
                }
            }
            cout<<"\n";
            continue;
       }
       long long check = (s1*(s1-1))/2;
       cout<<"\n"<<check<<'\n';
       for(int i =0; i<s2; i++)
       {
            if(v2[i]>=check){
                cout<<0<<" ";
            }
            else{
                cout<<-1<<" ";
            }
       }
       cout<<'\n';


    }
}