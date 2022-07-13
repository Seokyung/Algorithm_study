#include <iostream>
using namespace std;
int main() {
    int a, b, c, bep;
    scanf("%d %d %d", &a, &b, &c);
    if(b>=c) {
        printf("-1\n");
    }
    else {
        bep = (a/(c-b)) + 1;
        printf("%d\n", bep);
    }
    return 0;
}