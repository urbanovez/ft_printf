
#include "ft_printf.h"


int main()
{
	//const char *s ="hello \n %.5s=%010.5f", "value trash", 3,14158123456789);
	//const char* temp_main = s + 9;
	//printf("hello \n %-.5s=%010.5f", "value trash", 3.14158123456789);
	//ft_printf("vzlom %10s", "zhopy1");
	//printf("\n");
	// printf("vzlom %10s \n", "zhopy");
	//printf("vzlom %10s", "zhopy1");
	int i;
	//printf("\n %p", i);
	i = printf("Hello %s Hello", "Hello");
	printf("%d", i);
   // ft_printf("hello \n %5c", 'v');

    return 0;
}

