/*
	��Ŀ˵������5λ����6λ������������ж�������Ҫ���ϵ�ǰ����Ƚϵ�����
		�Ƿ��Ѿ����6λ
	ע�⣺sumÿѭ��һ��Ҫ��Ϊ0 
*/

#include<stdio.h>
int main(){
	int a[6+1];
	int n = 0;
	int s,sum = 0;
	scanf("%d",&s); 
	for(int i=10001;i<1000000;i++){
		int j = i;
		while(j){
			a[n] = j%10;
			sum += a[n];
			j = j/10;
			n++;
		}
		n = 0;
		if(i<100000&&a[0] == a[4]&&a[1] == a[3]&&sum == s){
			for(int k=0;k<5;k++)
				printf("%d",a[k]);
			printf("\n");
		}
		else if(i>100000&&a[0] == a[5]&&a[1] == a[4]&&a[2] == a[3]&&sum == s){
			for(int k=0;k<6;k++)
				printf("%d",a[k]);
			printf("\n");
		}
		sum = 0;
	}
	return 0;
} 
