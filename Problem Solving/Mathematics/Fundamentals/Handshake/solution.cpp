#include <algorithm>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
  int T;
  cin >> T;
  for (int a0 = 0; a0 < T; a0++) {
    int N;
    cin >> N;
    cout << ((N * (N - 1)) / 2) << "\n";
  }
  return 0;
}
