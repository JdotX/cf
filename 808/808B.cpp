#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
const int mn = 200010;
typedef long long ll;
ll dat[mn];

int main()
{
  int n,k,i,j,c;
  cin >> n >> k;
  for (i = 1; i <= n; ++i) {
    cin >> dat[i];
    dat[i] += dat[i-1];
  }

  ll ans = 0;
  for (i = 1; i <= n-k+1; ++i) {
    ans += dat[i+k-1] - dat[i-1];
  }

  double a = ans * 1.0;
  a = a / (n-k+1);
  printf ("%.6lf\n", a);
  return 0;
}
