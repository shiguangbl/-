/*
	��Ŀ��
	����һ��N�׾���A�����A��M���ݣ�M�ǷǸ�������
	���磺
	A =
		1 2
		3 4
	A��2����
		7 10
		15 22
	
	
	�������������������ͬʱ������Ҳ�ɳ�Ϊ����
	�����0����Ϊ��λ���� �����Խ���1������Ϊ0��
	����for����ѭ���޷�����ʱ���Զ��������������Կ��� 
*/ 

#include<stdio.h>
int main(){
	int init[30+1][30+1];//��ʼ�������룩���� 
	int anstemp[30+1][30+1];//���˹����У���ʱ���� 
	int ans[30+1][30+1];
	int aut[30+1][30+1]; 
	int n,m;
	scanf("%d%d",&n,&m);
	
	for(int i=0;i<n;i++){//������� 
		for(int j=0;j<n;j++)
			scanf("%lld",&init[i][j]);
	}
	
	for(int i=0;i<n;i++){//������ľ������ans��һ�� 
		for(int j=0;j<n;j++)
			ans[i][j] = init[i][j];
	}
	
	//��ʼһ����λ���󣬵����󣨷��󣩵Ĵ���Ϊ0��ʱ�� 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			if(i==j){
				aut[i][j] = 1;
			}else{
				aut[i][j] = 0;
			}
	}
	
	int temp = 0;
	int k = 0,l = 0;//k�����У�l������ 
	for(int r=2;r<=m;r++){
		
		for(int i=0;i<n*n;i++){		
			for(int j=0;j<n;j++){
				temp += ans[k][j]*init[j][l];//��k�г��Ե�l��
			}
			anstemp[k][l] = temp;//������ŵ���ʱ�������� 
			temp = 0;
			l++;
			if(l == n){//�������ж�����ǰk��Ӧ����ʱ��k+1 
				k++;
				l = 0;
			}
		}
		k = 0;l = 0;
		for(int i=0;i<n;i++){// ����ʱ����ת��ans�����У������������ʱ���飬��Ӱ���´���˵Ľ�� 
			for(int j=0;j<n;j++)
				ans[i][j] = anstemp[i][j];
		}
	}
	
	if(m==0){		//����Ϊ0��ʱ�������λ���� 
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%d",aut[i][j]);
				if(j!=n-1)		//��֤ÿ�����һ��������治���ո� 
					printf(" ");
			}
			printf("\n");
		}
	}
	else {	
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%d",ans[i][j]);
				if(j!=n-1)		
					printf(" ");
			}
			printf("\n");
		}	
	}
	
	return 0;
} 
