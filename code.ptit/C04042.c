// #include <stdio.h>
// #include <stdlib.h>




// void solve() {

//     int n;
//     scanf("%d", &n);

//     int arr[n];

//     for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
//     int first = -1;
//     int ok = 0;

//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             if (arr[i] == arr[j]) {
//                 first = arr[i];
//                 ok = 1;
//                 break;
//             }
//         }
//         if (ok) break;
        
        
//     }
    
//     if (first == -1) {
//         printf("NO\n");
//     } else {
//         printf("%d\n", first);
//     }
    

// }


// int main() {

//     int n;
//     scanf("%d", &n);

//     while (n--)
//     {
//         solve();
//     }
    

// }