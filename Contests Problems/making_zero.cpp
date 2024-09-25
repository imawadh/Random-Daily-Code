# include <bits/stdc++.h>
using namespace std;
int main(){
    
        int size;
        cin >>size;
        for(int i =0; i<size;i++)
        {
            int a;
            cin>>a;
            int b = a;
            int ct = 0;
            while(a%32768!=0)
            {
                if(a%2==0)
                {
                    a*=2;
                }
                else{
                    a+=1;
                }
                ct++;
                if(a>16384)
                {
                    cout<<ct+32768-a<<' ';
                    break;
                }
                
            }
            
        }
    
}