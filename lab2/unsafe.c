/* unsafe.c */
/* This program has a buffer overflow vulnerability. */
/* Your task is to exploit this vulnerability */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define BUFFSIZE 80

void foofunc(char *str);
int copyfunc(char *str)
{
    char buffer[BUFFSIZE];

    /* The following statement has a buffer overflow problem */
    strcpy(buffer, str);

    return 1;
}

int main(int argc, char **argv)
{
    char str[527];
    FILE *inputfile;

    inputfile = fopen("inputfile", "r");
    fread(str, sizeof(char), 527, inputfile);
    foofunc(str);

    printf("%s\n", "Successfully returned.");
    return 0;
}
void foofunc(char *str)
{
        char foo_buffer[500];
        memset(foo_buffer, 0, 500);
        copyfunc(str);
}
