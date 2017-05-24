#include <stdio.h>
// all this will be calculated at compile time (efficient)
#define FIRST_CHAR 'a'
#define ALPH_SIZE 5
#define PAST_LIMIT (FIRST_CHAR + ALPH_SIZE) //1 past last char

#define SEQ_LEN 3

char result[SEQ_LEN +1];  //let's make it global for change

void print_them()
{
    static i=0;   //position of result[] current invocation fills
    int p;

    if(i==SEQ_LEN) { puts(result); return; }  //seq. full, print

    p = (i==0) ? FIRST_CHAR : result[i-1];  //grab previous char

    while(p < PAST_LIMIT)  //iterate forward from prev. char
    {
        result[i++] = p++;
        print_them() , i--;  //fill next then unwind i
    }
}

int main(void)
{
    print_them();
    return 0;
}
