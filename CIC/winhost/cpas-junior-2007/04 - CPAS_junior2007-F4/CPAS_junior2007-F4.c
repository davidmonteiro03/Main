/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS_junior2007-F4.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:14:30 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/14 18:14:31 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		i;
	double	vel_fer, vel_punto, pos_fer, pos_punto;

	scanf("%lf", &vel_fer);
	scanf("%lf", &vel_punto);
	scanf("%lf", &pos_punto);
	pos_fer = 0;
	i = 0;
	if (vel_punto >= vel_fer)
		return (0);
	while (pos_fer <= pos_punto)
	{
		pos_fer += vel_fer;
		pos_punto += vel_punto;
		i++;
	}
	printf("%d\n", i);
	return (0);
}
