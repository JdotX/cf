#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

ll prod (ll n)
{
    ll ans = 1;
    if (n == 0) { return 0; }
    else 
    {
        while (n > 0)
        {
            ans *= (n % 10);
            n /= 10;
        }
    }
    //cout << ans << endl;
    return ans;
}

ll max_prod (ll n)
{
    ll ans = 1;
    if (n < 10) {return n;}
    else 
    {
        long long t = 10;
        while (t <= n)
        {
            ans = max(prod(n - (n%t) - 1), ans);
            t *= 10;
        }
        ans = max(prod(n), ans);
    }
    return ans;
}

int main()
{
    ll n;
    cin >> n;
    cout << max_prod(n) << endl;
    return 0;
}