#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    int n, i, sum = 0, flag, max = 0, avg, mid, mode, range;
    int arr[500001], nums[8001];
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>arr[i];
        sum += arr[i];
        nums[arr[i]+4000]++;
    }
    sort(arr, arr+n);
    for(i=0;i<8001;i++) {
        if(nums[i]>max) {
            max = nums[i];
            flag = i;
        }
    }
    for(i=flag+1;i<8001;i++) {
        if(nums[i] == max) {
            flag = i;
            break;
        }
    }
    avg = round(double(sum)/n);
    mid = arr[(n-1)/2];
    mode = flag-4000;
    range = arr[n-1]-arr[0];
    cout<<avg<<"\n";
    cout<<mid<<"\n";
    cout<<mode<<"\n";
    cout<<range<<"\n";
    return 0;
}