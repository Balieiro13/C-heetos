#include <iostream>
<<<<<<< HEAD
#include <tuple>
using namespace std;

tuple<int, int, int> itoj (int x, int y)
{
    int a = 0, b = 0, c = 0;
    bool boo = 1;
    while (a < x){
        if (boo){
            a++;
            boo = !boo;
        } else {
            if (b < y){
                b++;
                boo = !boo;
            } else {
                c++;
                boo = !boo;
            }
        }
    }
    return make_tuple(a, b, c);
}
tuple<int,int,int> jtoi (int x, int y)
{
    int a = 0, b = 0, c = 0;
    bool boo = 1;
    while (b < y){
        if (boo){
            b++;
            boo = !boo;
        } else {
            if (a < x){
                b++;
                boo = !boo;
            } else {
                c++;
                boo = !boo;
            }
        }
    }
    return make_tuple(a, b, c);
}

int main()
{
    int t, x, y;
    cin >> t;
    while (t--){
        tuple<int,int,int> ans1;
        tuple<int,int,int> ans2;
        bool boo = 1;
        cin >> x >> y;
        ans1 = itoj(x,y);
        ans2 = jtoi(ans1[0], ans1[1]):
        cout << ans[0] + ans[1] + ans[2];
    }
    return 0;
}
//
//while (a < x){
//    if (boo){
//        a++;
//        boo = !boo;
//    } else {
//        if (b < y){
//            b++;
//            boo = !boo;
//        } else {
//            c++;
//            boo = !boo;
//        }
//    }
//}
//boo = 1;
//while (b < y){
//    if (boo){
//        b++;
//        boo = !boo;
//    } else {
//        if (a < x){
//            b++;
//            boo = !boo;
//        } else {
//            c++;
//            boo = !boo;
//        }
//    }
//}
=======
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
>>>>>>> af9a1fe1cee6ba796e4c64cc83c9817898d3d1d5
