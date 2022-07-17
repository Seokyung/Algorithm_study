#include <iostream>
using namespace std;
int main() {
    int n, num = 2;
    scanf("%d", &n);
    while(true) {
        if(n == 1) {
            break;
        }
        else if(n%num == 0) {
            n/=num;
            printf("%d\n", num);
        }
        else {
            num++;
        }
    }
    return 0;
}