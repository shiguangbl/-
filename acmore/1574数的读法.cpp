/*
	��Ŀ�� 
	����1234567009ʱ
	����ú���ƴ����ʾ�� 
		shi er yi san qian si bai wu shi liu wan qi qian ling jiu


int 		9λ������
long long	18λ������ 

*/

#include<cstdio> 
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

void pinyin(int p,int &q){
	if(q == 1){
		printf(" ");
	}else{
		q = 1;
	}
	switch(p){
		case 0:printf("ling");
			break;
		case 1:printf("yi");
			break;
		case 2:printf("er");
			break;
		case 3:printf("san");
			break;
		case 4:printf("si");
			break;
		case 5:printf("wu");
			break;
		case 6:printf("liu");
			break;
		case 7:printf("qi");
			break;
		case 8:printf("ba");
			break;
		case 9:printf("jiu");
			break;
		case 10:printf("shi");
			break;	
		case 11:printf("bai");
			break;
		case 12:printf("qian");
			break;
		case 13:printf("wan");
			break;
		case 14:printf("yi");
			break;
	}
}

int main(){
	long long num,temp,ans;
	int k = 10000;	//����ȡ��λ����λ���µ�λ�� 
	int count = 1;
	int q = 0;	//���������������Ŀո� 
	int lastnum = 0;
	scanf("%lld",&num);
	if(num == 0){
		pinyin(0,q);
	}  
	while(num){		//numΪ��ֱ������ѭ�� ��numΪȡ���� 
		if(count==1){//����ȡ����λ���� 
			temp = num;
			num = num%100000000;
			ans = temp/100000000;
		}
		else {	//����ȡ����ǧ���١�ʮ����λ���� 
			temp = num;
			num = num%k;
			ans = temp/k;
			k /= 10;
		}
		
		if(ans>=10&&count<3){//���������λ����λ������10�� 
			int temp2 = ans,a[5];
			int i=0;
			while(temp2){
				a[i] = temp2%10;
				temp2 = temp2/10;
				i++;
			}
			i--;//i�����һλ��Ҫ��һ 
			while(i>0){//������λ��������� 
				if(a[i]||a[i-1]){//��֤���������������㣬�����һ�� 
					if(i==1&&a[i]==1){//����ʹ12���Ϊsi er ������ yi shi er �����������si ����1����� 
						pinyin(10,q);
					}else{			//���֣�λ����� 
						pinyin(a[i],q);
						if(a[i])
							pinyin(i+9,q);
					}
				}
				i--;
			}
			if(a[i])//�����һλ����λ����� 
				pinyin(a[i],q);
			if(count == 1)
				pinyin(14,q);
			else
				pinyin(13,q);
		
		}else if(lastnum||ans){//���������λ����λ��С��10���Լ�ǧ���١�ʮ����λ���� 
			if(ans==1&&count==5){
				pinyin(10,q);
			}else{				//����count Ψһ��Ӧ λ�� 1--��λ  
				pinyin(ans,q);
				if(count==1&&ans)
					pinyin(14,q);
				if(count==2&&ans)
					pinyin(13,q);
				if(count==3&&ans)
					pinyin(12,q);
				if(count==4&&ans)
					pinyin(11,q);
				if(count==5&&ans)
					pinyin(10,q);
				}
		}
		lastnum = ans;//��¼��һ������������⣬�����������������ϸ���ʱ�������һ�� 
		count++;
	}
	printf("\n");
	return 0;
}
