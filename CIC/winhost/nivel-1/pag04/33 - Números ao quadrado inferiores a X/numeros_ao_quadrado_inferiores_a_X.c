/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numeros_ao_quadrado_inferiores_a_X.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:43:57 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 13:45:29 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	num;
	int	i;

	scanf("%d", &num);
	i = 1;
	while (i * i < num)
	{
		printf("%d\n", i);
		i++;
	}
	return (0);
}
