#include <stdio.h>
#include <stdlib.h>

int a(int, int, int );

int main()
{
	while (1)
	{
		int x1, x2, n;
		scanf("%d%d%d", &x1, &x2, &n);
		if (x1 == 0 && x2 == 0 && n == 0)
			break;
		int b = a(x1, x2, n);
		printf("%d\n", b);
	}
	
	
}

int a(int x1, int x2,int n)
{
	if (n == 1)
		return x1;
	if (n == 2)
	    return x2;
	if (n != 1 && n != 2)
		return a(x1, x2, n - 1) + a(x1, x2, n - 2);
	
}

