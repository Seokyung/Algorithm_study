#include <iostream>
using namespace std;
int main() {
    while (true) {
        int n, i, j, sum = 0;
        scanf("%d", &n);
        if(n==0) {
            break;
        }
        else {
            int num[(2*n)+1]{0};
            for(i=2;i<=(2*n);i++) {
                num[i] = i;
            }
            for(i=2;(i*i)<=(2*n);i++) {
                if(num[i] == 0) {
                    continue;
                }
                for(j=i*i;j<=(2*n);j+=i) {
                    num[j] = 0;
                }
            }
            for(i=(n+1);i<=(2*n);i++) {
                if(num[i] != 0) {
                    sum++;
                }
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}