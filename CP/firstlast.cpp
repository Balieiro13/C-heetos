#include <bits/stdc++.h>
using namespace std;

int binaryS(int *v, int x, int l, int r)
{
	if (l <= r) {
		int m = l + (r - l)/2;
		if (x == v[m]) 
			return m;
		if (x < v[m]) 
			return binaryS(v, x, l, (m - 1));
		return binaryS(v, x, (m + 1), r);
	}
	return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, x, i = 0;
        cin >> n >> x;
        int v[n];
        while (i < n){
            cin >> v[i];
            i++;
        }
        int fidx = binaryS(v, x, 0, n-1);
        int lidx = binaryS(v, x + 1, fidx, n-1);
        cout << fidx << " ";
        if (lidx == -1)
            cout << n - 1 << endl;
        else
            cout << lidx - 1 << endl;
    }
    return 0;
}
