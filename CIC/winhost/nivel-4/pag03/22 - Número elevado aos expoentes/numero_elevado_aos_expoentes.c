/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numero_elevado_aos_expoentes.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:28:55 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/11 11:33:37 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	main(void)
{
	int	n;
	int	i;
	int	expoente;

	scanf("%d", &n);
	scanf("%d", &expoente);
	if (n > 0 && n < 10 && expoente > 0)
	{
		i = 1;
		while (i <= expoente)
		{
			printf("%d\n", (int)pow(n, i));
			i++;
		}
	}
	return (0);
}
