//2981 검문
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    if(a%b == 0) {
        return b;
    }
    else {
        return gcd(b, a%b);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    vector<int> num;

    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        
        num.push_back(x);
    }

    sort(num.begin(), num.end());

    int num_gcd = num[1] - num[0];

    for(int i=2;i<num.size();i++) {
        num_gcd = gcd(num[i]-num[i-1], num_gcd);
    }

    vector<int> res;

    for(int i=1;i<=num_gcd;i++) {
        if(num_gcd%i == 0) {
            if(i > num_gcd/i) {
                break;
            }
            
            res.push_back(i);

            if(i == num_gcd/i) {
                break;
            }

            res.push_back(num_gcd/i);
        }
    }

    sort(res.begin(), res.end());

    for(int i=1;i<res.size();i++) {
        cout<<res[i]<<" ";
    }

    return 0;
}