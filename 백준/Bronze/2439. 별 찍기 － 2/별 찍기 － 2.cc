#include <iostream>
using namespace std;
int main() {
    int n, i, j, k;
    scanf("%d", &n);
    if(n>=1 && n<=100) {
        for(i=0;i<n;i++) {
            for(j=n-i;j>1;j--) {
                printf(" ");
            }
            for(k=0;k<=i;k++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}