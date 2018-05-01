#include <iostream>

using namespace std;
const int maxn = 200010;
int a[maxn];

int main()
{
  int i, n;
  cin >> n;
  for (i = 0; i < n; ++i) {
    cin >> a[i];
  }

  auto sum = 0;
  for (i = 0; i < n; ++i) {
    sum += a[i];
  }

  auto partial_sum = 0;
  int tar = (sum + 1) / 2;
  for (i = 0; i < n; ++i) {
    partial_sum += a[i];
    if (partial_sum >= tar) {
      break;
    }
  }

  cout << i + 1 << endl;
  return 0;
}
