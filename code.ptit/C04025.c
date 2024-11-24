#include <stdio.h>

int main () {

    int n;
    scanf("%d", &n);

    int l = 0, c = 0;

    int arr[n];
    int chan[n];
    int le[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        
        if (arr[i] % 2 == 0)
        {
            chan[c] = arr[i];
            c ++;
        } else {
            le[l] = arr[i];
            l ++;
        }
    }
    
    for (int i = 0; i < c - 1; i++)
    {
        for (int j = i + 1; j < c; j++)
        {
            if (chan[i] > chan[j]) {
                int tmp = chan[i];
                chan[i] = chan[j];
                chan[j] = tmp;
            }
        }
    }

    for (int i = 0; i < l - 1; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (le[i] > le[j]) {
                int tmp = le[i];
                le[i] = le[j];
                le[j] = tmp;
            }
        }
    }
    


    for (int i = 0; i < c; i++)
    {
        printf("%d ", chan[i]);
    }
    for (int i = 0; i < l; i++)
    {
        printf("%d ", le[i]);
    }
    


    return 0;
}