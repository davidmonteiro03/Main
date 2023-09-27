/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caracteres_por_ordem.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:09:54 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 19:22:38 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ordem(char *str)
{
	char	aux[100];
	int		oco[100];
	int		i;
	int		j;
	int		k;
	int		l;
	int		p;
	int		t;
	int		flag;

	k = 0;
	i = -1;
	while (++i < strlen(str))
	{
		t = 1;
		j = -1;
		while (++j < strlen(str))
		{
			if (i != j && str[i] == str[j])
				t++;
		}
		if (str[i] != ' ')
		{
			aux[k] = str[i];
			oco[k++] = t;
		}
	}
	i = -1;
	while (++i < k)
	{
		flag = 0;
		l = -1;
		while (++l < i)
		{
			if (i != l && aux[i] == aux[l])
				flag = 1;
		}
		if (flag != 1)
		{
			p = -1;
			while (++p < oco[i])
				printf("%c", aux[i]);
		}
	}
	printf("\n");
}

int	main(void)
{
	int		i;
	int		n;
	char	texts[100][100];

	scanf("%d", &n);
	i = -1;
	while (++i < n)
		scanf(" %[^\n]s", texts[i]);
	i = -1;
	while (++i < n)
		ordem(texts[i]);
	return (0);
}
