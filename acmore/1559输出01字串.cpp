#include<stdio.h>
/*
�������ÿ�����ݽ�����ʱ��ţ������ţ�����������ھ��еĴ��벻�ܷŵ���11�е�λ�� 
*/
int main(){
	int a[5];
	int n;
	for(int i=0;i<32;i++){
		n = i;
		for(int j=0;j<5;j++){
			a[j]= n%2;
			n = n/2;
		}
		for(int k=4;k>=0;k--){
			printf("%d",a[k]);
		} 
		printf("\n");
	}
	return 0;
} 
