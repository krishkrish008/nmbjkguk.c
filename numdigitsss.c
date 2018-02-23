#include <stdio.h>
#define MAX_SIZE 100
int main()
{
char str[MAX_SIZE];
char *s=str;
int alphabets, digits, others;
alphabets = digits = others =0;
printf("\nEnter only numbers");
gets(str);
while(*s)
{
if((*s >='a'&&*s<='z')||(*s>='A'&&*s<='Z'))
alphabets++;
else if(*s>='0' && *s<='9')
digits++;
else
others++;
s++;
}
printf("Digits = %d\n", digits);
return 0;
}
