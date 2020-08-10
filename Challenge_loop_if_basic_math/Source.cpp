#include<stdio.h>
#include<math.h>
int main()
{
	int stnum, ndnum, x;
	double y, n, total1, total2, ave, SD;
	total1 = 0;
	total2 = 0;
	n = 0;
	scanf_s("%d", &stnum);
	scanf_s("%d", &ndnum);
	if (stnum < ndnum)
	{
		x = stnum;
		for (; x <= ndnum; x++)
		{
			printf("%d ", x);
			total1 += x;
			total2 += x * x;
			n++;
		}
		ave = total1 / n;
		printf("\nAverage = %.1f\n", ave);
		SD = sqrt((n * total2 - total1 * total1) / (n * (n - 1)));
		printf("SD = %.2f", SD);

	}
	else if (stnum > ndnum)
	{
		x = stnum;
		for (; x >= ndnum; x--)
		{
			printf("%d ", x);
			total1 += x;
			total2 += x * x;
			n++;
		}
		ave = total1 / n;
		printf("\nAverage = %.1f\n", ave);
		SD = sqrt((n * total2 - total1 * total1) / (n * (n - 1)));
		printf("SD = %.2f", SD);

	}
	else {
		y = stnum;
		printf("%d\nAverage = %.1f\nSD = 0.00", stnum, y);
	}
	return 0;
}