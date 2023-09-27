/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corrida_de_caracois.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:41:25 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/20 14:50:47 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_res(int soma, int n, int som)
{
	if (soma == n && soma > som && som > -1)
		printf("GANHOU O CARACOL A\n");
	else if (som == n && som > soma && som > -1)
		printf("GANHOU O CARACOL B\n");
	else if (soma == som && soma == n)
		printf("EMPATE\n");
	else
		printf("ERRO NOS DADOS\n");
}

int	main(void)
{
	int	n;
	int	a;
	int	b;
	int	soma;
	int	som;

	scanf("%d", &n);
	scanf("%d", &a);
	scanf("%d", &b);
	if (a > n || b > n || a < 0 || b < 0)
		printf("ERRO NOS DADOS\n");
	else
	{
		soma = a;
		som = b;
		while (soma < n && som < n && soma > -1 && som > -1)
		{
			scanf("%d", &a);
			scanf("%d", &b);
			soma += a;
			som += b;
		}
		print_res(soma, n, som);
	}
	return (0);
}
