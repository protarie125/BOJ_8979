#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

using M = tuple<ll, ll, ll>;

ll n, k;
vector<M> mlist;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> k;

  M t;
  mlist = vector<M>(n);
  for (auto&& [x, y, z] : mlist) {
    ll k0;
    cin >> k0;

    cin >> x >> y >> z;

    if (k0 == k) {
      t = M{x, y, z};
    }
  }

  sort(mlist.begin(), mlist.end(), greater());

  auto ans = 0LL;
  for (const auto& p : mlist) {
    ++ans;
    if (p == t) {
      break;
    }
  }

  cout << ans;

  return 0;
}