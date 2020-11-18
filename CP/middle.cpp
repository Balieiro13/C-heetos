#include <bits/stdc++.h>
using namespace std;

int main(){
    string H1, H2;
    string s = "0";
    cin >> H1;
    cin >> H2;
    int h1 = stoi(H1.substr(0,2));
    int m1 = stoi(H1.substr(3,2));
    int h2 = stoi(H2.substr(0,2));
    int m2 = stoi(H2.substr(3,2));

    int mnt1 = h1 * 60 + m1;
    int mnt2 = h2 * 60 + m2;
    int md = (mnt1 + mnt2)/2;

    string h, m;
    h = to_string(md / 60);
    m = to_string(md % 60);

    if (md / 60 < 10)
        h = s + to_string(md / 60);
    if (md % 60 < 10)
        m = s + to_string(md % 60);
    
    cout << h << ":" << m << endl;

    return 0;
}
