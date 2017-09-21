#include <iostream>
#include <string>
#include <string.h>


using namespace std;
int n,q;
string s;

int has[30];
vector<int> dis[30];

void lzx(int l,char c)
{
  int ans = 0;
  if (!has[c-'a']) {
    ans = l;
  } else {
    
  }
  cout << ans << endl;
  return;
}

int main() 
{
  int i,j,l,t;
  char c;
  cin >> n;
  cin >> s;
  cin >> q;
  memset(has, 0, sizeof(has));
  for (i = 0; i < 26; ++i) {
    for (j = 0; j < n; ++j) {
      if (s[j] == c) {
	has[j] = 1;
	break;
      }
    }
  }
  for (j = 0; j < q; ++j) {
    cin >> l >> c;
    lzx(l,c);
  }
  return 0;
}
