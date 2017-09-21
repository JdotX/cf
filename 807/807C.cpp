#include <iostream>
using namespace std;
int s = 0;
int d = 0;
void sol(int x, int y, int p, int q)
{
  // impossible
  if (p == q || p == 0) {
    cout << -1 << endl;
    return;
  } 
  
  // normal case
  if (1.0*y/x == (1.0*p/q)) {
    cout << 0 << endl;
  } else {
    if (s == 0) {
      d = ;
      s += 1;
    } else s += s;
  }
}

int main() 
{
  int n,i,x,y,p,q;
  cin >> n;
  for (i = 0; i < n; ++i) {
    cin >> x >> y >> p >> q;
    s = 0;
    d = 0;
    sol(x,y,p,q);
  }
  return 0;
}
