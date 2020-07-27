#include <stdio.h>
int main(){

int start;
int stop;
int i;
scanf("%d",&start);
scanf("%d",&stop);
for (i=start; i <= stop; i++)
{
  printf("Zakres wynosi :%d\n",i);
}

   return 0;
}