#include <iostream>
#define N 10
using namespace std;
int main() {
    int in[N], out[N], i, j, x, cnt = 0;
    std::fill_n(out, N, -1);
    for(i=0;i<N;i++) {
        scanf("%d", &in[i]);
    }
    for(i=0;i<N;i++) {
        x = in[i] % 42;
        for(j=0;j<N;j++) {
            if(x == out[j]) {
                break;
            }
            else if((x != out[j]) && (out[j] == -1)) {
                cnt++;
                out[j] = x;
                break;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}