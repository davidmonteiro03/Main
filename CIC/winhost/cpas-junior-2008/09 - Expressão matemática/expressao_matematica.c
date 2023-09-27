/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expressao_matematica.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:44:01 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 11:49:37 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	calculate(int a, int b, char c)
{
	if (c == '+')
		a += b;
	else if (c == '-')
		a -= b;
	else if (c == '/')
		a /= b;
	else if (c == '*')
		a *= b;
	return (a);
}

int	main(void)
{
	int		n;
	int		a;
	int		b;
	char	c;

	scanf("%d", &n);
	scanf("%d", &a);
	scanf(" %c", &c);
	while (c != '=')
	{
		scanf("%d", &b);
		a = calculate(a, b, c);
		scanf(" %c", &c);
	}
	if (a == n)
		printf("CERTO\n");
	else
		printf("ERRADO\n");
	return (0);
}
