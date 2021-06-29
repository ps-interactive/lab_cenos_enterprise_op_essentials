#include <stdio.h>
#include <unistd.h>
int main () {
    printf("Hello world\n");
    display_uid();
    return 0;
}
void display_uid () {
    int real = getuid();
    int euid = geteuid();
    printf("Real: %d\n",real);
    printf("Effective: %d\n",euid);
}
