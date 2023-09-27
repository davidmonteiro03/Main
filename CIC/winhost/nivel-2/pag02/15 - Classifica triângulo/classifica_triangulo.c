/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classifica_triangulo.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:47:26 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 17:59:57 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	if (a < (b + c) && b < (a + c) && c < (a + b))
	{
		if (a > b && a > c)
		{
			printf ("Triangulo");
			if (a * a == b * b + c * c)
				printf(" retangulo");
			else if (a * a < b * b + c * c)
				printf(" acutangulo");
			else if (a * a > b * b + c * c)
			       printf(" obtusangulo");	
		}
	}
	else
		printf("Nao se forma triangulo");
	return (0);
}
