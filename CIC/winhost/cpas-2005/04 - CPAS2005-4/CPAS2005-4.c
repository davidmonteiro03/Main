/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2005-4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:01:48 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 18:13:25 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	valid(char text[255])
{
	int	i;

	i = -1;
	while (++i < strlen(text))
		if (text[i] < '0' || text[i] > '9')
			return (0);
	return (1);
}

int	main(void)
{
	char	text[255];
	int		i;
	int		t;

	scanf(" %[^\n]s", text);
	if (valid(text))
	{
		i = -1;
		t = 1;
		while (++i < strlen(text))
		{
			if (text[i] == text[i + 1])
				t++;
			else
			{
				if (t > 1)
					printf("b%c%de", text[i], t);
				else
					printf("%c", text[i]);
				t = 1;
			}
		}
		printf("\n");
	}
	return (0);
}
