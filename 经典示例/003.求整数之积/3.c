/* Input two numbers, output the product */
#include <stdio.h>
int main()
{
		int x,y,m;				/* �������ͱ���x��y��m */
		printf("Please input x and y\n");	/* �����ʾ��Ϣ */
		scanf("%d%d",&x,&y);			/* ������������������x��y���� */
		m=x*y;					/* �������������Ļ�����������m */
		printf("%d * %d = %d\n",x,y,m);		/* ������ */
        return 0;
}