#include <stdio.h>
#include "libft.h"
char *ft_strchr(const char *s, int c)
{
	int i;
	i = 0;
	while(s[i] && s[i] != c)
		i++;
	if (s[i] == c)
		return((char *)s + i);
	return(NULL);
}
int main()
{
	char s[11] = "Hola amigos";
   char c = 'a';

   printf( "s=%s\t", s );
   printf( "c=%c\n", c );
   printf( "strchr=%s\n", strchr( s, c ) );
   printf( "\nft=strchr=%s\n", ft_strchr( s, c ) );

   return 0;
}
