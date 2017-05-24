#include <stdio.h>
#include <stdarg.h>

void print(int args,...)
{
    va_list vp;
    va_start(vp,args);
    int i;
    for(i=0;i<args;i++)
    printf("%c\n",va_arg(vp,double));
    va_end(vp);
}

int main()
{
    print(6,'r','e','d','t','y','n');
    return 0;
}
/*
 enum drink {
   MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAND, ZOMBIE
 };

 double price(enum drink d)
 {
   switch(d) {
   case MUDSLIDE:
     return 6.79;
   case FUZZY_NAVEL:
     return 5.31;
   case MONKEY_GLAND:
     return 4.82;
   case ZOMBIE:
     return 5.89;
   }
   return 0;
 }

double total(int args, ...)
 {
   double total = 0;
   va_list ap;
   va_start(ap, args);
   int i;
   for(i = 0; i < args; i++) {
     enum drink d = va_arg(ap, enum drink);
     total += price(d);
   }
   va_end(ap);
   return total;
 }
 main(){
   printf("Price is %.2f\n", total(2, MONKEY_GLAND, MUDSLIDE));
   printf("Price is %.2f\n", total(3, MONKEY_GLAND, MUDSLIDE, FUZZY_NAVEL));
   printf("Price is %.2f\n", total(1, ZOMBIE));
   return 0;
 }*/
