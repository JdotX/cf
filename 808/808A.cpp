#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int s;
  cin >> s;
  int count = (int) (log10(s));
  int p = 1;
  for (int i = 0; i < count; ++i) {
    p *= 10;
  }
  int st = (p+(s-(s % p)));
  cout << st - s << endl;
  return 0;
}
