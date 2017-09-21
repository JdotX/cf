#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int> > b(n);
    long long t0 = -1, t1 = -1;
    for (int i = 0; i < n; i++)
        cin >> b[i].first >> b[i].second;
 
    sort(b.begin(), b.end());
    for(int i = 0; i < n; i++) {
        if( t0 < b[i].first)
            t0 = b[i].second;
        else if (t1 < b[i].first)
            t1 = b[i].second;
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
 
    cout << "YES" << endl;
}