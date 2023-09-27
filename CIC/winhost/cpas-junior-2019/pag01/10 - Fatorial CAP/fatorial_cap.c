/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fatorial_cap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:45:57 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 16:48:23 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		a[100];
	int		i;
	int		j;
	double	n;
	double	p;

	scanf("%lf", &n);
	i = 0;
	while (++i <= n)
		scanf("%d", &a[i]);
	i = 0;
	while (++i <= n)
	{
		p = 1;
		j = 0;
		while (++j <= a[i])
			p *= j;
		printf("%.0lf\n", p);
	}
	return (0);
}
