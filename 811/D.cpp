#include <iostream>
#include <cstdio>
#include <vector>
#include <stack>
#include <string.h>
#include <memory.h>
using namespace std;

vector<int> s;

char tu[105][105];
bool vis[105][105];
int x,y;

bool testLR() 
{
  int tx = x;
  printf("R\n");
  fflush(stdout);
  scanf("%d%d", &y, &x);
  if (x == tx + 1) {
    return false;
    printf("L\n");
    fflush(stdout);
    scanf("%d%d", &y, &x) ;
  } else return true;
}

bool testUD()
{
  int ty = y;
  printf("D\n");
  fflush(stdout);
  scanf("%d%d", &y, &x) ;
  if (y == ty+1) {
    return false;
    printf("U\n");
    fflush(stdout);
    scanf("%d%d", &y, &x) ;
  } else return true;
}

void dfs()
{
  if (tu[y][x] != 'F') {
    if (!vis[y][x-1]) {
      s.push_back(0);
      x--;
      dfs();
      x++;
      s.pop_back();
      vis[y][x-1] = true;
    } else if (!vis[y][x+1]) {
      s.push_back(1);
      x++;
      dfs();
      x--;
      s.pop_back();
      vis[y][x+1] = true;
    } else if (!vis[y-1][x]) {
      s.push_back(2);
      y--;
      dfs();
      y++;
      s.pop_back();
      vis[y-1][x] = true;
    } else {
      s.push_back(3);
      y++;
      dfs();
      y--;
      s.pop_back();
      vis[y+1][x] = true;
    }
  }
  return;
}

int main()
{
  int n, m, i, j;
  bool lr, ud, lrc, udc;
  char t;
  lr = false;
  ud = false;
  lrc = false;
  udc = false;
  memset(vis, true, sizeof(vis));
  cin >> n >> m;
  for (i = 1; i <= n; ++i) {
    for (j = 1; j <= m; ++j) {
      cin >> t;
      tu[i][j] = t;
      if (t != '*') {
	vis[i][j] = false;
      }
    }
  }

  x = 1;
  y = 1;
  dfs();
  x = 1;
  y = 1;

  vector<int>::iterator it;
  for (it = s.begin(); it != s.end(); ++it) {
    int c = *it;
    if (c == 1) {
      if (!lrc) {
	lr = testLR();
	lrc = true;
      }
      if (lr) {
	printf("L\n");
	fflush(stdout);
	scanf("%d%d", &y, &x);
      } else {
	printf("R\n");
	fflush(stdout);
	scanf("%d%d", &y, &x);
      }
    } else if (c == 0) {
      if (!lr) {
	printf("L\n");
	fflush(stdout);
	scanf("%d%d", &y, &x);
      } else {
	printf("R\n");
	fflush(stdout);
	scanf("%d%d", &y, &x);
      }
    } else if (c == 3) {
      if (!udc) {
	ud = testUD();
	udc = true;
      }
      if (ud) {
	printf("U\n");
	fflush(stdout);
	scanf("%d%d", &y, &x);
      } else {
	printf("D\n");
	fflush(stdout);
	scanf("%d%d", &y, &x);
      }
    } else {
      if (!ud) {
	printf("U\n");
	fflush(stdout);
	scanf("%d%d", &y, &x);
      } else {
	printf("D\n");
	fflush(stdout);
	scanf("%d%d", &y, &x);
      }
    }
  }

  return 0;
}
