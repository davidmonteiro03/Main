/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quadrado.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:29:56 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/23 17:46:54 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 1024

void	to_lower(char str[MAX])
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
}

int	valid_chrs(char str[MAX])
{
	int	i;

	i = -1;
	while (++i < strlen(str))
		if ((str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || \
			str[i] > 'z') && str[i] != '-')
			return (0);
	return (1);
}

int	main(void)
{
	char	key[MAX][MAX];
	char	text[MAX][MAX];
	char	tmp[MAX];
	int		i;
	int		j;
	int		k;
	int		l;
	int		flag;
	int		n1;
	int		n2;
	int		valid;
	int		count[100];

	scanf("%d", &n1);
	valid = 0;
	i = -1;
	while (++i < n1)
	{
		scanf(" %[^\n]s", key[i]);
		if (valid_chrs(key[i]) && strlen(key[i]) <= 100)
			valid++;
	}
	i = -1;
	while (++i < n1)
		count[i] = 0;
	scanf("%d", &n2);
	i = -1;
	while (++i < n2)
	{
		scanf(" %[^\n]s", text[i]);
		if (strlen(text[i]) <= 100)
			valid++;
	}
	if (n1 >= 1 && n1 <= 20 && n2 >= 1 && n2 <= 50 && valid == n1 + n2)
	{
		i = -1;
		while (++i < n2)
		{
			j = -1;
			while (++j < n1)
			{
				k = -1;
				while (++k < strlen(text[i]) - strlen(key[j]) + 1)
				{
					flag = 0;
					l = -1;
					while (++l < strlen(key[j]))
						if (tolower(text[i][k + l]) != tolower(key[j][l]))
							flag = 1;
					if (flag == 0)
						count[j]++;
				}
			}
		}
		i = -1;
		while (++i < n1)
		{
			to_lower(key[i]);
			printf("%s-%d\n", key[i], count[i]);
		}
	}
	return (0);
}
