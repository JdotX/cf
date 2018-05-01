#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

typedef long long ll;

int main()
{
  std::list<ll> mylist;
  std::list<ll>::iterator it1, it2;
  std::unordered_map<ll, ll> m;
  std::unordered_map<ll, ll>::iterator mit;
  
  ll n,i,t;
  cin >> n;
  for (ll i = 0; i < n; ++i) {
    cin >> t;
    mit = m.find(t);
    if (mit == m.end()) {
      m[t] = 1;
    } else {
      m[t] += 1;
    }
    mylist.push_back(t);
  }
  
  it1 = mylist.begin();
  it2 = mylist.begin();

  while (it1 != mylist.end()) {
    it1 = mylist.begin();
    //cout << "zzz" << endl;
    while (m[*it1] == 1 && it1 != mylist.end()) {
      it1++;
    }
    if (it1 == mylist.end()) {
      break;
    }
    it2 = it1;
    it2++;
    while (*it2 != *it1 && it2 != mylist.end()) {
      it2++;
    }
    ll tar = *it1;
    //cout << "before erase" << endl;
    if (it2 == mylist.end()) {
      continue;
    } else {
      it2 = mylist.erase(it2);
    }
    it1 = mylist.erase(it1);
    mylist.insert(it2, tar*2);
    m[tar] = m[tar] - 2;
    mit = m.find(tar*2);
    if (mit == m.end()) {
      m[tar*2] = 1;
    } else {
      //cout << m[tar*2] << endl;
      m[tar*2] = m[tar*2] + 1;
      it1 = mylist.begin();
    }
  }

  cout << mylist.size() << endl;
  for (it1 = mylist.begin(); it1 != mylist.end(); it1++) {
    cout << *it1 << " ";
  }
  cout << endl;

  return 0;
}
