/*
	��Ŀ��ƽ�������������Σ����ǵı�ƽ����ֱ������ϵ��X���Y�ᡣ����ÿ�����Σ�
	���Ǹ�������һ����Զ�������꣬����������������εĽ�������� 
	
	������ཻ��� 
	���������ε����¶�������꣩�Ľϴ���Ǹ�m1���������ε����¶��������꣩�Ľϴ���Ǹ�n1
	���������ε����϶�������꣩�Ľ�С���Ǹ�m2���������ε����¶��������꣩�Ľ�С���Ǹ�n2
	 �����m2,n2���ڣ�m1,n1�����ϣ�˵�������ཻ��� 
	 ������������������ 
*/

#include<stdio.h>
double max(double a,double b){
	return a>b?a:b;
}
double min(double a,double b){
	return a<b?a:b;
}
int main(){
	double x1,y1,x2,y2,x3,y3,x4,y4;
	scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
	scanf("%lf%lf%lf%lf",&x3,&y3,&x4,&y4);
	double m1 = max(min(x1,x2),min(x3,x4));
	double n1 = max(min(y1,y2),min(y3,y4));
	double m2 = min(max(x1,x2),max(x3,x4));
	double n2 = min(max(y1,y2),max(y3,y4));
	if(m2>m1&&n2>n1){
		printf("%.2lf\n",(m2-m1)*(n2-n1));
	} 
	else{
		printf("0.00\n");
	}
	return 0;
} 
