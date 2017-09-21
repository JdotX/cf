#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
int n, m;
bool myfunction (int i,int j) { return (i>j); }
int main()
{
    cin >> n;
    cin >> m;
    int i, t;
    for (i = 0; i < n; ++i) {
        cin >> t;
        v.push_back(t);
    }

    sort(v.begin(), v.end(), myfunction);
    int ans = 0;
    for (i = 0; i < n; ++i) {
        ans += v[i];
        if (ans >= m) {
            cout << (i+1) << endl;
            break;
        }
    }
}