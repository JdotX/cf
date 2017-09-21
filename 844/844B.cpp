#include <iostream>

using namespace std;
typedef long long ll;

const int maxm = 55;
ll tu[maxm][maxm];
int n, m;

ll biao[maxm];

void fast_prep()
{
  biao[0] = 0;
  biao[1] = 0;
  biao[2] = 4;
  for (int i = 3; i < 51; ++i) {
    biao[i] = biao[i-1] * 2;
  }
  for (int i = 2; i < 51; ++i) {
    biao[i] = biao[i] - 1 - i;
  }
  return;
}

ll cal()
{
  int i, j;
  ll ans = n * m;
  ll temp;
  for (i = 0; i < n; ++i) {
    temp = 0;
    for (j = 0; j < m; ++j) {
      temp += tu[i][j];
    }
    ans = ans + biao[temp] + biao[m-temp];
  }

  for (j = 0; j < m; ++j) {
    temp = 0;
    for (i = 0; i < n; ++i) {
      temp += tu[i][j];
    }
    ans = ans+biao[temp]+biao[n-temp];
  }
  return ans;
}

int main()
{
  fast_prep();
  int i, j;
  cin >> n >> m;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; ++j) {
      cin >> tu[i][j];
    }
  }

  ll ans = cal();
  cout << ans << endl;
  return 0;
}
