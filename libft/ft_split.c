#include "libft.h"

static	char	**ft_free(char **strs, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		++i;
	}
	free(strs);
	return (0);
}

bool	is_sep(char s, char sep)
{
	if (s == sep)
		return (true);
	return (false);
}

char	*sep_word(char const *s, int i, char c)
{
	char	*word;
	int		total;
	int		len;
	int		j;

	len = 0;
	while (s[i] && !is_sep(s[i], c))
	{
		i++;
		len++;
	}
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i -= len;
	j = 0;
	total = i + len;
	while (i < total)
	{
		word[j] = s[i];
		i++;
		j++;
	}
	word[j] = '\0';
	return (word);
}

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && is_sep(s[i], c))
			i++;
		if (s[i] && !is_sep(s[i], c))
		{
			i++;
			count++;
		}
		while (s[i] && !is_sep(s[i], c))
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		count;

	if (!s)
		return (NULL);
	i = 0;
	count = count_words(s, c);
	arr = (char **)malloc(sizeof(char *) * (count + 1));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && is_sep(s[i], c))
			i++;
		if (s[i] && !is_sep(s[i], c))
		{
			arr[j] = sep_word(s, i, c);
			if (!arr[j])
			{
				ft_free(arr, j);
				return (NULL);
			}
			j++;
		}
		while (s[i] && !is_sep(s[i], c))
			i++;
	}
	arr[j] = 0;
	return (arr);
}
/*
int main(int argc, char *argv[])
{
	char **strs;
	char *str;
	char c;
	size_t i;
	
	if (argc != 3)
	{
		printf("Usage: %s <string> <char>\n", argv[0]);
		return (1);
	}
	str = argv[1];
	c = argv[2][0];
	strs = ft_split(str, c);
	
	// Test 
	printf("ft_split(\"%s\", '%s') =\n{", argv[1], argv[2]); 
	i = 0;
	while (strs[i])
	{
		printf("\n\t\"%s\"", strs[i]);
		i++;
	}
	printf("\n}\n");

	// Free Memory 
	free(strs);
	return (0);
}*/
