#include <bits/stdc++.h>
using namespace std;


int arr[5][5] = {
    {0, 1, 3, 2, 5},
    {2, 0, 4, 3, 1},
    {4, 6, 0, 7, 4},
    {6, 2, 5, 0, 2},
    {9, 3, 8, 1, 0}
};

int ok[5] = {1, 0, 0, 0, 0};
int res[5] = {0};

void Try(int i) {

    for(int j = 1; j < 5 ; j ++) {
        if(!ok[j]) {
            ok[j] = 1;
            res[i] = j;
            Try(i + 1);
            ok[j] = 0;
        }
    }

}

int main() {
   
    Try(1);

    return 0;
}