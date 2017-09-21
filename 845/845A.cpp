#include <iostream>
#include <algorithm>

using namespace std;
const int maxn = 205;
int a[maxn];

int main()
{
    int i,n;
    cin >> n;
    for (i = 0; i < 2*n; ++i) {
        cin >> a[i];
    }
    sort(a, a+2*n+1);
    cout << a[n] << "\t" << a[n+1] << endl;
    if (a[n] == a[n+1]) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;

}