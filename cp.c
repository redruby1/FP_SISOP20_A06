#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include "fs.h"

#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

int check(const *path) {
    FILE *fptr = fopen(path, "r");

    if (fptr == NULL)
        return 0;

    fclose(fptr);
    return 1;
}

int checkDir(char *path) { 
	struct dirent *dir;
	
	dir = readdir(opendir(path));
	if(dir->d_type == DT_DIR) {
		return 0; //dir
	}
	else return 1;
}

void copy(char *asal, char *tujuan) {
	if(check(asal)) {
		if(checkDir(asal)) {
			prinf("cp: omitting directory '%s'", asal);
			return;
		}
		else {
			//
		}
	}
	else {
		printf("cp: cannot stat, file doesn't exist'");
		return;
	}
}

void copy_rec(char *asal, char *tujuan) {
	//
}

int main(int argc, char *argv[]) {
	if(argc < 2) {
		printf("cp: missing file operand\n");
		return;
	}
	else if(argc < 3) {
		printf("cp: missing destination file operand after'%s'\n", argv[1]);
		return;
	}
	
	if(!strcmp(argv[1],'*')) {
		copy_rec(".", argv[2]);
	}
	else if(strcmp(argv[1],"-R")) {
		copy_rec(argv[2], argv[3]);
	}
	else {
		copy(argv[1], argv[2]);
	}
}
