#include<stdio.h>
  int main() {
   int  x;
   printf("enter age :");
   scanf("%d", &x);

   if(x>18) {
    printf("adult \n");
   }
   else {
    printf("child \n");
   }
   return 0;
  }