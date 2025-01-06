#include <stdio.h>

int main() {

    int n ;
    scanf("%d", &n);

    int arr[n][n]; //TẠO MA TRẬN 2 CHIỀU n x n


    //GÁN TẤT CẢ VỊ TRÍ = -1 (-1 thì không in ra)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = -1;
        }
    }
    
    int index = 1;


    //Đặt các giá trị vào ma trận
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) {
            for (int j = 0; j <= i; j++)
            {
                arr[i][j] = index ++;
            }
        } else {
            for (int j = i; j >= 0; j--)
            {
                arr[i][j] = index ++;
            }
        }
        
    }
    
    //in ra ma trận

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != -1) {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}