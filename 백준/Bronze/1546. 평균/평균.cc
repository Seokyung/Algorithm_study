#include <iostream>
using namespace std;
int main() {
    int n, max = 0, i;
    double sum = 0;
    scanf("%d", &n);
    int score[n];
    for(i=0;i<n;i++) {
        scanf("%d", &score[i]);
        if(score[i]>max) {
            max = score[i];
        }
    }
    for(i=0;i<n;i++) {
        sum += (double)score[i]/max* 100;
    }
    printf("%f\n", sum/n);
    return 0;
}