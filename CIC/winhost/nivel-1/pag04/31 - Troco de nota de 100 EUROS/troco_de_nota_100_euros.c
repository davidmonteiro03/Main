/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   troco_de_nota_100_euros.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:01:03 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/10 13:16:22 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double	x;
	int	aux;
	int	nota_100_euros = 0;
	int	nota_50_euros = 0;
	int	nota_20_euros = 0;
	int	nota_10_euros = 0;
	int	nota_5_euros = 0;
	int	moeda_2_euros = 0;
	int	moeda_1_euro = 0;
	int	moeda_50_cent = 0;
	int	moeda_20_cent = 0;
	int	moeda_10_cent = 0;
	int	moeda_5_cent = 0;
	int	moeda_2_cent = 0;
	int	moeda_1_cent = 0;

	scanf("%lf", &x);
	aux = 10000 - (int)(x * 100);
	while (aux >= 10000)
	{
		nota_100_euros++;
		aux -= 10000;
	}
	while (aux >= 5000)
	{
		nota_50_euros++;
		aux -= 5000;
	}
	while (aux >= 2000)
	{
		nota_20_euros++;
		aux -= 2000;
	}
	while (aux >= 1000)
	{
		nota_10_euros++;
		aux -= 1000;
	}
	while (aux >= 500)
	{
		nota_5_euros++;
		aux -= 500;
	}
	while (aux >= 200)
	{
		moeda_2_euros++;
		aux -= 200;
	}
	while (aux >= 100)
	{
		moeda_1_euro++;
		aux -= 100;
	}
	while (aux >= 50)
	{
		moeda_50_cent++;
		aux -= 50;
	}
	while (aux >= 20)
	{
		moeda_20_cent++;
		aux -= 20;
	}
	while (aux >= 10)
	{
		moeda_10_cent++;
		aux -= 10;
	}
	while (aux >= 5)
	{
		moeda_5_cent++;
		aux -= 5;
	}
	while (aux >= 2)
	{
		moeda_2_cent++;
		aux -= 2;
	}
	while (aux >= 1)
	{
		moeda_1_cent++;
		aux--;
	}
	printf("%dx100\n", nota_100_euros);
	printf("%dx50\n", nota_50_euros);
	printf("%dx20\n", nota_20_euros);
	printf("%dx10\n", nota_10_euros);
	printf("%dx5\n", nota_5_euros);
	printf("%dx2\n", moeda_2_euros);
	printf("%dx1\n", moeda_1_euro);
	printf("%dx0.5\n", moeda_50_cent);
	printf("%dx0.2\n", moeda_20_cent);
	printf("%dx0.1\n", moeda_10_cent);
	printf("%dx0.05\n", moeda_5_cent);
	printf("%dx0.02\n", moeda_2_cent);
	printf("%dx0.01\n", moeda_1_cent);
	return (0);
}
