#include <iostream>
#include <vector>
using namespace std;
const int maxn = 105;
const int maxm = 105;

int tu[maxn][maxm];
vector<int> vl;
vector<int> vc;

void output() {
  cout << vl.size() + vc.size() << endl;
  while (!vl.empty()) {
    cout << "row " << vl.back() << endl;
    vl.pop_back();
  }

  while (!vc.empty()) {
    cout << "col " << vc.back() << endl;
    vc.pop_back();
  }
}

int main()
{
  int n, m, i, j;
  bool fg;
  cin >> n >> m;
  cout << n << m;
  for (i = 1; i <= n; ++i) {
    for (j = 1; j <= m; ++j) {
      cin >> tu[i][j];
    }
  }

  for (i = 1; i <= n; ++i) {
    fg = false;
    for (j = 1; j <= m; ++i) {
      if (tu[i][j] == 0) {
	cout << i << "\t" << j << endl;
	fg = true;
	break;
      }
    }
    if (!fg) {
      for (j = 1; j <= m; ++j) {
	tu[i][j] -= 1;
      }
      cout << i << endl;
      vl.push_back(i);
      i = i-1;
    }
  }

  for (j = 1; j <= m; ++j) {
    fg = false;
    for (i = 1; i <= n; ++i) {
      if (tu[i][j] == 0) {
	fg = true;
	break;
      } 
    }
    if (!fg) {
      for (i = 1; i <= n; ++i) {
	tu[i][j] -= 1;
      }
      vc.push_back(j);
      j = j-1;
    }
  }
  output();
  return 0;
}
