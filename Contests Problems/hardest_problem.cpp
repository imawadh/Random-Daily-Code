# include <bits/stdc++.h>
using namespace std;
// solved 
int main(){
    int test;
    cin>>test;
    while(test--){
        string s1,s2;
        cin>>s1>>s2;
        int idx = s1.size()-1;
        bool flag = false;
        for(int i = s2.size()-1; i>=0; i--)
        {
            flag = false;
            for(int j = idx; j>=0; j--)
            {
                if(s1[j]==s2[i])
                {
                    flag = true;
                    s1[j]='*';
                    idx=j;
                    break;
                }
            }
            for(int j =idx+1; j<s1.size(); j++)
            {
                if(s1[j]==s2[i])
                {
                    flag = false;
                    break;
                }   
            }
            if(flag==false)
            {
                cout<<"NO\n";
                break;
            }
        }
        if(flag)
        {
            cout<<"YES\n";
        }

    }
}