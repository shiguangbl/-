/*
	问题：给定一个以秒为单位的时间t，要求用“<H>:<M>:<S>”的格式来表示这个时间。
	<H>表示时间，<M>表示分钟，而<S>表示秒，它们都是整数且没有前导的“0”。
	例如，若t=0，则应输出是“0:0:0”；若t=3661，则输出“1:1:1”。  

	分时间：相除，求余 
	取位数：取余，相除（除10） 
*/
#include<stdio.h>
int main(){
	int t,h,m,s;
	scanf("%d",&t);
	h = t/3600;
	t = t%3600;
	m = t/60;
	s = t%60;
	printf("%d:%d:%d\n",h,m,s);
	return 0;
} 
