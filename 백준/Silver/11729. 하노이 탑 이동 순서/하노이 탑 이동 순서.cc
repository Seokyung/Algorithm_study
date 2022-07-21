#include <iostream>
using namespace std;
int result(int n) {
    if(n == 1) {
        return 1;
    }
    else {
        return (result(n-1)*2)+1;
    }
}
void hanoi(int n, int start, int end, int bypass) {
    if(n == 1) {
        printf("%d %d\n", start, end);
    }
    else {
        hanoi(n-1, start, bypass, end);
        printf("%d %d\n", start, end);
        hanoi(n-1, bypass, end, start);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", result(n));
    hanoi(n, 1, 3, 2);
    return 0;
}