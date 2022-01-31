//WAP to implement structure in c
#include<stdio.h>
#include<string.h>
struct students{
	char n[200];
	int rollno;
	float percent;
};

int main()
{ 
  struct students obj;
	strcpy(obj.n,"Tiya");
	obj.rollno=1045;
	obj.percent=85;
	printf("Name = %s\nRoll no = %d\nPercent = %f\n", obj.n, obj.rollno,obj.percent);
	
	struct students obj1;
	strcpy(obj1.n,"Divya");
	obj1.rollno=1046;
	obj1.percent=85;
	printf("Name = %s\nRoll no = %d\nPercent = %f\n", obj1.n, obj1.rollno,obj1.percent);
	
	return 0;
}


//write a program to use array as a sturucture in C
#include<stdio.h>
struct age{
};
int main(){
	struct age arr[10];
	printf("enter 10 numbers \n");
	for (int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("\noutput\n");
	for (int i=0;i<10;i++){
		printf("%d",arr[i]);
	}
	return 0;
}


//WAP to add using structure in c
#include<stdio.h>

struct students{
	int a;
	int b;
	int c;
};

int main (){
	struct students obj;
	obj.a=5;
	obj.b=7;
	obj.c=obj.a+obj.b;
	printf("%d",obj.c);
	return 0;
}
