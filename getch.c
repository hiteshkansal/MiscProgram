#include <stdio.h>
#include <stdlib.h>

int main()
{
char ch[20];
int i =0 ,j=0,n;
char cc[4];
char lac[4];
char no[11];
char *s = malloc(sizeof(char*));
gets(s);
n = atoi(s);
while(n--){
i=j=0;
fgets(ch,sizeof(ch),stdin);
while(ch[i] != '-'&& ch[i] != ' '){
    cc[j] = ch[i];
    i++;
    j++;
    }
cc[j] = '\0';
i++;
j=0;
while(ch[i] != '-'&& ch[i] != ' '){
    lac[j] = ch[i];
    i++;
    j++;
    }
lac[j] = '\0';
i++;
j=0;
while(ch[i]&& ch[i] != ' '){
    no[j] = ch[i];
    i++;
    j++;
    }
no[j] = '\0';
printf("CountryCode=%s,LocalAreaCode=%s,Number=%s",cc,lac,no);
}
return 0;
}
