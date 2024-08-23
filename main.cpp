# include <iostream>
# include <string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int count = 0;
    for(int i =0; i<str.size(); i++)
    {
        if(str[i]>=96)
        {
            count++;
        }
        else{
            count--;
        }
    }
    if(count>-1)
    {
        for(int i =0; i<str.size(); i++)
        {
            if(str[i]<96)
            {
                cout<<char(str[i]+32);
            }
        else{
            cout<<str[i];
            }   
        }
    }
    else{
        for(int i =0; i<str.size(); i++)
        {
            if(str[i]>96)
            {
                cout<<char(str[i]-32);
            }
        else{
            cout<<str[i];
            }   
        }
        
    }
    
}