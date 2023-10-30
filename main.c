#include "libft.h"


// int main (void)
// {
// int n = '_';
// if (ft_isalpha (n))
// 	printf ("%c is an alpha", n);
// else 
// 	printf ("%c is not an alpha", n);
// return (0);
// }

// int main(void)
// {	int n = '_';
// 	if (ft_isalnum (n))
// 		printf("%c is alphanumeric", n);
// 	else
// 		printf("%c is not alphanumber", n);
// }

// int main (void)
// {
// 	int n = '@';
// 	if (ft_isdigit(n))
// 		printf("%c Is a digit", n);
// 	else
// 		printf("%c Is not a digit", n);
// }

// int main (void)
// {
// int n = 0;
// 	if (ft_isprint(n))
// 		printf("%c is printable", n);
// 	else
// 		printf("%c is not printable", n);
// }

// int main(void)
// {
// 	char s[] = "four";

// 	printf(" The length of the string is %d \n", ft_strlen(s));
// }

// int main (void)
// {
// 	char c = '{';
// 	printf("%c", ft_toupper (c)); 
// }

// int main(void)
// {
// 	char c = '!';
// 	printf("%c", ft_tolower(c));
// }

int main (void)
{
const char s[] = "Smart";
int c = 'p';
printf("%s" ,ft_strchr(s, c));
return (0);
}