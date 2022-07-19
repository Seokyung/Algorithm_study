#include <iostream>
using namespace std;
int main() {
    int t, n, i, j;
    scanf("%d", &t);
    for(i=0;i<t;i++) {
        scanf("%d", &n);
        int a, b;
        a = b = n/2;
        while(true) {
            bool flag = true;
            for(j=2;j<=a-1;j++) {
                if(a%j == 0) {
                    flag = false;
                }
            }
            for(j=2;j<=b-1;j++) {
                if(b%j == 0) {
                    flag = false;
                }
            }
            if(flag == true) {
                break;
            }
            else {
                a -= 1;
                b += 1;
            }
        }
        printf("%d %d\n", a, b);
    }
    return 0;
}