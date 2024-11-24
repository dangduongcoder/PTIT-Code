#include <stdio.h>

int test = 1;

int ucln(int a, int b) {
    while (a % b != 0)
    {
        int r = a % b ;
        a = b ; 
        b = r ;
    }
    
    return b;
}

void solve() {

    printf("Case #%d:\n", test ++);

    int a, b, x, y;
    scanf("%d %d %d %d", &a , &b, &x, &y);
    
    int ucln1 = ucln(a, b);
    int ucln2 = ucln(x, y);

    a = a / ucln1;
    b = b / ucln1;
    x = x / ucln2;
    y = y / ucln2;

    int bc = b / ucln(b, y) * y;

    a = a * (bc / b);
    b = bc;
    x = x * (bc / y);
    y = bc;

    int uct = ucln(a + x, b);
    int ucth = ucln(a * y, x * b);

    printf("%d/%d %d/%d\n%d/%d\n%d/%d\n", a, b, x , y, (a + x)/uct, b/uct, (a * y)/ucth, (x * b)/ucth);

}

int main () {

    int n;
    scanf("%d", &n);

    while (n--)
    {
        solve();
    }
    

}