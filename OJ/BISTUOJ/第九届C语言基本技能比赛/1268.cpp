#include <iostream>
#include <cmath>
using namespace std;
double EPS = 1e-10;
double add(double a, double b){
	if (abs(a + b) < EPS * (abs(a) + abs(b))) return 0;
	return a + b;
}
struct P{
	double x;
	double y;
	P(){}
	P(double x, double y):x(x), y(y){}
	P operator + (P p){
		return P(add(x, p.x), add(y, p.y));
	}
	P operator - (P p){
		return P(add(x, -p.x), add(y, -p.y));
	}
	P operator * (double d){
		return P(x * d, y * d);
	}
	double dot(P p){
		return add(x * p.x, y * p.y);
	}
	double det(P p){
		return add(x * p.y, -y * p.x);
	}
};
struct Line{
	P a;
	P b;
};

P intersection(Line p, Line q){
	return p.a + (p.b - p.a) * ((q.b - q.a).det(q.a - p.a) / (q.b - q.a).det(p.b - p.a));
}
bool on_seg(Line x, P q){
	return (x.a - q).det(x.b - q) == 0 && (x.a - q).dot(x.b - q) <= 0;
}
int main(){
	//freopen("E.in", "r", stdin);
	int t;
	cin >> t;
	while (t--){
		int n, cnt = 0;
		P p, o;
		Line l[1005];
		o.x = 0;
		o.y = 0;
		cin >> n;
		Line wall;
		cin >> wall.a.x >> wall.a.y >> wall.b.x >> wall.b.y;
		for (int i = 0; i < n; i++){
			cin >> p.x >> p.y;
			l[i].a = o;
			l[i].b = p;
		}
		for (int i = 0; i < n; i++){
			P r = intersection(l[i], wall);
			if (on_seg(wall, r) && on_seg(l[i], r)){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}