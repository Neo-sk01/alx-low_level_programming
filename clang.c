#include <stdio.h>

int main()


{  
	/* *ptr is the pointer and you use : %p and & to print it out
	 * the %d is pointing at x, the value of 9
	 *what is x: 0x16b957288 (if you use %p and &x)
	 *int *ptr = &x; declares a pointer variable ptr and assigns it the memory address of x.
	 *The printf function is used to print the memory address of x, stored in ptr, with the %p format specifier. (void*)ptr is used because %p expects a void pointer.
	 *ptr = &y; changes ptr to point to y instead of x.
	 */

	   


	int a;
	int *motheo;

	a = 10;
	motheo = &a;

	printf("a = %d\n", a);

	*motheo = 12;

	printf("a = %d\n ", a);


	


	return (0);




	}
