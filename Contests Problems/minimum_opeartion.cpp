#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;

        if (k == 1) {
            cout << n << '\n';  // If k is 1, we need n operations.
            continue;
        }

        int ans = 0;
        while (n != 0) {
            
            int power = 1;  
            while (power <= n) {
                power *= k;
            }
            power /= k;  
            n -= power;  
            
            ans++;       
        }
        cout << ans << '\n';
    }
    return 0;
}
