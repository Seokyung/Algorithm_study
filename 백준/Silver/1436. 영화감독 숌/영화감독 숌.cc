#include <iostream>
#include <string>
using namespace std;
int find_num(int n) {
    int i = 666, j, cnt = 0;
    string num;
    while(true) {
        num = to_string(i);
        for(j=0;j<num.length()-2;j++) {
            if((num[j] == '6') && (num[j+1] == '6') && (num[j+2] == '6')) {
                cnt++;
                if(cnt == n) {
                    return i;
                }
                break;
            }
        }
        i++;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", find_num(n));
    return 0;
}