#include <iostream>

using namespace std;

int a[104];
int r[104];

int main()
{
  int n, w, i;
  cin >> n >> w;
  for (i = 0; i < n; ++i) {
    cin >> a[i];
  }

  int t = 0;
  for (i = 0; i < n; ++i) {
    t+= (a[i]+1)/2;
  }

  if (t > w) {
    cout << -1 << endl;
    return 0;
  }
  t = w;
  for (i = 0; i < n; ++i) {
    r[i] = (a[i]+1)/2;
    t-=r[i];
  }
  
  a[n] = 0;
  r[n] = 0;
  while (t > 0) {
    int tp = n;
    int tm = a[n];
    for (i = 0; i < n; ++i) {
      if (a[i] > tm && r[i] != a[i]) {
	tp = i;
	tm = a[i];
      }
    }
    // cout << tp << "\t" << a[tp] <<"\t" << r[tp] <<endl;
    if (a[tp] - r[tp] > t) {
      r[tp] += t;
      t = 0;
    } else {
      t -= (a[tp] - r[tp]);
      r[tp] = a[tp];
    }
    if (tp == n) {
      break;
    }
  }
  
  for (i = 0; i < n; ++i) {
    cout << r[i] << " ";
  }
  cout << endl;
  return 0;

  
}
