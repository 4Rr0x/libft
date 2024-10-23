#include "libft.h"

bool	is_sep(char s, char sep)
{
	if (s == sep)
		return (true);
	return (false);
}

char	*sep_word(char const *s, int i, char c)
{
	char	*word;
	int		len;
	int		total;
	int		j;

	while (s[i] && !is_sep(s[i], c))
	{
		i++;
		len++;
	}
	total = len + i;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i -= len;
	j = 0;
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
	while (s[i])
	{
		while (s[i] && is_sep(s[i], c))
			i++;
		if (s[i] && !is_sep(s[i], c))
			arr[j++] = sep_word(s, i, c);
		while (!is_sep(s[i], c))
			i++;
	}
	arr[j] = 0;
	return (arr);
}
