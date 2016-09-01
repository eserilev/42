#include <stdio.h>

char 		**ft_split_whitespaces(char *str);
void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *str1, char*str2));

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}


int main(void)
{
	char *str = "what is this about son";
	char **test = ft_split_whitespaces(str);
	int i = 0;

	int	(*cmp)(char*,char*);
	cmp = &ft_strcmp;
	ft_advanced_sort_wordtab(test, cmp);
	while(test[i] != NULL)
		printf("%s\n", test[i++]);
}