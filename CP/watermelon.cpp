#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int w;
    cin >> w;
    if (w > 2 && w % 2 == 0){
        cout << "YES" << "\n";
        return 0;
    }
    cout << "NO" << "\n";
    return 0;
}
