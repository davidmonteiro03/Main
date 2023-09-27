/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2007-F6.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:41:39 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/23 09:07:48 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	validacao1(char text[50])
{
	int	i;

	i = -1;
	while (++i < strlen(text))
		if (!((text[i] >= '0' && text[i] <= '9') || \
			(text[i] >= 'A' && text[i] <= 'Z')))
			return (0);
	return (1);
}

int	validacao2(char text[50])
{
	int	i;

	i = -1;
	while (++i < strlen(text))
		if (text[i] >= '0' && text[i] <= '9' && \
			text[i + 1] >= '0' && text[i + 1] <= '9')
			return (0);
	return (1);
}

int	main(void)
{
	int		n;
	int		i;
	int		j;
	int		k;
	int		flag;
	char	tmp[50];
	char	list[100][50];

	scanf(" %[^\n]s", tmp);
	n = 0;
	while (strcmp(tmp, "#") != 0)
	{
		if (validacao1(tmp) && validacao2(tmp))
			strcpy(list[n++], tmp);
		scanf(" %[^\n]s", tmp);
	}
	i = -1;
	while (++i < n)
	{
		flag = 0;
		j = -1;
		while (++j < strlen(list[i]))
		{
			if (list[i][j] >= '0' && list[i][j] <= '9' && list[i][j + 1])
			{
				k = -1;
				while (++k < list[i][j] - 48)
				{
					flag = 1;
					printf("%c", list[i][j + 1]);
				}
			}
			else if (!(list[i][j] >= '0' && list[i][j] <= '9') && !(list[i][j - 1] >= '0' && list[i][j - 1] <= '9'))
			{
				flag = 1;
				printf("%c", list[i][j]);
			}
		}
		if (flag == 1)
			printf("\n");
	}
	return (0);
}
