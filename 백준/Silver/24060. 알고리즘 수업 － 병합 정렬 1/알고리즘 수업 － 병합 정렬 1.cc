//24060 알고리즘 수업 - 병합 정렬 1
#include <iostream>
using namespace std;

#define SIZE 500000

int n, k, cnt = 0;
int a[SIZE];
int a2[SIZE];

void merge(int l, int r, int m) {
    int i = l, j = m+1, t = l;

    while ((i<=m) && (j<=r)) {
        if(a[i] <= a[j]) {
            a2[t++] = a[i++];
        }
        else {
            a2[t++] = a[j++];
        }
    }

    int tmp = (i>m) ? j : i;

    while(t <= r) {
        a2[t++] = a[tmp++];
    }

    for(int x=l;x<=r;x++) {
        a[x] = a2[x];
        cnt++;
        if(cnt == k) {
            cout<<a[x]<<"\n";
        }
    }
}

void divide(int l, int r) {
    if(l<r) {
        int m = (l+r) / 2;
        divide(l, m);
        divide(m+1, r);
        merge(l, r, m);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n>>k;

    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    divide(0, n-1);

    if(cnt<k) {
        cout<<-1<<"\n";
    }

    return 0;
}