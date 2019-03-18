#include <cstdio>
#include <cstring>
#include <cstdlib>
int max(int a, int b);
void print(const int *a, const int n);
void set(int *a, char *s, int len, int n);
void add(int *a1, int *a2, int *sum, int len);
int main()
{
	char s1[100], s2[100];
	int a1[100], a2[100], sum[101];
	fgets(s1, 100, stdin);
	fgets(s2, 100, stdin);

	int len1 = strlen(s1) - 1;
	int len2 = strlen(s2) - 1;

	int lenmax = max(len1, len2);

	memset(a1, 0, sizeof(a1));
	memset(a2, 0, sizeof(a2));

    set(a1, s1, lenmax, len1);
    set(a2, s2, lenmax, len2);
    add(a1, a2, sum, lenmax);
    print(a1, lenmax);
    print(a2, lenmax);
    print(sum, lenmax + 1);
    return 0;

}

int max(int a, int b)
{
	return a > b ? a : b;
}

void print(const int *a, const int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		if(a[i] != 0)
		{
			flag = 1;
		}
		if(flag)
			printf("%d ", a[i]);
	}
	printf("\n");
}

//len表示最大字符串长度，n表示当前数组长度。
void set(int *a, char *s, int len, int n)
{
	int i, j;
	for (i = len - 1, j = n - 1; i >= 0 && j >= 0; i--, j--)
	{
		a[i] = s[j] & 15;
	}
}

void add(int *a1, int *a2, int *sum, int len)
{
	int t = 0;
	for (int i = len - 1, j = len; i >= 0; i--, j--)
	{
		int temp = (a1[i] + a2[i] + t);

		sum[j] = temp % 10;
		if (temp >= 10)
		{
			t = temp - 10;
		}
		else
		{
			t = 0;
		}
	}
}