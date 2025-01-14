#include <stdio.h>
#include <string.h>

int main() {
    char long_buff[200];
    long_buff[0] = 0;
    stpcpy(long_buff, "Hi, this is Long!\n");
    fputs(long_buff, stdout);

    return 0;
}