#include<stdio.h>
int main()
{
char stc[20];
int i,c;
for(i=0;stc[i]!='\0';i++)
{
if((stc[i]>='a'&stc[i]<='z')||(stc[i]>='A'&stc[i]<='Z'));
}
  printf("yes");
  else
    printf("no");
}
