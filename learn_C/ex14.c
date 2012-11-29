#include <stdio.h>
#include <ctype.h>
#include <string.h>

void print_letters(char arg[], int length);

void print_arguments(int argc, char *argv[]){
    int i = 0;
    int length;
    for(i = 0; i < argc; i++){
	length = strlen(argv[i]);
	print_letters(argv[i], length);
    }
}

void print_letters(char arg[], int length){
    int i = 0;
    for(i = 0; i < length; i++){
	char ch = arg[i];
	if(isdigit(ch)){
	    printf("'%c' == %d ", ch, ch);
	}
    }
    printf("\n");
}

int main(int argc, char *argv[]){
    print_arguments(argc, argv);
    return 0;
}
