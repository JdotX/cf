#include <iostream>
#include <string.h>
#include <string>
using namespace std;

string s;
int n;
bool c[28];
int char_count = 0;

void judge()
{
  if (s.length() < n) {
    cout << "impossible" << endl;
    return;
  } else {
    int len = s.length();
    for (int i = 0; i < len; ++i) {
      if (!c[s[i]-'a']) {
	c[s[i]-'a'] = true;
	char_count++;
      } 
      if (char_count == n) {
	cout << 0 << endl;
	return;
      }
    }
    cout << n - char_count << endl;
  }
  return;
}

int main()
{
  cin >> s;
  cin >> n;
  memset(c, false, sizeof(c));
  judge();
  return 0;
}
