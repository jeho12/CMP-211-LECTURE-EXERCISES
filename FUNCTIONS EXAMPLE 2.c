// program that performs arithmetic operations (+, -, *,/, %)
#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int div(int a, int b);
int multi(int a, int b);
int modulo(int a, int b);


int main ()
{
	int n1,n2,sum,subt,multiply,division,modul;
	
	printf("Enter two numbers: ");
	scanf("%d%d", &n1,&n2);
	
	sum=add(n1,n2); 										 // function call
	subt=sub(n1,n2);
	multiply=multi(n1,n2);
	division=div(n1,n2);
	modul=modulo(n1,n2);
	
	
	printf("sum=%d\n", sum);
	printf("sub=%d\n",subt);
	printf("multiple=%d\n",multiply);
	printf("division=%d\n",division);
	printf("modulo=%d\n",modulo);
	
	return 0;
}

// definition for addition
 int add(int a,int b)  // function definition
  {
  	int result;
  	result=a+b;
  	return result;          //return statement
  }
  
  // definition for subtraction
 int sub(int a,int b)  // function definition
  {
  	int result;
  	result=a-b;
  	return result;          //return statement
  }
  
  // definition for multiplication
 int multi(int a,int b)  // function definition
  {
  	int result;
  	result=a*b;
  	return result;          //return statement
  }
  
   // definition for division
 int div(int a,int b)  // function definition
  {
  	int result;
  	result=a/b;
  	return result;          //return statement
  }
  
  
    // definition for modulos
 int modulo(int a,int b)  // function definition
  {
  	int result;
  	result=a%b;
  	return result;          //return statement
  }
  
  
