#include <iostream>
using namespace std;
int main() {
    int m, n, i, j;
    scanf("%d %d", &m, &n);
    int num[n+1]{0};
    for(i=2;i<=n;i++) {
        num[i] = i;
    }
    for(i=2;(i*i)<=n;i++) {
        if(num[i] == 0) {
            continue;
        }
        for(j=i*i;j<=n;j+=i) {
            num[j] = 0;
        }
    }
    for(i=m;i<=n;i++) {
        if(num[i] != 0) {
            printf("%d\n", num[i]);
        }
    }
    return 0;
}