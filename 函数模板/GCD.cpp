#include<cstdio> 
/*
��С������=�������ĳ˻������Լ��

��С��������ָĳ�����������е�����������һ��
*/

int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int c = gcd(a,b);
	printf("���Լ����%d\n",c);
	int d = a*b/c; 
	printf("��С��������%d\n",d);
	return 0;
}
