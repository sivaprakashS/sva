#include<stdio.h>
int main()
{
char stc[20];
int i,c1=0,c2=0,c;
gets(stc);
for(i=0;stc[i]!='\0';i++)
{
if((stc[i]>='a' && stc[i]<='z') || (stc[i]>='A' && stc[i]<='Z') )
{
c1++;
}
else if(stc[i]>='0' && stc[i]<='9')	
{
c2++;
}
}
if((c1>0) && (c2>0))
  printf("yes");
  else
    printf("no");
return 0;

}
