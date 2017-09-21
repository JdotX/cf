#include <iostream>
#include <string.h>
using namespace std;

const int maxn = 200;

int a[206];
int b[206];

bool jud(int n) {
  for (int i = 0; i < n-1; ++i) {
    if (a[i] > a[i+1]) {
      return true;
    }
  }
  return false;
}


int main()
{
  int n, k, i;
  memset(a,0,sizeof(a));
  memset(b,0,sizeof(b));
  cin >> n >> k;
  for (i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (i = 0; i < k; ++i) {
    cin >> b[i];
  }
  if (k > 1) {
    cout << "Yes" << endl;
  } else if (k == 0) {
    cout << "No" << endl;
  } else {
    for (i = 0; i < n; ++i) {
      if (a[i] == 0) {
	a[i] = b[0];
	bool t = jud(n);
	if (t) {
	  cout << "Yes" << endl;
	} else cout << "No" << endl;
      }
    }
  }
  return 0;
}
