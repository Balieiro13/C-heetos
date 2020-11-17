#include <bits/stdc++.h>
using namespace std;

int max(int a, int b){
    return a > b ? a : b;
}

int main()
{
    int n, b = 0, asum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        asum += arr[i];
        b = b > arr[i] ? b : arr[i];
    }
    int med = (asum / n)*2 + 1;
    cout << max(med, b) << "\n";
    
    return 0;
}
