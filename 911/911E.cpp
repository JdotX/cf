#include <iostream>
using namespace std;

const int maxn = 200010;
int n, k;
int a[maxn], s[maxn], t, cur;
bool f[maxn];


int main()
{
  int i,j;
  cin >> n >> k;
  for (i = 1; i <= k; ++i) {
    cin >> a[i];
    f[a[i]] = 1;
  }
  for (j = 1; j <= k; ++j) {
    if (!t || s[t] > a[i]) {
      ++t;
      s[t] = a[i];
    } else {
      cout << "-1" << endl;
      return 0;
    }
    while ( t && s[t] == cur+1) {
      cur++;
      t--;
    }
  }

  s[t+1] = 0;
  //unfinished
}
