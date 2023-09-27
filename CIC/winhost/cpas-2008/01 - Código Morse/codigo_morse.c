/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   codigo_morse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:07:00 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/23 10:09:08 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	c[100];
	int		i;

	scanf("%s", &c);
	i = -1;
	while (++i < strlen(c))
	{
		switch(c[i])
		{
			case '0':printf("-----");break ;
			case '1':printf(".----");break ;
			case '2':printf("..---");break ;
			case '3':printf("...--");break ;
			case '4':printf("....-");break ;
			case '5':printf(".....");break ;
			case '6':printf("-....");break ;
			case '7':printf("--...");break ;
			case '8':printf("---..");break ;
			case '9':printf("----.");break ;
		}
	}
	return (0);
}
