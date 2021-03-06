#include<stdio.h>
#include<stdlib.h>

void* __malloc(size_t sz, void* wasm_stack_base, void* wasm_stack_top);

int* array;

int main()
{
	void* stack_base;
	void* stack_top;
	array = (int*)__malloc(sizeof(int)*100, &stack_base, &stack_top);
	
	for (int i = 0; i < 100; i++) {
		array[i] = i;
	}
	
	printf("array: %p %d\n", array, array[10]);

	return 0;
}
