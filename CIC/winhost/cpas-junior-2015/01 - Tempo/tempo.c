/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tempo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:51:58 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 17:53:10 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double	a;
	double	b;
	double	kbytes;
	double	vel;

	scanf("%lf", &a);
	scanf("%lf", &b);
	kbytes = a * 1000;
	vel = kbytes / b;
	printf("%.2lf\n", vel);
	return (0);
}
