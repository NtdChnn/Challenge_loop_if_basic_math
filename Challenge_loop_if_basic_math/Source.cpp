#include<stdio.h>
#include<math.h>
int main()
{
	int stnum, ndnum, x, y;
	float n, total1, total2, SD;
	total = 0;
	n = 0;
	scanf("%d", &stnum);
	scanf("%d", &ndnum);
	if (stnum < ndnum)
	{
		x = stnum;
		for (; x <= ndnum; x++)
		{
			printf("%d ", x);
			total += x;
			n++;
		}
		printf("\n%.1f", total / n);
		for (; stnum <= ndnum; stnum++)
		{
			y =
		}

	}
	return 0;
}