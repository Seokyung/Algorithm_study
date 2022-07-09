#include <iostream>
#define N 100
using namespace std;
int main() {
    int n, i;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        char result[N];
        int score = 0, x = 0, idx = 0;
        std::fill_n(result, N, 'E');
        scanf("%s", result);
        while(result[idx] != 'E') {
            if(result[idx] == 'O') {
                x++;
                score += x;
            }
            else if(result[idx] == 'X') {
                x = 0;
            }
            idx++;
        }
        printf("%d\n", score);
    }
    return 0;
}