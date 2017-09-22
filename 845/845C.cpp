#include <iostream>
#include <vector>
#include <algorithm>
#include <set> 

using namespace std;

const int maxn = 200010;

vector<int> adj_list[maxn];
set<int> beauty[maxn];
int a[maxn];

int gcd(int x, int y) {
  while (y) {
    int t = x;
    x = y;
    y = t % y;
  }
  return x;
}

void dfs(int node, int parent, int prev_all_gcd)
{
    /* current node selected */
    for (auto b: beauty[parent])
        beauty[node].insert(gcd(a[node], b));
    /* current node not selected */
    beauty[node].insert(prev_all_gcd);

    int all_gcd = gcd(a[node], prev_all_gcd);
    for (auto next: adj_list[node]) {
        if (next != parent)
            dfs(next, node, all_gcd);
    }
    return;
}

int main()
{
  int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }
    int root = 1, parent = 0;
    beauty[0].insert(0);
    dfs(root, parent, 0);
    for (int i = 1; i <= n; i++)
        cout << *(beauty[i].rbegin()) << " ";
    cout << endl;
    return 0;
}
