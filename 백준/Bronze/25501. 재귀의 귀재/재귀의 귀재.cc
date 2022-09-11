//25501 재귀의 귀재
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    for(int i=0;i<t;i++) {
        string s;
        cin>>s;

        int left = 0;
        int right = s.length()-1;
        int cnt = 0;
        bool flag = true;

        for(;left<=right;left++,right--) {
            cnt++;

            if(left >= right) {
                break;
            }
            else if(s[left] != s[right]) {
                flag = false;
                break;
            }
        }

        cout<<flag<<" "<<((flag && (s.length()%2 == 0)) ? cnt+1 : cnt)<<"\n";
    }

    return 0;
}