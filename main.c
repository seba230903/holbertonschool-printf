#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int main(void)
{
	int len;
    	int len2;	

	len = _printf("Let's try to printf a simple sentence.\n");
 	   len2 = printf("Let's try to printf a simple sentence.\n");	
	_printf("%%\n");
   	 _printf("String:[%s]\n", "I am a string !");
	    printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	    len2 = printf("Percent:[%%]\n");
	
	return (0);
}
