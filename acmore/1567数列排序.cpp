/*
	sort(,)��ʹ�ã���һ������������ʼλ�ã���������
		�ڶ�������Ϊβָ�����һ��λ�ã�������+����Ԫ�صĸ����� 
	������ͷ
		 #include <algorithm>
		 using namespace std;
*/

#include<stdio.h>
#include <algorithm>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int a[200+1];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n); 
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
} 
