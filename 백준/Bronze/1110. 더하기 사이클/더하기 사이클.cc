#include <iostream>
using namespace std;
int main() {
    int n, init, cnt = 0;
    scanf("%d", &n);
    init = n;
    do {
        n = (n%10)*10 + ((n/10) + (n%10))%10;
        cnt++;
    } while(init != n);
    printf("%d\n", cnt);
    return 0;
}