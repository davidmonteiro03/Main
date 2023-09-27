/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cubos_digitos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:17:04 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 19:22:37 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	main(void)
{
	int	n;
	int	aux;
	int	soma;

	scanf("%d", &n);
	soma = 0;
	aux = n;
	while (n > 0)
	{
		soma += pow(n % 10, 3);
		n /= 10;
	}
	if (soma == aux)
		printf("VERDADEIRO");
	else
		printf("FALSO");
	return (0);
}
