#include <stdio.h>


void solve() {
    int a, b;
    char t;
    scanf("%d %d %c\n", &a, &b, &t);

    int arrA[a], arrB[b];

    for (int i = 0 ; i < a ; i ++) {
        scanf("%d", &arrA[i]);
    }
    for (int i = 0 ; i < b ; i ++) {
        scanf("%d", &arrB[i]);
    }

    int arr[a + b]; int _ = 0;
    for (int i = 0 ; i < b ; i ++) {
        arr[_++] = arrB[i];
    } 
    for (int i = 0 ; i < a ; i ++) {
        arr[_++] = arrA[i];
    }

    switch (t)
    {
    case 'F':
        for (int i = 0 ; i < a ; i ++) {
            printf("%d ", arrA[i]);
        }
        for (int i = 0 ; i < b ; i ++) {
            printf("%d ", arrB[i]);
        }     
        printf("\n");  
        break;
    case 'A':
        for (int i = 0 ; i < b ; i ++) {
            printf("%d ", arrB[i]);
        } 
        for (int i = 0 ; i < a ; i ++) {
            printf("%d ", arrA[i]);
        }
        printf("\n");  
        break;
    case 'T' : 
        for (int i = 0 ; i < a + b - 1 ; i ++) {
            for (int j = i + 1 ; j < a + b ; j ++) {
                if (arr[i] > arr[j]) {
                    int t = arr[i];
                    arr[i] = arr[j];
                    arr[j] = t;
                }
            }
        }
        for (int i = 0 ; i < a + b ; i ++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        break;
    case 'G' : 
        for (int i = 0 ; i < a + b - 1 ; i ++) {
            for (int j = i + 1 ; j < a + b ; j ++) {
                if (arr[i] < arr[j]) {
                    int t = arr[i];
                    arr[i] = arr[j];
                    arr[j] = t;
                }
            }
        }
        for (int i = 0 ; i < a + b ; i ++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        break;
    default:
        break;
    }
}

int main () {

    int n;
    scanf("%d", &n);

    while (n--)
    {
        solve();
    }
    

    return 0;
}