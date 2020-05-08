#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include "fs.h"

#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

void path() {
	char cwd[1000];
	
	if(getcwd(cwd, sizeof(cwd)) != NULL) {
		printf("%s\n", cwd);
		return;
	}
}

int main(int argc, char *argv[]) {
	int L = 0;
	
	if(!strcmp(argv[1], "-L") || !strcmp(argv[1], "-P")) {
		L = 1;
	}
	else {
		L = 1;
	}
	
	if(L) {
		path();
	}
	else {
		return;
	}
}
