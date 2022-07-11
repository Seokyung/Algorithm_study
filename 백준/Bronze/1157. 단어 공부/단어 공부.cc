#include <iostream>
using namespace std;
int main() {
    string s;
    int arr[26]{0}, max = 0, max_idx, cnt = 0 , i;
    cin>>s;
    for(i=0;i<s.length();i++) {
        if(s[i]<97) {
            arr[s[i] - 65]++;
        }
        else {
            arr[s[i] - 97]++;
        }
    }
    for(i=0;i<26;i++) {
        if(arr[i]>max) {
            max = arr[i];
            max_idx = i;
        }
    }
    for(i=0;i<26;i++) {
        if(arr[i] == max) {
            cnt++;
        }
    }
    if(cnt>1) {
        cout<<"?"<<"\n";
    }
    else {
        cout<<(char)(max_idx+65)<<"\n";
    }
    return 0;
}