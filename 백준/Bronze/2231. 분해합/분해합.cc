#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, n1, n2, m, digit = 0, sum = 0, i, j;
    scanf("%d", &n);
    n1 = n;
    while(n1 != 0) {
        n1 /= 10;
        digit++;
    }
    n2 = n - (9*digit);
    for(i=n2;i<=n;i++) {
        sum = i;
        m = i;
        for(j=(digit-1);j>0;j--) {
            int x = (int)pow(10,j);
            if((x%10) != 0) {
                x = x+1;
            }
            sum += m / x;
            m %= x;
        }
        sum += m;
        if(sum == n) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("0\n");
    return 0;
}