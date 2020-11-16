#include <bits/stdc++.h>
using namespace std;
#define ll long long

int badtri(ll int *arr, int n)
{
    for (int b = 0; b < n-2; b++){
        ll int sum = arr[b] + arr[b+1];
        if (sum <= arr[n-1]){
            cout << b+1 << " " << b+2 << " " << n << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
    return 0;
}

int main()
{
    int t, i, j, k, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll int arr[n];
        for (int a = 0; a < n; a++){
            cin >> arr[a];
        }
        badtri(arr, n);
    }
    return 0;
}