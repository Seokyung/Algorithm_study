#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, y, w, h;
    cin>>x>>y>>w>>h;
    int xw = w-x;
    int yh = h-y;
    int arr[4] = {x, y, xw, yh};
    sort(arr, arr+4);
    cout<<arr[0]<<"\n";
    return 0;
}