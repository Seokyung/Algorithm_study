#include <iostream>
using namespace std;
int cnt_people(int k, int n) {
    if(k == 0) {
        return n;
    }
    if(n == 1) {
        return 1;
    }
    return (cnt_people(k-1, n) + cnt_people(k, n-1));
}
int main() {
    int t, k, n, i, num;
    scanf("%d", &t);
    for(i=0;i<t;i++) {
        scanf("%d%d", &k, &n);
        num = cnt_people(k, n);
        printf("%d\n", num);
    }
    return 0;
}