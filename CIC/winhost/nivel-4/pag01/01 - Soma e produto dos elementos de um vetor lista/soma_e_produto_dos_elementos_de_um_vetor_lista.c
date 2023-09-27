/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soma_e_produto_dos_elementos_de_um_vetor_          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:43:33 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 19:46:14 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	n;
	int	list[100];
	int	soma;
	int	p;
	int	i;

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &list[i]);
		i++;
	}
	i = 0;
	soma = 0;
	p = 1;
	while (i < n)
	{
		soma += list[i];
		p *= list[i];
		i++;
	}
	printf("%d\n%d", soma, p);
	return (0);
}
