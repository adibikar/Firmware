#include <stdio.h>

void main() {
	char *name[2];

	name[0]="/bin/bash/";
	name[1]=NULL;
	execve(name[0], name, NULL);
}
