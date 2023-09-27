/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triangulo_de_informatica.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:41:38 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 20:43:39 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	k;

	scanf("%d", &n);
	i = -1;
	while (++i < n)
	{
		k = -1;
		while (++k < i + 1)
		{
			if (k < i)
				printf("INFORMATICA ");
			else if (k == i)
				printf("INFORMATICA");
		}
		printf("\n");
	}
	return (0);
}
