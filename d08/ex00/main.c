#include <stdio.h>

char **ft_split_whitespaces(char *str);

int main(void)
{
	char *str = "what is this about son";
	char **test = ft_split_whitespaces(str);
	int i = 0;
	while(test[i] != NULL)
		printf("%s", test[i++]);
}