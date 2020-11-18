#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j = 0;
    cin >> n;
    while(n--){
        cin >> i;
        j += i;
    }
    if (j == 0)
        cout << "EASY" << endl;
    else
        cout << "HARD" << endl;
    return 0;
}
