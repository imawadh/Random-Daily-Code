# include <bits/stdc++.h>
using namespace std;
//solved
int main(){
    int test;
    cin>>test;
    while(test--){
        int size;
        cin >>size;
        int ct1=0;
        int ct2=0;
        int max1 =0;
        int max2 =0;
        int sum1 = 0;
        int sum2=0;
        vector <int> v(size);
        for (int i =0; i<size ; i++){
            cin>>v[i];
            if(i%2==0)
            {
                sum2+=v[i];
                ct2++;
                if(max2<v[i])
                {
                    max2 = v[i];
                }
            }
            else{
                sum1+=v[i];
                ct1++;
                if(max1<v[i])
                {
                    max1 = v[i];
                }
            }
            
        }
        cout<<max(max1+ct1,max2+ct2)<<'\n';
    }
}