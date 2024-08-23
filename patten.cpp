
# include <iostream>
using namespace std;
int main(){
    // int test;
    // cin>>test;
    // while(test--)
    // {
        int a,b;
        cin>>a>>b;
        for(int i =1; i<=a; i++)
        {
            for(int j=1; j<=b; j++)
            {
                
                if(i%2==1) cout<<"#";
                else{
                    if(i%4==0 )
                    {
                        if(j==1)
                        cout<<'#';
                        else cout<<'.';
                    }
                    else if(i%2==0)
                    {
                        if(j==b)
                        cout<<'#';
                        else cout<<'.';
                    }
                    
                }
            }
            cout<<"\n";
        }
        
    
}