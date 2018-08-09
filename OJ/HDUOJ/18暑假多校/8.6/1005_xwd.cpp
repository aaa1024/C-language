#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize(2)

using Node = struct {
  double x, y, r;
};
const double pi = acos(-1.0);
const int maxn = 110;
int n, r;
Node p[maxn];

double dis(Node a, Node b) {  
  return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));  
}  

// pair<double, double> cross(Node a, Node b) {
//   double d = dis(a, b);
//   double p = (a.r + b.r + d) / 2.0;
//   double ta = 2.0 * (double)sqrt(p * (p - a.r) * (p - b.r) * (p - d)) / (d * a.r);
//   double tb = 2.0 * (double)sqrt(p * (p - a.r) * (p - b.r) * (p - d)) / (d * b.r);
//   return make_pair(pi * a.r * asin(ta), pi * b.r * asin(tb));
// }

pair<double, double> cross(Node a, Node b) {
  double d = dis(a, b);
  //大圆为a，小圆为b
  //大圆圆心角
  double ang1 = 2 * acos((a.r * a.r + d * d - b.r * b.r) / (2 * d * a.r));
  //小圆圆心角
  double ang2 = 2 * acos((b.r * b.r + d * d - a.r * a.r) / (2 * d * b.r));
//  printf("%lf %lf\n", ang1, ang2);
  double c1 = ang1 * a.r;
  double c2 = ang2 * b.r;
  return make_pair(c1, c2);
}

signed main() {
  // freopen("in", "r", stdin);
  int T;
  scanf("%d", &T);
  while(T--) {
    scanf("%d%d",&n,&r);
    for(int i = 1; i <= n; i++) {
      cin >> p[i].x >> p[i].y >> p[i].r;
    }
    double ret = 2 * pi * r;
    Node big = {.0, .0, (double)r};

    for(int i = 1; i <= n; i++) {
      double d = dis(big, p[i]);
      if(d > p[i].r + big.r) { //相离
        continue;
      }
      if (d == p[i].r + big.r){  //外切
      //  ret = ret + 2 * pi * p[i].r;
        continue;
      }
      if(d <= big.r - p[i].r) {
        if(d == big.r - p[i].r) { //内切
          ret = ret + 2 * pi * p[i].r;
        }
        continue;
      }
     // if((double)fabs(big.r - p[i].r) < big.r + p[i].r) { //相交
      if(d < (big.r + p[i].r) && d > (big.r - p[i].r)){
        auto t = cross(big, p[i]);
        ret = ret - t.first + t.second;
        continue;
      }
    }
    printf("%.10lf\n", ret);
  }
  return 0;
}