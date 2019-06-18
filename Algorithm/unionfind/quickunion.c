#include <stdio.h>
int id[100];
void init(int n){
    int i;
    for (i = 0; i < n; i++)
        id[i] = i;
}

int root(int a){
    while(id[a] != a)
    {
        a = id[a];
    }
    return a;
}
void QuickUnion(int a, int b){
	int root_a = root(a);
	int root_b = root(b);
    if (root_a != root_b)
        id[root_a] = root_b;
}
bool connect(int a, int b){
	return root(a) == root(b);
}
void view()
{
    int i;
    for (i = 0; i < 10; i++){
        printf("%d,", id[i]);
    }
}
int main()
{
    int a, b;
    int t;
    scanf("%d", &t);
    init();
    while (t--)
    {
        scanf("%d%d", &a, &b);
        QuickUnion(a, b);
    }
    scanf("%d%d", &a, &b);
    if (root(a) == root(b))
        printf("1");
    else
        printf("0");
    view();
    return 0;
}


