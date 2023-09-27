/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extenso.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:18:08 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/23 18:43:18 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	atr_cent(char centenas[11][100])
{
	strcpy(centenas[0], "cento");
	strcpy(centenas[1], "duzentos");
	strcpy(centenas[2], "trezentos");
	strcpy(centenas[3], "quatrocentos");
	strcpy(centenas[4], "quinhentos");
	strcpy(centenas[5], "seiscentos");
	strcpy(centenas[6], "setecentos");
	strcpy(centenas[7], "oitocentos");
	strcpy(centenas[8], "novecentos");
}

void	atr_dez(char dezenas[11][100])
{
	strcpy(dezenas[0], "dez");
	strcpy(dezenas[1], "vinte");
	strcpy(dezenas[2], "trinta");
	strcpy(dezenas[3], "quarenta");
	strcpy(dezenas[4], "cinquenta");
	strcpy(dezenas[5], "sessenta");
	strcpy(dezenas[6], "setenta");
	strcpy(dezenas[7], "oitenta");
	strcpy(dezenas[8], "noventa");
}

void	atr_oth(char others[21][100])
{
	strcpy(others[0], "zero");
	strcpy(others[1], "um");
	strcpy(others[2], "dois");
	strcpy(others[3], "tres");
	strcpy(others[4], "quatro");
	strcpy(others[5], "cinco");
	strcpy(others[6], "seis");
	strcpy(others[7], "sete");
	strcpy(others[8], "oito");
	strcpy(others[9], "nove");
	strcpy(others[10], "dez");
	strcpy(others[11], "onze");
	strcpy(others[12], "doze");
	strcpy(others[13], "treze");
	strcpy(others[14], "catorze");
	strcpy(others[15], "quinze");
	strcpy(others[16], "dezasseis");
	strcpy(others[17], "dezassete");
	strcpy(others[18], "dezoito");
	strcpy(others[19], "dezanove");
}

int	main(void)
{
	char	centenas[11][100];
	char	dezenas[11][100];
	char	others[21][100];
	int		u;
	int		d;
	int		c;
	int		num;

	scanf("%d", &num);
	if (num >= 0 && num <= 999)
	{
		atr_cent(centenas);
		atr_dez(dezenas);
		atr_oth(others);
		c = num / 100;
		d = num % 100 / 10;
		u = num % 10;
		if (c != 0)
		{
			if (d != 0 || u != 0)
				printf("%s e ", centenas[c - 1]);
			else if (c != 1)
				printf("%s", centenas[c - 1]);
			else
			{
				printf("cem\n");
				return (0);
			}
		}
		if (d > 1)
		{
			printf("%s", dezenas[d - 1]);
			if (u != 0)
				printf(" e %s", others[u]);
		}
		if (d <= 1)
			printf("%s", others[d * 10 + u]);
		printf("\n");
	}
	return (0);
}
