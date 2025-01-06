#include <bits/stdc++.h>

using namespace std;

int main() {

    int x;
    cin >> x;

    if (x < 3) {
        cout << "-1";
        return 0;
    }

    double q = ((x*x + 3 * x + 2)/sqrt(x*x*x - 8))*(x-2);

    std::cout << std::fixed << std::setprecision(2) << q << std::endl;

    return 0;
}