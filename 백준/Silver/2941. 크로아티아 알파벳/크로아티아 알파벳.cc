#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int i, cnt = 0;
    for(i=0;i<s.length();i++) {
        if(s[i] == 'c') {
            if(s[i+1] == '=' || s[i+1] == '-') {
                i++;
            }
        }
        else if(s[i] == 'd') {
            if(s[i+1] == 'z' && s[i+2] == '=') {
                i+=2;
            }
            else if(s[i+1] == '-') {
                i++;
            }
        }
        else if(s[i] == 'l' && s[i+1] == 'j') {
            i++;
        }
        else if(s[i] == 'n' && s[i+1] == 'j') {
            i++;
        }
        else if(s[i] == 's' && s[i+1] == '=') {
            i++;
        }
        else if(s[i] == 'z' && s[i+1] == '=') {
            i++;
        }
        cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}