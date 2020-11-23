#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int j = 0; j < n; j++){
        int val;
        cin >> val;
        v.push_back(val);
    }
    int b = v[0];
    for (int i = 1; i < v.size(); i++)
        b > v[i] ? b = b : b = v[i];
    cout << b << endl;
    return 0;
}
