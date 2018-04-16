

int T;
scanf("%d", &T);
for (int i = 0; i < T; i++)
	scanf("%lf, %lf", &x[i], &y[i]);

for (int i = 0; i < T; i++)
{
	for (int j = i + 1; j < T; j++) //求过点1和点2的距离，就不必再求，所以j = i + 1
	{

		//求出第i个点和第j个点的距离
		dis = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
		if (dis < min)
		{
			min  = dis;
		}
	}
}

printf dis;