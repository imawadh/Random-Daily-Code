# include <bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &arr) {
        
        if(arr[0]<arr[arr.size()-1])
        {
            cout<<"x"<<"\n";
            return 0;
        }
        else{
            int low = 0;
            int high = arr.size()-1;
            while(low<=high)
            {
                int mid = low + (high-low)/2;
                if(arr[mid-1]>arr[mid])
                {
                    cout<<"y"<<'\n';
                    return mid+1;
                }
                else if(arr[low]<arr[mid])
                {
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        cout<<"z"<<'\n';
        return 0;
    }
    int main()
    {
        vector <int> v = { 1, 2, 3, 4};
        int x = findKRotation(v);
        cout<<x<<'\n';
    }