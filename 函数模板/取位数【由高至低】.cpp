/*
int 		9λ������
long long	18λ������ 

*/

#include<cstdio> 
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	long long num,temp,temp2;
	int k = 10000;
	int count = 1;
	scanf("%lld",&num);
	while(count <=6){
		if(count == 1){
			temp2 = num;//�ݴ�num 
			num = num%100000000;
			temp = temp2/100000000;//��ȡ�ݴ��num�ĸ�λ���浽temp��������� 
		}
		else {		//��ȡ��λ��ǧλ����λ��ʮλ����λ 
			temp2 = num; 
			num = num%k;
			temp = temp2/k;
			k /= 10;
		}
		printf("%lld ",temp);//�������ѭ����ȡ��λ�� 
		count++;
	}
	
	return 0;
}
