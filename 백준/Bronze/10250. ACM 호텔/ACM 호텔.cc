#include <iostream>
using namespace std;
int main() {
    int t, i, h, w, n, y, x;
    scanf("%d", &t);
    for(i=0;i<t;i++) {
        scanf("%d %d %d", &h, &w, &n);
        y = n%h;
        x = n/h;
        if(y == 0) {
            y = h;
        }
        else {
            x++;
        }
        printf("%d\n", (y*100)+x);
    }
    return 0;
}