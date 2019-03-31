#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int a,b,n;
    cin >> n;
    bool del[n+5];
    memset (del, false, (n+5) * sizeof(bool));
    for (int i = 0; i < n; ++i) 
    {
        cin >> a >> b;
        if (b == 0)
        {
            //cout << "Setting " << i << endl; 
            if (a != -1) del[a] = true;
            del[i+1] = true;
        }
    }

    bool found = false;
    for (int j = 1; j <= n; ++j)
    {
        if (del[j] == false) {
            found = true;
            cout << j << " ";
        }
    } 
    if (!found) {cout << -1;}
    std::cout << endl;
}