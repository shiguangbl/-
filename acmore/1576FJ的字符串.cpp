/*
	��Ŀ��FJ��ɳ����д������һЩ�ַ�����
			A1 = ��A��
			A2 = ��ABA��
			A3 = ��ABACABA��
			A4 = ��ABACABADABACABA�� 
	����һ��ʹ��������д�
	�����������ö������Ľṹ����������� 
*/ 

#include<cstdio>
#include<cstring> 
#include<cmath>
#include<algorithm>
using namespace std;
char a[100000000+1];
int main(){
	int n;
	scanf("%d",&n);
	a[0] = '0';//��a[0]����һ����ʼ��������strlen()����Ľ����׼ȷ 
	a[1] = 'A';
	
	for(int i='B';i<='B'+n-2;i++){
		a[strlen(a)] = i;	
		int k = strlen(a);
		for(int j=strlen(a)-2;j>0;j--){//�������һ�����ǰ��εĵ��� 
			a[k] = a[j];
			k++;
		}
	}
	for(int i=1;i<strlen(a);i++){
		printf("%c",a[i]);
	}
	printf("\n");
	return 0;
} 
/*
//���ö�������������� 
void Print(int n){  
    if(n==1){  
        printf("A");  
        return ;  
    }  
    else {  
        Print(n-1);  
        printf("%c",'A'+n-1);  
        Print(n-1);  
    }  
}  
int main(){  
    int n; scanf("%d",&n);  
    Print(n);  
}  */
