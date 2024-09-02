#include<stdio.h>
int main(){
   int a,b,c;
   
   printf("Enter value a:");
   scanf("%d", &a);
   
   printf("Enter value b:");
   scanf("%d", &b);
  
   printf("Enter value c:");
   scanf("%d", &c);
   
   int newb = a;
   int newc = b;
   int newa = c;
   
   printf("values after rotation \na: %d\n",newa); 
   printf("b: %d\n",newb); 
   printf("c: %d\n",newc); 
}
