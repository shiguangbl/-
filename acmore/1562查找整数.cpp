#include<stdio.h>
/*
	��Ŀ������һ������n�����������У�������a�������еĵ�һ�γ����ǵڼ�����

	�������ѭ����������Ϊ-1
	ע�⣺���Ҫ���� \n 
*/
int main(){
	int n;
	scanf("%d",&n);
	int a[1000+1]; 
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int temp;
	int local;
	scanf("%d",&temp);
	for(int i=1;i<=n;i++){
		if(a[i]==temp){
			local = i;
			break;
		}
		local = -1; 
	}
	printf("%d\n",local);
	return 0;
}
