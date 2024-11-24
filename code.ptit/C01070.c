#include <stdio.h>

int max(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b > a && b > c) {
        return b;
    } else {
        return c;
    }
}

int main () {


    int A[2];
    int B[2];
    int C[2];

    scanf("%d %d %d %d %d %d", &A[0], &A[1], &B[0], &B[1], &C[0], &C[1]);

    int ok = 0;

    int case_[6][3] = {
        {1, 2, 3},
        {1, 3, 2},
        {2, 1, 3},
        {2, 3, 1},
        {3, 1, 2},
        {3, 2, 1}
    };

    int S[3][2] = {
        {A[0], A[1]},
        {B[0], B[1]},
        {C[0], C[1]}
    };

    for (int i = 0 ; i < 2 ; i ++) {
        for (int j = 0 ; j < 2 ; j ++ ) {
            for (int k = 0 ; k < 2 ; k ++) {
                if (A[i] == B[j] && B[j] == C[k] && (A[!i] + B[!j] + C[!k]) == A[i]) {
                    ok = 1;
                    // printf("%d+%d+%d = %d+%d+%d\n", A[i] , B[j] , C[k], A[!i] , B[!j] , C[!k]);
                    break;
                }
            }
            if (ok) break;
        }
        if (ok) break;
    }

    if (!ok) {
        for (int i = 0 ; i < 6 ; i ++) {
            for (int k = 0 ; k < 2 ; k ++) {
                for (int l = 0 ; l < 2 ; l ++) {
                    for (int h = 0 ; h < 2 ; h ++) {
                        if (S[case_[i][0] - 1][k] + S[case_[i][1] - 1][l] == S[case_[i][0] - 1][!k] && S[case_[i][1] - 1][l] == S[case_[i][2] - 1][h] && S[case_[i][1] - 1][!l] + S[case_[i][2] - 1][!h] == S[case_[i][0] - 1][!k]) {
                            ok = 1; 
                            break;
                        }
                    } if (ok) break;
                } if (ok) break;
            } if (ok) break;
        }
    }

    printf("%s", ok ? "YES" : "NO");

    return 0;
}