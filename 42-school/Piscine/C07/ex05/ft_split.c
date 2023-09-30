/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:58:54 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/30 17:00:19 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_whtspc(char *str, char c)
{
	while (*str)
		if (*(str++) == c)
			return (1);
	return (0);
}

char	*ft_strncpy(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int	ft_words(char *str, char *charset)
{
	int	i;
	int	wc;

	i = 0;
	wc = 0;
	while (str[i])
	{
		while (str[i] && ft_whtspc(charset, str[i]) == 1)
			i++;
		if (str[i])
			wc++;
		while (str[i] && ft_whtspc(charset, str[i]) == 0)
			i++;
	}
	return (wc);
}

void	ft_break(char *str, char **out, char *charset)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] && ft_whtspc(charset, str[i]) == 1)
			i++;
		j = i;
		while (str[i] && ft_whtspc(charset, str[i]) == 0)
			i++;
		if (i > j)
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(out[k++], &str[j], i - j);
		}
	}
	out[k] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	char	**out;
	int		wc;

	wc = ft_words(str, charset);
	out = (char **)malloc(sizeof(char *) * (wc + 1));
	ft_break(str, out, charset);
	return (out);
}
/*
int	main(void)
{
	char	**mat;
	char	*text;
	char	*charset;
	int		i;

	text = "Ola, dfhksdf, mnsdfgs, dgfd, g, dfg, fd, gd";
	charset = ", ";
	mat = ft_split(text, charset);
	i = -1;
	while (mat[++i])
		printf("%s\n", mat[i]);
	return (0);
}
*/
