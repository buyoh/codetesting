#include <bits/stdc++.h>

using namespace std;

int N, M;
int dp[102][102];

int main() {
  cin >> N >> M;
  dp[0][0] = 1;
  for (int i = 0; i <= N; ++i) {
    for (int j = 0; j <= M; ++j) {
      dp[i + 1][j] += dp[i][j];
      dp[i][j + 1] += dp[i][j];
    }
  }
  cerr << dp[1][1] << endl;
  cout << dp[N][M] << endl;
  return 0;
}
