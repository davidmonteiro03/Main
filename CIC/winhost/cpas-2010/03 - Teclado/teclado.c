/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teclado.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 19:32:58 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/23 19:42:16 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	valid(char text[101])
{
	int	i;

	i = -1;
	while (++i < strlen(text))
		if (text[i] < 'a' || text[i] > 'z')
			return (0);
	return (1);
}

void	atr_teclas(char teclas[8][5])
{
	strcpy(teclas[0], "abc");
	strcpy(teclas[1], "def");
	strcpy(teclas[2], "ghi");
	strcpy(teclas[3], "jkl");
	strcpy(teclas[4], "mno");
	strcpy(teclas[5], "pqrs");
	strcpy(teclas[6], "tuv");
	strcpy(teclas[7], "wxyz");
}

int	main(void)
{
	int		i;
	int		j;
	int		k;
	char	text[101];
	char	teclas[8][5];

	scanf(" %[^\n]s", text);
	if (valid(text) && strlen(text) > 0 && strlen(text) <= 100)
	{
		atr_teclas(teclas);
		i = -1;
		while (++i < strlen(text))
		{
			j = -1;
			while (++j < 8)
			{
				k = -1;
				while (++k < strlen(teclas[j]))
				{
					if (text[i] == teclas[j][k])
						printf("T%d#%d\n", j + 2, k + 1);
				}
			}
		}
	}
	return (0);
}
