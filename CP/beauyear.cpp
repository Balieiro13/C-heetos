#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int y;
    cin >> y;
    for (int i = y+1; i <= 9012; i++){
        int n1, n2, n3, n4;
        n1 = i%10; n2 = i/10 % 10; n3 = i / 100 % 10; n4 = i/1000 % 10;
        if (n1 != n2 && n1 != n3 && n1 != n4 && n2 != n3 && n2 != n4 && n3 != n4){
            cout << i << "\n";
            return 0;
        }
    }
}
