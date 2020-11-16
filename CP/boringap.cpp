#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x;
    cin >> t;
    while (t--){
        cin >> x;
        int n0 = x % 10;
        int sum = 10 * (n0 - 1);
        int i = 0; 
        while (x > 0){
            x /= 10;
            sum += ++i;
        }
        cout << sum << "\n";
    }
    return 0;
}
