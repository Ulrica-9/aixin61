#include <stdio.h>
//���
#define M 1000
int main(void)
{
	int i,j=0;
	int b[M];//��ŵƹ�����
	int a[M];
	int m = 0,n=0;
	printf("����̨����������:");
	scanf_s("%d%d", &m,&n);
	for (i = 0; i < m; i++)
	{
		b[i] = ++j;
		a[i] = 1;
	}
		//��ʼ��Ϊ1,2,3...... ��ʾ��ȫ��
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
	//���
	for (i = 0; i < m; i++)
	{
		if (a[i] == 1)
		{
			printf(" %d ", b[i]);
		}

	}
}
