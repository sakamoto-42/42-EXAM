/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 15:28:39 by sakamoto-42       #+#    #+#             */
/*   Updated: 2025/01/01 15:50:29 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_count_words(char *s)
{
	size_t	word_count;

	word_count = 0;
	while (*s)
	{
		if ((*s != ' ' && *s != '\t') && (*(s + 1) == ' ' || *(s + 1) == '\t' || *(s + 1) == '\0'))
			word_count++;
		s++;
	}
	return (word_count);
}

char	*ft_get_word_end(char *s)
{
	while (*s && (*s != ' ' && *s != '\t'))
		s++;
	return (s);
}

char	*ft_extract_word(char *start, char *end)
{
	char	*word;
	char	*dst;

	word = (char *) malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	dst = word;
	while (start < end)
		*dst++ = *start++;
	*dst = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	size_t		word_count;
	char		**splitted_strs;
	size_t		i;
	char		*word_end;

	word_count = ft_count_words(str);
	splitted_strs = (char **) malloc((word_count + 1) * sizeof(char *));
	if (!splitted_strs)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		while (*str == ' ' || *str == '\t')
			str++;
		word_end = ft_get_word_end(str);
		splitted_strs[i] = ft_extract_word(str, word_end);
		if (!splitted_strs[i])
			return (NULL);
		str = word_end;
		i++;
	}
	splitted_strs[i] = NULL;
	return (splitted_strs);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	**strs;
	if (argc - 1 == 1)
	{
		strs = ft_split(argv[1]);
		while (*strs)
		{
			printf("%s\n", *strs);
			strs++;
		}
	}
}
*/
