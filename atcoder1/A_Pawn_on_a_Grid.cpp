#include <bits/stdc++.h>
using namespace std;

int main()
{
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  for (int i = 0; i < h; i++)
  {
    cin >> s[i];
  }
    int cnt = 0;
    for (int i = 0; i < h; i++)
    {
      for (int j = 0; j < w; j++)
      {
        if (s[i][j] == '#')
        {
          cnt++;
        }
      }
    }
    
  
  cout << cnt;
  return 0;
}