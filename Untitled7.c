#include<stdio.h>
/*
int main()
{
    const char firstname[] = "crazy";
    const char* lastname = "forcode";
    printf("%lu\n", sizeof(firstname)+sizeof(lastname));
    return 0;
}

int main()
{
    int *i = (int*)58;
    int *j = (int*)75;
    printf("%ld",i-j);
    return 0;
}

int main()
{
    int d = 5;
printf(&d["Hay!Hello %c\n"], &4["BuddyWorld"]);           // Hello (some address in char)
printf(&d["Hay!Hello %c\n"], 4["BuddyWorld"]);            // Hello y
printf(&d["Hay!Hello %c\n"], 4["BuddyWorld"]);            // Segmentation fault
printf(&d["Hay!Hello %c\n"], &4["BuddyWorld"]);           // Hello yWorld

printf(&d["Hay!Hello %s\n"], &4["BuddyWorld"]);
    return 0;
}


#include<stdio.h>

int main(){
goto abc;
printf("crazyforcode");
return 0;
}

void dispaly(){
abc:
printf("display");
}
*/
#include<stdio.h>

int main()
{
    int a[] = {3,2,45,6,4};
    printf("%u\n%u",a+1,&a+1);
    char s[] = "hello";
    char t[] = "hello";
    if(s==t)
        printf("display1");
    else
        printf("display2");
    return 0;
}
