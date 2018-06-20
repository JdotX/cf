#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int maxn = 100010;
int n;
vector<int> a;

int main()
{
  cin >> n;
  int temp;
  for (int i = 0; i < n; ++i) {
    cin >> temp;
    a.push_back(temp);
  }

  sort(a.begin(), a.end());

  temp = 0;
  int ans = 0;
  for (auto it=a.begin(); it != a.end(); ++it) {
    if (*it != temp && *it != 0) {
      ans++;
    }
    temp = *it;
  }
  cout << ans << endl;
  return 0;
  

}
