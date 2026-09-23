#include<stdio.h>
 int main() {
  int day;
  printf("enter day(1-3) :");
  scanf("%d", &day);
  
  switch(day) {
    case 1: printf("monday \n");
            break;
    case 2: printf("tuesday \n");
            break;
    case 3: printf("wedneday \n");
            break;
    default : printf("not included \n");
  }
 return 0;
 }