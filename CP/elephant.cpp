#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll int mdc(ll int n, ll int d)
{
    if (d == 0)
        return n;

    return mdc(d, n%d);

}

int main()
{
    int x;
    cin >> x;
    if (x > 0 && x <=5){
        cout << 1 << "\n";
        return 0;
    }
    int k = x % 5;
    if (k == 0){
        cout << x / 5 << "\n";
        return 0;
    }
    cout << (x / 5) + 1 << "\n";
    return 0;
}
