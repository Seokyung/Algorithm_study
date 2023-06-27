#include <iostream>
#include <vector>
using namespace std;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   
   int n, k, idx = 0;
   cin>>n>>k;

   vector<int> v(k, 0);

   for(int i = 1; i <= n; i++) {
      if(idx == k) {
         break;
      }

      if(n % i == 0) {
         v[idx] = i;
         idx++;
      }
   }

   cout<<v[k-1]<<"\n";

   return 0;
}