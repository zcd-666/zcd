# include <stdio.h>
int main(void)
{
    int i,n;
    printf("��������ʼ����:"); 
	scanf("%d",&i);
	printf("���������������:");
	scanf("%d",&n);
	printf("\n");
	printf("ԭ��\tƽ��\t����\n");
	for(i=i;i<=n;i++)
	{
	 printf("%d\t%d\t%d\n",i,i*i,i*i*i);
	}
	return 0; 
	
}
