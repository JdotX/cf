// buhuizuo..taichushengle
#include <iostream>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

typedef double db;
const db pi = 3.141592653589793;
int n;

inline bool eq(db a, db b) {
  if (fabs(a-b) < 1e11) {
    return true;
  }
  return false;
}

struct circle {
  db x;
  db y;
  db r;
};

vector<circle> ck;

int father[1010];
int depth[1010];

inline db dis(int a, int b) {
  return (ck[a].x-ck[b].x)*(ck[a].x-ck[b].x)+(ck[a].y-ck[b].y)*(ck[a].y-ck[b].y);
}

inline bool cmp(const circle& a, const circle& b) {
  return (a.r < b.r);
}

void check(int a, int b) 
{
  /*
  int t;
  if (a == b) return;
  else {
    t = b;
    while (father[t] != 0) {
      if (father[t] == a) {
	break;
      }
      
      if (dis(a,t) < ck[a].r * ck[a].r) {
	t = father[t];
      }
      
    }
  }
  */
  if (ck[a].r > ck[b].r)
    father[b] = a;
  else father[a] = b;
}


void build_tree()
{
  int i, j, d, t;
  for (i = 0; i < n; ++i) {
    for (j = i+1; j < n; ++j) {
      if (j != i) {
	if ((dis(i, j) < ck[i].r*ck[i].r) || (dis(i,j) < ck[j].r*ck[j].r)) {
	  check(i,j);
	  break;
	}
      }
    }
  }
  for (i = 0; i < n; ++i) {
    d = 1;
    t = i;
    while (father[t] != -1) {
      d++;
      t = father[t];
    }
    depth[i] = d;
  }
}

void sum()
{
  db ans = 0;
  for (int j = 0; j < n; ++j) {
    if ((depth[j] == 1) || (depth[j] == 2) || depth[j] % 2 == 0) {
      ans += pi*ck[j].r*ck[j].r;
    } else {
      ans -= pi*ck[j].r*ck[j].r;
    }
  }
  printf("%.12lf\n", ans);
}

int main() 
{
  int i;
  circle c1;
  cin >> n;
  for (i = 1; i <= n; ++i) {
    cin >> c1.x >> c1.y >> c1.r;
    ck.push_back(c1);
  }
  memset(father, -1, sizeof(father));
  memset(depth, 0, sizeof(depth));
  sort(ck.begin(), ck.end(), cmp);
  build_tree();
  sum();
  /*
  for (i = 0; i < n; ++i) {
    cout << depth[i] << " ";
  }
  */
  return 0;
}

