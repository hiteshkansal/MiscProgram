#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct island{
char * name;
char *open;
char *close;
struct island * next;
};

struct island * create(char *name)
{
    struct island  *nw = (malloc(sizeof(struct island)));
    nw->name = strdup(name);
    nw->open = "09:00";
    nw->close = "17:00";
    nw->next ="NULL";
    return nw;
}

void display(struct island *i)
{
    while(i!=NULL){
    printf("island is: %s\nTimings: %s-%s\n\n",i->name,i->open,i->close);
    i=i->next;
    }
}

void release(struct island *i)
{
    struct island *fr=i;
    while(i!=NULL){
        fr=i->next;
        free(i->name);
        free(i);

    }
}

int main()
{
    char name[100];
    struct island *next = NULL;
    struct island *i = NULL;
//    FILE *f= open("island.txt","r");
  //  for(;fscanf(f,"%99[^n]\n",name)==1;i=next){
    for(;fgets(name,100,stdin)!=NULL;i=next){
    next= create(name);
    if(i!=NULL)
    i->next = next;
    }
    //fgets(name,100,stdin);
    //struct island *i1= create(name);
    //i->next = i1;
    display(i);
    release(i);
    //char *s="hitesh";
    //char * ss = strdup(s);
    //printf("%s",ss);
    return 0;
}
