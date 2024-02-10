#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

double solve(int N, vector<int> &vect)
{
  sort(vect.begin(), vect.end()); // Sort the positions of the elves
  long double ans;

  if (N == 5)
  {
    long double left = (vect[0]);
    long double right = vect[4];
    ans = max((right + vect[3]) / 2 - (left + vect[2]) / 2, (right + vect[2]) / 2 - (left + vect[1]) / 2);
  }
  else
  {
    ans = (vect[N - 1] + vect[N - 2]) / 2 - (vect[0] + vect[1]) / 2;
  }

  return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
#endif
  int T;
  cin >> T;

  for (int i = 1; i <= T; i++)
  {
    int N;
    cin >> N;
    vector<int> X(N);

    for (int j = 0; j < N; j++)
    {
      cin >> X[j];
    }

    double result = solve(N, X);
    cout << "Case #" << i << ": " <<fixed << setprecision(6)<< result << endl;
  }

  return 0;
}