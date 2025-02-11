#include <bits/stdc++.h>
using namespace std;





float calc(float x, float a, float b, float c) {

    return a*pow(x,2) + b*x + c;

}

int main() {
    // fastio;
    float a, b, c;

    float x;

    cin >> c >> b >> a >> x;

    float fx = calc(x, a, b, c);
    float fx2 = fx * fx;
    float r = calc(fx + fx2, a, b, c);

    // cout << fx << " " << fx2 << " " << r << " " << endl;

    cout << fixed << setprecision(3) << r;
    

    return 0;
}