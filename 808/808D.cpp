#include <iostream>
#include <string.h>

using namespace std;
const int maxn = 100005;
typedef long long ll;

ll data[maxn];
ll sum[maxn];

bool search_for_ans(int l, int r, ll goal) 
{
  int m;
  while (l <= r) {
    m = (l+r) / 2;
    if (sum[m] == goal) {
      return true;
    }
    if (sum[m] < goal) {
      l = m+1;
    } else {
      r = m-1;
    }
  }
  return false;
}


bool cal(int n,int s)
{
    if (s % 2 == 1) {
        return false;
    }
    bool ans = false;
    for (int i = 0; i < n; ++i) {
      ans = ans || search_for_ans(0,i-1,s/2-data[i]);
      if (ans) return true;
    } 
    for (int j = 0; j < n-1; ++j) {
      ans = ans || search_for_ans(j+1,n-1,s/2+data[j]);
      if (ans) return true;
    }
    return ans;
}

int main()
{
  int n;
  ll temp;
  ll s = 0;
  memset(data,0,sizeof(data));
  memset(sum, 0,sizeof(sum));
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> temp;
    data[i] = temp;
    s += temp;
    sum[i] = s;
  }
  
  bool ans = cal(n,s);
  
  if (ans) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
