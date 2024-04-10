#include<stdio.h>
int main(){

  int num1,num2;
  char ch;
  float result;

  while(1){

  printf("\nEnter First Number: ");
  scanf("%d",&num1);

  printf("Enter Your Operations: ");
  scanf(" %c",&ch);

  printf("Enter Second Number: ");
  scanf("%d",&num2);
  
  switch (ch){

  case '+': result=(num1+num2);
    break;

  case '-': result=(num1-num2);
    break;

  case '*': result=(num1*num2);
    break;
  
  case '/': result=(num1/num2);
    break;

  default: printf("Inviled Choice...");
  
  }

  printf("Your Result is %d %c %d => %f",num1,ch,num2,result);

  }

}