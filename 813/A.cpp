#include <iostream>
using namespace std;

const int maxn = 1005;
const int maxm = 1005;

int n,m;
int l[maxm], r[maxm], a[maxn];

int main()
{
  int i, t = 0;
  cin >> n;
  for (i = 0; i < n; ++i) {
    cin >> a[i];
    t += a[i];
  }
  cin >> m;
  bool flag = true;
  for (i = 0; i < m; ++i) {
    cin >> l[i] >> r[i];
    if ((l[i] <= t) && (r[i] >= t)) {
      flag = false;
      cout << t << endl;
      break;
    }
  }
  if (flag) {
    cout << -1 << endl;
  } 
  return 0;

}
