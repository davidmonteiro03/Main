/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculadora_basica.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:10:48 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 18:22:33 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a, b;
	char	op;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf(" %c", &op);
	switch(op)
	{
		case '+':
			printf("%.2lf", (double)(a + b));
			break;
		case '-':
			printf("%.2lf", (double)(a - b));
			break;
		case '*':
			printf("%.2lf", (double)(a * b));
			break;
		case '/':
			printf("%.2lf", (double)(a / b));
			break;
	}
	return (0);
}
