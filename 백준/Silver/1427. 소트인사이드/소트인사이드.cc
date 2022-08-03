#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int i, int j) {
    return j<i;
}
int main() {
    string n;
    cin>>n;
    int size = n.length();
    int i, num[size];
    for(i=0;i<size;i++) {
        num[i] = n[i] - '0';
    }
    sort(num, num+size, compare);
    for(i=0;i<size;i++) {
        cout<<num[i];
    }
    return 0;
}