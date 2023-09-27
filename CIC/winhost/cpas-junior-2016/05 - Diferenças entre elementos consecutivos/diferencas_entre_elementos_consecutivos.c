/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diferencas_entre_elementos_consecutivos.c          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:44:43 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 20:46:34 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	i;
	int	n;
	int	a[100];

	scanf("%d", &n);
	i = 0;
	while (++i <= n)
		scanf("%d", &a[i]);
	i = 0;
	while (++i <= n)
		if (i > 1)
			printf("%d\n", a[i] - a[i - 1]);
	return (0);
}
