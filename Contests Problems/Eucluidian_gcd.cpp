# include <bits/stdc++.h>
using namespace std;
// GCD using Eculid
// solved 
int gcd(int a,int b)
{
    if(a%b==0)
    {
        return b;
    }
    else{
        return gcd(b,a%b);
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    vector <long long > v1(a);
    vector <long long > v2(b);
    for(int i =0; i<a; i++)
    {
        cin>>v1[i];
    }// Input Array 1
    for(int j =0; j<b; j++)
    {
        cin>>v2[j];
    }// Input array 2
    if(a==1)
    {
        for(int i =0; i<b; i++)
        {
            cout<<v2[i]+v1[0]<<' ';
        }
    }
    else{
        
        for(int i =b-1; i>0 ;i--)
        {
            v1[i]=v1[i]-v1[0];
        }// Differnce array 
        long long gcd_val = v1[1];
        for(int i =1; i<a ;i++)
        {
            gcd_val = gcd(v1[i],gcd_val);
        }
        for(int i =0; i<b; i++)
        {
            cout<<gcd(gcd_val,(v2[i]+v1[0]))<<' ';
        }
    }
    


    
    
}