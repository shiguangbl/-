#include<stdio.h>
int main(){
	int n,m;
	int a[26];
	int temp = 'A';
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){		//����m�Ĵ�С��������0~m-1��ֵΪA-... 
		a[i] = temp;
		temp++;
	}
	for(int i=0;i<n;i++){//�������n�� Ҳ������whileѭ������ 
		for(int j=0;j<m;j++){		//�����ǰ�� 
			printf("%c",a[j]);
		}
		printf("\n");
		//�������е�����ȫ������ƶ�һλ���ճ�a[0]λ�� 
		for(int k=m-1;k>=0;k--){//Ҫ��֤a[1]λ����a[0]�ƹ�ȥ�ģ��ҵķ���ʼ�տ��ƴ�����ĺ�һλ����k=1ʱ����ȥѭ���� 
//		for(int k=m-1;k>0;k--){	//�����󷽷�ʼ�տ��ƴ�������ܽ���ѭ�� 
			a[k+1] = a[k];
//			a[k] = a[k-1];
		}
		//�a[0]λ�� 
		if(a[1]+1>'Z')		//��ֹacii��A-ZԽ�� 
			a[0] = a[1]+1-26;
		else
			a[0] = a[1]+1;
	}
	return 0;
} 
