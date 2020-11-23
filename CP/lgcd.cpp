#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main()
{
    int t;
    ll int p, q;
    cin >> t;
    while (t--){
        ll int b = 1;
        vector<ll int> dvs;
        cin >> p >> q;
        for (ll int i = 1; i <= sqrt(q); i++)
            if (q % i == 0){
                dvs.push_back(i);
                dvs.push_back(q/i);
            }

        for (ll int j = 0; j < dvs.size(); j++){
            ll int a = p / dvs[j];
            if (a % q != 0)
                b > a ? b = b : b = a;
        }
        cout << b << endl;
    }
    return 0;
}
