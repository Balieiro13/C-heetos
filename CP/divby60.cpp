#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string n;
    cin >> t;
    while(t--){
        cin >> n;
        int i = 0, j = 0, sum = 0;
        for (int k = 0; n[k]; k++){
            sum += n[k];
            if(n[k] == '0')
                i++;
            if ((n[k] - '0') % 2 == 0)
                j++;
        }
        if (i > 0 && j > 1 && sum%3 == 0)
            cout << "red" << endl;
        else
            cout << "cyan" << endl;
    }
    return 0;
}