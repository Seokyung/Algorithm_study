#include <iostream>
using namespace std;
int main() {
    int n, i, result = 1;
    scanf("%d", &n);
    for(i=n;i>0;i--) {
        result *= i;
    }
    printf("%d\n", result);
    return 0;
}