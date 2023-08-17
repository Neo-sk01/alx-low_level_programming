#include <stdio.h>



int main()

{

	int a = 55;

	int *p; 
	
	p = &a;

	printf("what is the value of a:  %d\n", a);
	
	/*what is the value of the address at a: 5*/

	printf("what is the value pointing at a (*p/d used): %d\n", *p);

	printf("what is the address of a: %p\n", p); //0x16aefb22c



	


}
