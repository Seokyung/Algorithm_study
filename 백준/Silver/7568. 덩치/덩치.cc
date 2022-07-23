#include <iostream>
using namespace std;
int main() {
    int n, i, j;
    scanf("%d", &n);
    int size[n][2];
    for(i=0;i<n;i++) {
        scanf("%d %d", &size[i][0], &size[i][1]);
    }
    for(i=0;i<n;i++) {
        int rank = 1;
        for(j=0;j<n;j++) {
            if((size[j][0] > size[i][0]) && (size[j][1] > size[i][1])) {
                rank++;
            }
        }
        printf("%d ", rank);
    }
    printf("\n");
    return 0;
}