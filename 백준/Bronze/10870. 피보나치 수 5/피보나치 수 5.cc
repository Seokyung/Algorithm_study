#include <iostream>
using namespace std;
int fibonacci(int n) {
    if(n>=2) {
        n = fibonacci(n-1) + fibonacci(n-2);
    }return n;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", fibonacci(n));
    return 0;
}