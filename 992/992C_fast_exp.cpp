#include <iostream>

using namespace std;

typedef long long ll;

const ll mod = 1e9+7;

ll pow(ll a, ll n)
{
  ll r = 1;
  ll base = a;
  while (n != 0) {
    if (n & 1) {
      r = base * r % mod;
    }
    base = base * base % mod;
    n = n >> 1;
  }
  return r % mod;
}

int main()
{
  ll x, k;
  cin >> x >> k;
  ll temp = pow(2,k);
  ll ans;
  if (x == 0) {
    ans = 0;
  } else  {
    ans = (mod + (temp * 2 * (x % mod)) % mod - temp + 1) % mod;
  }
  cout << ans << endl;
  return 0;
}
