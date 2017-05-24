#include<stdio.h>

typedef union{
int a;
float b;
char c;
}hi;

typedef enum{
BLUE,GREEN,RED
}color;


typedef struct{
int a;
float b;
hi c;
color clr;
}strc;



int main()
{
//strc h = {2.0, 1.0,.c.a=1};
strc h = {2.0, 1.0,7,RED};
//h.a=12;
//h.b=34.6;
//h.clr = GREEN;
printf("%d\n%f\n%d", h.c.a,h.b,h.clr);

}
