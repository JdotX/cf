#include <iostream>
#include <string.h>
using namespace std;

int n;
int a[1005];
int b[1005];
int s[1005];
int i2, i0, t;

bool check() 
{
  int c = 0;
  for (int j = 0; j < n; ++j) {
    if (a[j] != b[j]) {
      c++;
    }
  }
  if (c == 1) return true;
  return false;
}

void pt()
{
  for (int k = 0; k < n-1; ++k) {
    cout << a[k] << " ";
  }
  cout << a[n-1] << endl;
  return;
}


int main()
{
  int i;
  cin >> n;
  memset(s,0,sizeof(s));
  for (i = 0; i < n; ++i) {
    cin >> t;
    a[i] = t;
    s[t]++;
    if (s[t] == 2) {
      i2 = t;
    }
  }
  for (i = 0; i < n; ++i) {
    cin >> b[i];
  }

  for (i = 1; i <= n; ++i) {
    if (s[i] == 0) {
      i0 = i;
      //cout <<  "oio" << i0 ;
    }
  }

  for (i = 0; i < n; ++i) {
    if (s[a[i]] == 2) {
      t = a[i];
      a[i] = i0;
      if (check()) {
	pt();
	break;
      } else {
	a[i] = t;
      }
    }
  }
  return 0;
}
