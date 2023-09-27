/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contar_vogais.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:53:35 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 18:58:18 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	k;
	int	a, e, i, o, u;
	char	text[100];

	scanf(" %[^\n]s", text);
	a = e = i = o = u = 0;
	k = 0;
	while (text[k])
	{
		switch(toupper(text[k]))
		{
			case 'A':
				a++;
				break;
			case 'E':
				e++;
				break;
			case 'I':
				i++;
				break;
			case 'O':
				o++;
				break;
			case 'U':
				u++;
				break;
		}
		k++;
	}
	printf("%d %d %d %d %d", a, e, i, o, u);
	return (0);
}
