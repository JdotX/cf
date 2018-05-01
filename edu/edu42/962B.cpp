#include <iostream>
#include <vector>

using namespace std;
vector<char> v;
int step = 0;
int result = 0;
int n, a, b, i;

void do_alloc()
{
  int len = 0;
  while (step < n && v[step] == '.') {
    len++;
    step++;
  }
  step++;
  if (a < b) {
    a -= len / 2;
    b -= (len+1) / 2;
  } else {
    b -= len / 2;
    a -= (len+1) / 2;
  }
  return;
}

int main()
{
  char c;
  cin >> n >> a >> b;
  int ini_a, ini_b;
  ini_a = a;
  ini_b = b;
  for (i = 0; i < n; ++i) {
    cin >> c;
    v.push_back(c);
  }

  while (step < n) {
    //cout << step << endl;
    do_alloc();
  }

  int result = 0;
  if (a < 0) {
    result += ini_a;
  } else {
    result += ini_a -a ;
  }

  if (b < 0) {
    result += ini_b;
  } else {
    result += ini_b - b;
  }
  cout << result << endl;
  return 0;
}
