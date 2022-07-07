#include "main.h"
#include <stdarg.h>

int main(void)
{

	printf("cuarentay ocho %c\n", '%');
	_printf("cuatro y ocho%s\n", "48");
	printf("Let's try to printf a simple sentence. %%\n");
	_printf("Let's try to printf a simple sentence.\n");
	printf("String:[%s]\n", "I am a string !");
	_printf("String:[%s]\n", "I am a string !");
	_printf("%%\n");
	return (0);
}
