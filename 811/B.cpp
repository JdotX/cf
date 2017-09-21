#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int n,m;
vector<int> data;
vector<int> temp;
bool fu(int i, int j) {return (i < j);}

int main()
{
  int i, l, r, x, j, t;
  cin >> n >> m;
  for (i = 1; i <= n; ++i) {
    cin >> t;
    temp.push_back(t);
    data.push_back(t);
  }
  for (i = 1; i <= m; ++i) {
    cin >> l >> r >> x;
    sort(temp.begin()+l-1, temp.begin()+r, fu);
    if (temp[x-1] == data[x-1]) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }

    for (j = l-1; j <= r-1; ++j) {
      temp[j] = data[j];
    }
  }
  return 0;
}
