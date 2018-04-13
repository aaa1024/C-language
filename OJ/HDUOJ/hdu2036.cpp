#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
class Point
{
private:
	double x;
	double y;
public:
	Point()
	{

	}
	void Set(double x_, double y_)
	{
		this->x = x_;
		this->y = y_;
	}
	double distance(const Point &other)
	{
		return sqrt((this->x - other.x) * (this->x - other.x) + (this->y - other.y) * (this->y - other.y));
	}
	friend double l_distance(const Point &a, const Point &b, const Point &c);
};
double l_distance(const Point &a, const Point &b, const Point &c)
{
		double A = (c.y - b.y);
		double B = (c.x - b.x);
		double C = b.y * (c.x - b.x) - b.x * (c.y - b.y);
		double ans = abs(A * a.x + B * a.y + C) / sqrt(A * A + B * B);
		return ans;
}
int main()
{
	int n;
	while(scanf("%d", &n) != EOF && n)
	{
		double ans = 0, x, y;
		Point p[105];
		for (int i = 1; i <= n; i++)
		{
			scanf("%lf%lf", &x, &y);
			p[i].Set(x, y);
		}

		for (int i = 2; i < n; i++)
		{
			ans += p[i].distance(p[i + 1]) *  l_distance(p[1], p[i], p[i + 1]) / 2;
		}
		printf("%.1lf\n", ans);
	}

	return 0;
}