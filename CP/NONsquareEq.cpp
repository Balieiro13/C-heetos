#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, arr[];
    cin >> n >> m;
    k = 0;
    for (int b = 1; b <= n; b++){
        for (int c = 1; c <= m; c++){
            if (4*b*b - (4*c) > 0)
                k += 2;
        }
    }
    cout << k << "\n";
    return 0;
}
