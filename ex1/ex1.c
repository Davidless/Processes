// Write a program that calls `fork()`. Before calling `fork()`, have the main process access a variable
// (e.g., x) and set its value to something (e.g., 100). What value is the variable in the child process?
// What happens to the variable when both the child and parent change the value of x?

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    // Your code here
    int x = 10;
    int rc = fork();
    if(rc < 0 {

        fprintf(stderr, "fork fail\n");
        exit(1);
    }) else if (rc == 0) {
        x = 5;
        printf("child value %d\n", x);
    } else {
        x = 1;
        printf("child value %d\n", x);
    }

    return 0;
}
