#include <unistd.h>

/**
 * _putchar- min entry 
 *
 * Return- success is always 0
 *
 */

int _putchar(char c)
{
	return(write(1, &c, 1));

}
