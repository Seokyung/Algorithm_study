#include <iostream>
using namespace std;
int main() {
    int n, m, i, j, k, sum = 0, ij = 0, max = 0;
    scanf("%d %d", &n, &m);
    int card[n];
    for(i=0;i<n;i++) {
        scanf("%d", &card[i]);
    }
    for(i=0;i<n;i++) {
        sum = 0;
        for(j=0;j<n;j++) {
            if(i != j) {
                ij = card[i] + card[j];
            }
            for(k=0;k<n;k++) {
                if((k != i) && (k != j)) {
                    sum = ij + card[k];
                }
                if((sum > max) && (sum <= m)) {
                    max = sum;
                }
            }
        }
    }
    printf("%d\n", max);
    return 0;
}