#include <stdio.h>      /* printf */
#include <setjmp.h>     /* jmp_buf, setjmp, longjmp */
#include <conio.h>

/*
	Source by CPlusPlus
	Modified For Learn by RK
	I.D.E : VS2019
*/

main() {
	jmp_buf env;
	int val;

	val = setjmp(env);

	printf("val is %d\n", val);

	if (!val) {
		longjmp(env, 1);
	}

	_getch();
	return 0;
}