#include <iostream>
using namespace std;
int main() {
    int n, i, j;
    scanf("%d", &n);
    if(n>=1 && n<=100) {
        for(i=0;i<n;i++) {
            for(j=0;j<=i;j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}