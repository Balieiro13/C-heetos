#include <bits/stdc++.h>
using namespace std;

int minord(int x)
{
    int i = 2;
    while (x % i != 0)
        i++;
    return i;
}

int main()
{
    int t, n, k;
    cin >> t;
    while (t--){
        cin >> n >> k;
        int d = minord(n);
        n += d + (k-1)*2;
        cout << n << "\n";
    }
    return 0;
}
