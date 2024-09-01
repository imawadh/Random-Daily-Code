# include <bits/stdc++.h>
using namespace std;
// solved 
int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin >>size;
        string str;
        cin>>str;
        int s1 = sqrt(size);
        if(s1*s1 != size)
        {
            cout<<"No\n";
            continue;
        }
        else{
            int idx = 0;
            bool flag = true;
            for(int i =0; i<s1; i++)
            {
                for(int j = 0; j<s1 ; j++)
                {
                    if(i==0 || i==s1-1 || j==0 || j==s1-1)
                    {
                        if(str[idx]!='1')
                        {
                            flag = false;
                            cout<<"No\n";
                            break;
                        }
                    }
                    else{
                        if(str[idx]!='0')
                        {
                            flag = false;
                            cout<<"No\n";
                            break;
                        }
                    }
                    idx++;
                }
                if(flag==false)
                {
                    break;
                }
            }
            if(flag)
            {
                cout<<"Yes\n";
            }
        }
    }
}