#include <iostream>
using namespace std;
int main() {
    int n, sum = 1, i = 0;
    scanf("%d", &n);
    while(true) {
        if(n == 1) {
            break;
        }
        else {
            if(n>sum && n<=sum+(6*i)) {
                break;
            }
            sum += 6*i;
            i++;
        }
    }
    printf("%d\n", i + 1);
    return 0;
}