#include <stdio.h>
#include <string.h>
int main()
{
char str[100];
int i = 0,lo= 0, f = 1;
puts("\nEnter string");
gets(str);
for(i=0;str[i]!='\0';i++)
{
lo=lo+1;
}
for(i=0;i<=lo-1;i++)
{
 if(str[i] == ' ')
{
f = f + 1;
}
}
   printf("The number of lines in the string are %d", f);
   return 0;
}
