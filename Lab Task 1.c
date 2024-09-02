#include<stdio.h>
int main(){
   int testInteger=30000000000;
   printf("Number is:%d",testInteger);
   
//   Reason: value is exceeding int limit
//  you can use float to displat it.
   
   float value=3000000000;
   printf("\nNumber is:%f",value);
   
//   but remember float can also be exceede at 11-places
}
