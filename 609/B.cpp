#include <iostream>
#include <string.h>

using namespace std;
const int maxm = 12;

int ct[maxm];

int cal(int m)
{
    int ans = 0;
    for (int i = 1; i <= m; ++i) {
        for (int j = i+1; j <= m; ++j) {
            ans += ct[i] * ct[j];
        }
    }
    return ans;
}

int main()
{
    memset(ct, 0, sizeof(ct));
    int n, m, a, i;
    cin >> n >> m;
    for (i = 0; i < n; ++i) {
        scanf("%d", &a);
        ct[a]++;
    }
    int ans = cal(m);
    cout << ans << endl;
}
