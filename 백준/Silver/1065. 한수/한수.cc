#include <iostream>
using namespace std;
int seq(int num) {
    int cnt = 0, hun, ten, one, i;
    if(num<100) {
        return num;
    }
    else {
        cnt = 99;
        for(i=100;i<=num;i++) {
            hun = i/100;
            ten = (i/10)%10;
            one = i%10;
            if((hun - ten == (ten - one))) {
                cnt++;
            }
        }
    }
    return cnt;
}
int main() {
    int n, result;
    scanf("%d", &n);
    printf("%d\n", seq(n));
    return 0;
}