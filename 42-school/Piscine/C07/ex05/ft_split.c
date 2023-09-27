/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:58:54 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 15:49:39 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_whtspc(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
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

void	ft_words(char *str, int wc)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && ft_whtspc(str[i]) == 1)
			i++;
		if (str[i])
			wc++;
		while (str[i] && ft_whtspc(str[i]) == 0)
			i++;
	}
}

void	ft_break(char *str, char **out)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] && ft_whtspc(str[i]) == 1)
			i++;
		j = i;
		while (str[i] && ft_whtspc(str[i]) == 0)
			i++;
		if (i > j)
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(out[k++], &str[j], i - j);
		}
	}
	out[k] = NULL;
}

char	**ft_split(char *str)
{
	char	**out;
	int		wc;

	ft_words(str, wc);
	out = (char **)malloc(sizeof(char *) * (wc + 1));
	ft_break(str, out);
	return (out);
}
/*
int	main(void)
{
	char	**mat;
	char	*text;
	int		i;

	text = "Ola dfhksdf mnsdfgs dgfd g dfg fd gd";
	i = 0;
	mat = ft_split(text);
	while (i < g_count)
		printf("%s\n", mat[i++]);
	return (0);
}*/
