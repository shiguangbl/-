#include<stdio.h>
#include<string.h>
#include<math.h>
/*
	scanf("%s",a)  gets(a)����Ϊ�ַ����룬�����м䲻�ܼӿո񣨷��������������� 
	%lld ������� long long���͵�����
	%ld  ������� long ���͵�����
	%lf  ������� double˫���ȸ�����
	%f   ������� float�����ȸ����� 
	
	����math.h ����pow(m,n)����
		���ڼ���m^n 
	
	ע�⻻��\n 
*/
int main(){
	char a[8+1];
	int b[8+1]; 	//���ڴ�����ַ�ת��Ϊ���ֵ����� 
	scanf("%s",a);
//	gets(a);
	for(int i=0;i<strlen(a);i++){//�ַ������ֵ�ת������ 
		if(a[i]>='0'&&a[i]<='9')
			b[i] = a[i]-'0';
		if(a[i]>='A'&&a[i]<='F')
			b[i] = a[i]-'A'+10;
	} 
	int j = 0;		//j��������ָ�� 
	long long ans = 0;
	for(int i=strlen(a)-1;i>=0;i--){
		ans += b[i]*pow(16,j);
		j++;
	}
	printf("%lld\n",ans);
	return 0;
} 
