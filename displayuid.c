#include <unistd.h>
#include <stdio.h>
void display_uid () {
	int real = getuid();
	int euid = geteuid();
	printf("The REAL UID =: %d\n", real);
	printf("The EFFECTIVE UID =: %d\n", euid);
}
