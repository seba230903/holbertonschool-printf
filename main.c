#include "main.h"
#include <stdarg.h>

int main(void)
{

	printf("%c\n", 'h');
	_printf("%c\n", 'h');
	printf("Let's try to printf a simple sentence.\n");
	_printf("Let's try to printf a simple sentence.\n");
	printf("String:[%s]\n", "I am a string !");
	_printf("String:[%s]\n", "I am a string !");
	return (0);
}
