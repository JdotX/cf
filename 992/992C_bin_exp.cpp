#include <iostream>

using namespace std;

typedef long long ll;

const ll mod = 1e9+7;

ll pow(ll n)
{
  if (n == 0) {
    return 1;
  } else if (n == 1) {
    return 2;
  } else {
    ll ans = pow(n/2) % mod;
    ans *= ans % mod;
    if (n % 2 == 1) {
      ans *= 2 % mod;
    }
    return (mod+ans) % mod;
  }
}

int main()
{
  ll x, k;
  cin >> x >> k;
  ll temp = pow(k);
  ll ans;
  if (x == 0) {
    ans = 0;
  } else  {
    ans = (mod + (temp * 2 * (x % mod)) % mod - temp + 1) % mod;
  }
  cout << ans << endl;
  return 0;
}
