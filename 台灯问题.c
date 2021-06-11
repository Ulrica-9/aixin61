#include <stdio.h>
//打表法
#define M 1000
int main(void)
{
	int i,j=0;
	int b[M];//存放灯光问题
	int a[M];
	int m = 0,n=0;
	printf("输入台灯数和人数:");
	scanf_s("%d%d", &m,&n);
	for (i = 0; i < m; i++)
	{
		b[i] = ++j;
		a[i] = 1;
	}
		//初始化为1,2,3...... 表示灯全开
	for (i = 2; i <=n; i++)
	{
		int s = i;
		for (j = 0; j <m; j++)
		{
			if (s==b[j])
			{
				a[j] = 0;
				s = s * i;
			}
		}
	}
	//输出
	for (i = 0; i < m; i++)
	{
		if (a[i] == 1)
		{
			printf(" %d ", b[i]);
		}

	}
}
