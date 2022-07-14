#include <iostream>
using namespace std;
int main() {
    int x, i = 0, j, sum = 0, idx, a=1, b=1;
    scanf("%d", &x);
    while(true) {
        if(x == 1) {
            break;
        }
        else {
            if(x>sum && x<=sum+i) {
                if(i%2 == 0) {
                    idx = x-sum-1;
                    a = idx+1;
                    b = i-idx;
                    break;
                }
                else {
                    idx = x-sum-1;
                    b = idx+1;
                    a = i-idx;
                    break;
                }
            }
            sum += i;
            i++;
        }
    }
    printf("%d/%d\n", a, b);
    return 0;
}