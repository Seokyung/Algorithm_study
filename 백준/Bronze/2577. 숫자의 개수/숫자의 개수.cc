#include <iostream>
using namespace std;
int main() {
    int input[3], output[10] = {0}, result, mul, i;
    for(i=0;i<3;i++) {
        scanf("%d", &input[i]);
    }
    result = input[0] * input[1] * input[2];
    while(result != 0) {
        mul = result % 10;
        result = result / 10;
        output[mul]++;
    }
    for(int j : output) {
        printf("%d\n", j);
    }
    return 0;
}