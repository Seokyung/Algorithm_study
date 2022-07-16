#include <iostream>
#include <string.h>
using namespace std;
void reverse(char s[]) {
    int i, size = strlen(s);
    for(i=0;i<(size/2);i++) {
        char tmp = s[i];
        s[i] = s[size-i-1];
        s[size-i-1] = tmp;
    }
}
int main() {
    char a[10002]{0};
    char b[10002]{0};
    char result[10003]{0};
    int i, size, sum = 0, carry = 0;
    scanf("%s %s", a, b);
    reverse(a);
    reverse(b);
    if(strlen(a) > strlen(b)) {
        size = strlen(a);
    }
    else {
        size = strlen(b);
    }
    for(i=0;i<size;i++) {
        sum = (a[i]-'0') + (b[i]-'0') + carry;
        if(sum<0) {
            sum += '0';
        }
        if(sum>=10) {
            carry = 1;
        }
        else {
            carry = 0;
        }
        result[i] = sum%10 + '0';
    }
    if(carry == 1) {
        result[size] = '1';
    }
    reverse(result);
    printf("%s\n", result);
    return 0;
}