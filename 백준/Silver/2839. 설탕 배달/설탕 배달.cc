#include <iostream>
using namespace std;
int main() {
    int n, x, y;
    scanf("%d", &n);
    x = n/5;
    while(true) {
        if(x<0) {
            printf("-1\n");
            break;
        }
        if((n-(5*x))%3 == 0) {
            y = (n-(5*x))/3;
            printf("%d\n", x+y);
            break;
        }
        x--;
    }
    return 0;
}