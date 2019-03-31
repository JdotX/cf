#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t,n;
    vector<int> v;
    cin >> n;
    for (auto i = 0; i < n; ++i)
    {
        cin >> t;
        v.push_back(t);
    }

    t = v[n-1];

    for (auto j = n-2; j >= 0; --j)
    {
        if (v[j] == t) continue;
        else {
            cout << j + 1 << endl;
            break;
        }
    }
    return 0;
}