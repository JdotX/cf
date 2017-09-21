#include <bits/stdc++.h>
#define sc scanf
#define pr printf
using namespace std;

const int N = 110000;
int64_t pre[N] , arr[N];

bool binary_search_ans(int l , int r , int64_t ans);

int main()
{
  int n,i,j;
  sc("%d",&n);
  long long sum = 0;
  for(i=1; i<=n; i++)
    {
      sc("%I64d",&arr[i]);
      sum += arr[i];
      pre[i] = pre[i-1] + arr[i];
    }
  if(sum %2 != 0)
    {
      pr("NO\n"); return 0;
    }
  sum /= 2;
  for(i=1; i<n; i++)
    {
      if(binary_search_ans(i+1,n,sum+arr[i]))
        {
	  pr("YES\n"); return 0;
        }
    }
  for(i=1; i<=n; i++)
    {
      if(binary_search_ans(0,i-1,sum-arr[i]))
        {
	  pr("YES\n"); return 0;
        }
    }
  pr("NO\n");

  return 0;
}
bool binary_search_ans(int l , int r , int64_t ans)
{
  int mid;
  while(l <= r)
    {
      mid = (l+r)/2;
      if(pre[mid] == ans) return 1;
      if(pre[mid] < ans)
	l = mid + 1;
      else
	r = mid - 1;
    }
  return 0;
}
