#include <stdio.h>

char **ft_split_whitespaces(char *str);
void	ft_sort_wordtab(char **tab);


int main(void)
{
	char *str = "what is this about son";
	char **test = ft_split_whitespaces(str);
	int i = 0;
	ft_sort_wordtab(test);
	while(test[i] != NULL)
		printf("%s\n", test[i++]);
}