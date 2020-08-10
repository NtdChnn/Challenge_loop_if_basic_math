#include<stdio.h>
#include<math.h>
int main()
{
	float stnum,ndnum,n,total,ave;
	total = 0;
	n = 0;
	scanf_s("%d", &stnum);
	scanf_s("%d", &ndnum);
	if (stnum < ndnum)
	{
		for (; stnum <= ndnum; stnum++)
		{
			printf("%d ", stnum);
			total = total+stnum;
			n++;
		}
		ave = total / n;
		printf("\n%f",ave);
	}
	return 0;
}