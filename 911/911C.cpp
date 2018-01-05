#include <iostream>

using namespace std;

int a,b,c;

bool judge()
{
  if (a == 1 || b == 1 || c == 1) {
    return true;
  }
  if (a == 3 && b == 3 && c == 3) {
    return true;
  }
  if ((a == 2 && b == 2) || (b == 2 && c == 2) || (c == 2 && a == 2)) {
    return true;
  }
  if ((a == 2 && b == 4 && c == 4) || (a == 4 && b == 2 && c == 4) || (a == 4 && c == 2 && b == 4)) {
    return true;
  }
  return false;
}

int main()
{
  cin >> a >> b >> c;
  if (judge()) {
      cout << "YES" << endl;
  } else cout << "NO" << endl;
  return 0;
}
