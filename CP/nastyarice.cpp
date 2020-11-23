#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, a, b, c, d;
    cin >> t;
    while (t--){
        cin >> n >> a >> b >> c >> d;
        int wM = n * (a + b);
        int wm = n * (a - b);
        if (wM < c - d || c + d < wm)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}
