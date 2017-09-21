#include <iostream>
using namespace std;
typedef long long ll;

ll t, n;

void cal()
{
  ll a, b;
  a = (1+n) * n / 2;
  b = 1;
  while (b <= n) {
    b = b*2;
  }
  b = b-1;
  cout << a - (b*2) << endl;
}


int main()
{
  cin >> t;
  for (ll i = 0; i < t; ++i) {
    cin >> n;
    cal();
  }
}
