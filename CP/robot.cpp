#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int x, y, ans;
        cin >> x >> y;
        if(x >= y){
            x -= y;
            if (x == 0)
                ans = 2*y;
            else
                ans = 2 * y + 2 * (x - 1) + 1;
        } else {
            y -= x;
            ans = 2 * x + 2 * (y - 1) + 1;
        }
        cout << ans << endl;
    }
    return 0;
}
