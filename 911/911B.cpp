#include <iostream>
using namespace std;

int n, a, b, ans;

int bs(int l, int r)
{
  if (l == r) {
    return l;
  }
  int mid = (l+r) / 2 + 1;
  
  if ((a / mid + b / mid) >= n) {
    return bs(mid, r);
  } else {
    return bs(l, mid-1);
  }
}

int main()
{
  ans = 0;
  cin >> n >> a >> b;
  ans = bs(1, a+b);
  if (ans > a) {
    ans = a;
  }
  if (ans > b) {
    ans = b;
  }
  cout << ans << endl;
  return 0;
}
