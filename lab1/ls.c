#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("This is my ls program\n");

/*
    uid_t uid = getuid();
    uid_t euid = geteuid();

    printf("UID is: %d\n", uid);
    printf("EUID is: %d\n", euid);
*/

    return 0;
}