#include <stdio.h>

int main(int argc, char *argv[]){
    int i = 0;

    char *states[] = {"California", "Oregon", "Washington", "Texas", NULL};
    int num_states = 5;
    for(i = 0;i < num_states; i++){
	states[i] = argv[i];
    }

    for(i = 0; i < num_states; i++){
	printf("state %d: %s\n", i, states[i]);
        if(i == 2){
	    break;
	}
    }

    return 0;
}
