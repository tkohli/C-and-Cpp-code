// WAP to check percentage of student
#include<stdio.h>
int main(){
	float m,p,c,e,cs,per;
	printf("Enter your marks in M, P, C, E, CS\n");
	scanf("%f",&m);
	scanf("%f",&p);
	scanf("%f",&c);
	scanf("%f",&e);
	scanf("%f",&cs);
	per = (p+m+c+e+cs)/5;
	printf("Percentage = %f",per);
	return 0;
}

