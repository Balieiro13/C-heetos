#include <bits/stdc++.h>
using namespace std;

void isort(int *v, int n){
    for (int i = 1; i < n; i++){
        int key = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] < key){
            v[j + 1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}

int main(){
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        int v[n], w[n];
        for (int i = 0; i < n; i++)
            cin >> v[i];

        isort(v, n);

        for(int l = 0; l < n; l++)
            cout << v[l] << " ";
        cout << "\n";
    }
    return 0;
}
