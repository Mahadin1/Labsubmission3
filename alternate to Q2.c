#include<stdio.h>
int main(){
   int a,b,c;
   
   printf("Enter value a:");
   scanf("%d", &a);
   
   printf("Enter value b:");
   scanf("%d", &b);
  
   printf("Enter value c:");
   scanf("%d", &c);
   
   int z = c;
   c=b;
   b=a;
   a=z;
   

   printf("values after rotation \na: %d\n",a); 
   printf("b: %d\n",b); 
   printf("c: %d\n",c); 
}

