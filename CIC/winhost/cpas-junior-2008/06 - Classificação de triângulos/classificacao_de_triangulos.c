/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classificacao_de_triangulos.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:27:47 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 11:30:16 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	soma;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	soma = a + b + c;
	if (a > 0 && b > 0 && c > 0)
	{
		if (soma == 180)
		{
			printf("E TRIANGULO");
			if (a == 90 || b == 90 || c == 90)
				printf(" RETANGULO\n");
			else if (a > 90 || b > 90 || c > 90)
				printf(" OBTUSANGULO\n");
			else if (a < 90 && b < 90 && c < 90)
				printf(" ACUTANGULO\n");
		}
		else
			printf("NAO E TRIANGULO\n");
	}
	return (0);
}
