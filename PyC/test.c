/*
Compile with:
$ gcc -shared -fPIC -o lib.so test.c

*/
#include <stdio.h>
#include <wchar.h>

void test_print(void){
	printf("C inside Python :)\n");
}

int add(int a, int b){
	return a + b;
}

void cprint(const char* str){
	printf("%s\n", str);
}

void print_unicode(const wchar_t* ustr){
	printf("%ls\n", ustr);
}

/* define a structure that will be passed from python */
struct PyStruct {
	const char* str;
	int num;
};

/* Unpack a structure passed in from python */
void show_struct(const struct PyStruct* s){
	printf("%s %d\n", s->str, s->num);
}


