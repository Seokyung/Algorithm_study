#include <iostream>
using namespace std;
int main() {
    int c, n, i, j;
    scanf("%d", &c);
    for(i=0;i<c;i++) {
        scanf("%d", &n);
        int score[n];
        int sum = 0, avg, num = 0;
        for(j=0;j<n;j++) {
            scanf("%d", &score[j]);
            sum += score[j];
        }
        avg = sum/n;
        for(j=0;j<n;j++) {
            if(score[j]>avg) {
                num++;
            }
        }
        printf("%.3f%%\n", (double)num/n*100);
    }
    return 0;
}