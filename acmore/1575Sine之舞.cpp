/*
	��Ŀ��	An=sin(1�Csin(2+sin(3�Csin(4+...sin(n))...)
			Sn=(...(A1+n)A2+n-1)A3+...+2)An+1
			���Sn
			
	˼·��д��ǰ�����ҹ��ɣ�ƴ�������Sn��An
	
	A1 = sin(1)
	A2 = sin(1-sin(2))
	A3 = sin(1-sin(2+sin(3)))
	
	S1 = A1+1
	S2 = (A1+2)A2+1
	S3 = ((A1+3)A2+2)A3+1
*/

#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

void An(int n){
	for(int i=1;i<=n-1;i++){
		printf("sin(%d",i);
		if(i%2){	//�渺ż�� 
			printf("-");
		}else{
			printf("+");
		}
	}
	printf("sin(%d",n);
	for(int i=1;i<=n;i++){
		printf(")");
	}
} 

void Sn(int n){
	for(int i=1;i<=n-1;i++){
		printf("(");
	}
	for(int i=1;i<=n;i++){
		An(i);
		printf("+%d",n-i+1);
		if(i!=n){
			printf(")");
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
//	An(n);
//	printf("\n");
	Sn(n);
	printf("\n");
	return 0;
} 
