#include <iostream>
using namespace std;
int d(int num) {
    int sum = num;
    while(num != 0) {
        sum += num%10;
        num /= 10;
    }
    return sum;
}
int main() {
    bool check[10000]{false};
    int n, i;
    for(i=0;i<10000;i++) {
        n = d(i);
        if(n<=10000) {
            check[n] = true;
        }
    }
    for(i=0;i<10000;i++) {
        if(!check[i]) {
            printf("%d\n", i);
        }
    }
    return 0;
}