#include <bits/stdc++.h>
using namespace std;
// 
int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--)
	{
	    int size;
	    cin>>size;
	    vector <int> v(size);
	    for(int i =0; i<size; i++)
	    {
	        cin>>v[i];
	    }
	    int start = 0;
	    int end = size-1;
	    while(start<=end)
	    {
	        if(v[start]==start+1)
	        {
	            start++;
	        }
	        else if(v[end]==end+1)
	        {
	            end--;
	        }
	        else break;
	    }
        // cout<<"Start = "<<start<< "  end = "<<end<<'\n';
	    if(start==end+1)
	    {
            cout<<0<<'\n';
            continue;
	    }

	    else{
	        int max = 0; 
            int idx = 0;
	        for(int i =start; i<=end;i++)
	        {
	            if(v[i]>max)
	            {
	                max = v[i];
                    idx = i;
                    
	            }
	        }
            // cout<<"idx  = "<<idx<<" end = "<<end<<'\n';
            int m2 = 0;
            for(int i = idx+1; i<=end;i++)
	        {
	            if(v[i]>m2)
	            {
	                m2 = v[i];
	            }
	        }
            cout<<m2+max<<'\n';
	        
            
	    }
	    
	    
	    
	}

}
