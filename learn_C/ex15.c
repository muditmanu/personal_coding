#include <stdio.h>

void print_name_age_array(int count, char **names, int *ages);
void print_name_age_pointer_normal(int count, char **cur_name, int *cur_age);
void print_name_age_pointer_array(int count, char **cur_name, int *cur_age);
void print_name_age_pointer_different(int count, char **cur_name, int *cur_age, int *ages);

void print_name_age_array(int count, char **names, int *ages){
    int i = 0;
    for(i = 0; i < count; i++){
	printf("%s has %d years alive.\n", names[i], ages[i]);
    }
    printf("---\n");
}

void print_name_age_pointer_normal(int count, char **cur_name, int *cur_age){
    int i = 0;
    for(i = 0; i < count; i++){
	printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
    }
    printf("---\n");
}

void print_name_age_pointer_array(int count, char **cur_name, int *cur_age){
    int i = 0;
    for(i = 0; i < count; i++){
	printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
    }
    printf("---\n");
}

void print_name_age_pointer_different(int count, char **cur_name, int *cur_age, int *ages){
    for(;(cur_age - ages) < count; cur_name++, cur_age++){
	printf("%s lived %d years so far.\n", *cur_name, *cur_age);
    }
    printf("---\n");
}

int main(int argc, char *argv[]){
    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};

    int count = sizeof(ages) / sizeof(int);
    int *cur_age = ages;
    char **cur_name = names;
    print_name_age_array(count, names, ages);
    print_name_age_pointer_normal(count, cur_name, cur_age);
    print_name_age_pointer_array(count, cur_name, cur_age);
    print_name_age_pointer_different(count, cur_name, cur_age, ages);

    return 0;
}
