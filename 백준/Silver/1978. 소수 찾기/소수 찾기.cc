#include <iostream>
using namespace std;
int main() {
    int n, x, i, j, result = 0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        bool flag = true;
        scanf("%d", &x);
        for(j=(x-1);j>1;j--) {
            if(x%j == 0) {
                flag = false;
            }
        }
        if(x == 1) {
            flag = false;
        }
        if(flag == true) {
            result++;
        }
    }
    printf("%d\n", result);
    return 0;
}