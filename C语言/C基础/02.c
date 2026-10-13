#include<stdio.h>
int fun(int x, int y) {
    if (x == 0) {
        return y;
    }
    else if (y == 0) {
        return x;
    }
    else {
        return fun((x & y) << 1, x ^ y);
    }
}
int main() {
    printf("%d\n", fun(12345, 67089));
    return 0;
}
