#include <stdio.h>

int main(int argc, char *argv[]){
    int i = 0;
    char *states[4];
    while(i < argc && i < 4){
	states[i] = argv[i];
	i++;
    }
    i = 0;

    while(i < 4){
	printf("state %d: %s\n", i, states[i]);
	if(i == 2){
	    break;
	}
	i++;
    }

    return 0;
}
