#include <stdio.h>

int func_one() {
	printf("This is function one\n");
	return 1;
}

int func_two() {
	printf("This is function two\n");
	return 2;
}

int func_three(char *nama) {
	printf("This is function three. Nama: %s\n", nama);
	return 3;
}

int main(int argc, char *argv[]) {
	int value;
	int (*function_ptr) ();

	function_ptr = func_one;
	printf("function_ptr is 0x%08x\n", function_ptr);
	value = function_ptr();
	printf("value returned was %d\n\n", value);

	function_ptr = func_two;
	printf("function_ptr is %p\n", function_ptr);
	value = function_ptr();
	printf("value returned was %d\n\n", value);

	const char *nama[1] = {"Megatron"};
	function_ptr = func_three;
	printf("function_ptr is %p\n", function_ptr);
	value = function_ptr(nama[0]);
	printf("value returned was %d\n\n", value);
}
