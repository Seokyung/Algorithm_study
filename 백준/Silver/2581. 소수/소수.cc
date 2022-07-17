#include <iostream>
using namespace std;
int main() {
    int m, n, sum = 0, i, j;
    scanf("%d", &m);
    scanf("%d", &n);
    int min = n;
    for(i=m;i<=n;i++) {
        bool flag = true;
        for(j=(i-1);j>1;j--) {
            if(i%j == 0) {
                flag = false;
            }
        }
        if(i == 1) {
            flag = false;
        }
        if(flag == true) {
            sum+=i;
            if(i<min) {
                min = i;
            }
        }
    }
    if(sum == 0) {
        printf("-1\n");
    }
    else {
        printf("%d\n%d\n", sum, min);
    }
    return 0;
}