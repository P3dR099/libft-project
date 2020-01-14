#include "libft.h"
#include <stdio.h>

int ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return(1);
	return(0);
}

int main()
{
   char cadena[] = ";i8sR(h&R1/";
   int i;

   for(i = 0; cadena[i]; i++)
      printf("%c, %d\n", cadena[i], ft_isalnum(cadena[i]));
}
