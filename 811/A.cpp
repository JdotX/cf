#include <iostream>

using namespace std;

bool compute(int a,int b) 
{
  int s = 1;
  while (true) {
    a = a-s;
    if (a < 0) {
      return false;
    }
    s = s+1;
    b = b-s;
    if (b < 0) {
      return true;
    }
    s = s+1;
  }
}




int main()
{
  int a, b;
  cin >> a >> b;
  bool ans = compute(a,b);
  if (ans) {
    cout << "Valera" << endl;
  } else {
    cout << "Vladik" << endl;
  }
  return 0;
}
