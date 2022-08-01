#include <iostream>
using namespace std;
int main() {
    int n, i, j;
    scanf("%d", &n);
    int count[10001]{0};
    for(i=0;i<n;i++) {
        int num;
        scanf("%d", &num);
        count[num]++;
    }
    for(i=0;i<10001;i++) {
        if(count[i] != 0) {
            for(j=0;j<count[i];j++) {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}