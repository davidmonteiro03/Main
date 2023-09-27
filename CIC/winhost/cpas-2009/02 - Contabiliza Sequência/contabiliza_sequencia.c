/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contabiliza_sequencia.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:15:16 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/23 16:28:11 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	i;
	int	n;
	int	tmp;
	int	soma;
	int	list[100];

	scanf("%d", &tmp);
	n = 0;
	while (tmp != 0)
	{
		list[n++] = tmp;
		scanf("%d", &tmp);
	}
	soma = 0;
	i = -1;
	while (++i < n - 1)
	{
		if (list[i] < list[i + 1])
			soma++;
		else if (list[i] != list[i + 1])
			soma--;
	}
	printf("%d\n", soma);
	return (0);
}
