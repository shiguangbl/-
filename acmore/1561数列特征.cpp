/*
��Ŀ������n�������ҳ���n���������ֵ����Сֵ���͡�

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	double a[10000+1];
	for(int i=0;i<n;i++){
		scanf("%lf",&a[i]);	
	}
	int max = 0;	//����� 
	int min = 0;	//��С�� 
	double sum = a[0]; 
	for(int i=1;i<n;i++){
		if(a[max]<a[i])
			max = i;
		if(a[min]>a[i])
			min = i;
		sum += a[i];
	}
	printf("%.f\n%.f\n%.f\n",a[max],a[min],sum);
	return 0;
} 
*/
/*
	��������������ǲ��Ƕ����������������鶨��Ϊdouble
	ע�⣺-2.6�� %.lf ���Ϊ-3 
*/
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int  a[10000+1];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
	int max = 0;	//����� 
	int min = 0;	//��С�� 
	int sum = a[0]; 
	for(int i=1;i<n;i++){
		if(a[max]<a[i])
			max = i;
		if(a[min]>a[i])
			min = i;
		sum += a[i];
	}
	printf("%d\n%d\n%d\n",a[max],a[min],sum);
	return 0;
} 
