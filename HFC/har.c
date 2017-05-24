#include <stdio.h>

const char *fun()
{
return "rain";
}

int main()
{
char *p="hi";
p=fun();
printf("%s\n",p);
printf(2+"arpit");
return 0;
}
