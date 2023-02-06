#include <iostream>
using namespace std;
int main() {
    int a, b, v, day;
    scanf("%d %d %d", &a, &b, &v);
    if((v-a)%(a-b) == 0) {
        day = (v-a)/(a-b);
    }
    else {
        day = ((v-a)/(a-b)) + 1;
    }
    printf("%d\n", day+1);
    return 0;
}