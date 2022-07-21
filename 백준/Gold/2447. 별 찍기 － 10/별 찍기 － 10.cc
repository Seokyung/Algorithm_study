#include <iostream>
using namespace std;
void printStar(int n, int i, int j) {
    if(((i/n)%3 == 1) && ((j/n)%3 == 1)) {
        printf(" ");
    }
    else {
        if(n/3 == 0) {
            printf("*");
        }
        else {
            printStar(n/3, i, j);
        }
    }
}
int main() {
    int n, i, j;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printStar(n, i, j);
        }
        printf("\n");
    }
    return 0;
}