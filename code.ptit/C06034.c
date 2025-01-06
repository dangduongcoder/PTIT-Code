#include <stdio.h>
#include <string.h>

void solve() {

    char K[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int V[7] = {1, 5, 10, 50, 100, 500, 1000};

    long long value = 0;

    char raw[1000];

    gets(raw);
    
    int lastVal = 0;

    for (int i = strlen(raw) - 1 ; i >= 0 ; i --) {
        for (int j = 0 ; j < 7 ; j ++) {
            if (K[j] == raw[i]) {
                if (V[j] < lastVal) {
                    value -= V[j];
                    // printf("- (%c,%d)", K[j], V[j]);
                } else {
                    value += V[j];
                    // printf("+ (%c,%d)", K[j], V[j]);

                }
                lastVal = V[j];
                break;
            }
        }
    }

    printf("%lld\n", value);

}

int main() {


    int n;
    scanf("%d\n", &n);

    while (n--)
    {
        solve();
    }
    


    return 0;
}