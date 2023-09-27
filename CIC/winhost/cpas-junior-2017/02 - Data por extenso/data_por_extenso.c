/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_por_extenso.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:24:57 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 10:56:33 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	digitos(int num, int dig[8])
{
	int	d;
	int	aux;

	d = 1;
	aux = num;
	dig[0] = num % 10;
	num /= 10;
	while (num > 0)
	{
		d++;
		dig[d - 1] = num % 10;
		num /= 10;
	}
	num = aux;
	return (d);
}

void	invert_lst(int dig[8])
{
	int	i;
	int	tmp;

	i = -1;
	while (++i < 4)
	{
		tmp = dig[i];
		dig[i] = dig[7 - i];
		dig[7 - i] = tmp;
	}
}

void	atr_dias(int meses[12], int dias_fev)
{
	meses[0] = 31;
	meses[1] = dias_fev;
	meses[2] = 31;
	meses[3] = 30;
	meses[4] = 31;
	meses[5] = 30;
	meses[6] = 31;
	meses[7] = 31;
	meses[8] = 30;
	meses[9] = 31;
	meses[10] = 30;
	meses[11] = 31;
}

void	atr_months(char months[12][100])
{
	strcpy(months[0], "janeiro");
	strcpy(months[1], "fevereiro");
	strcpy(months[2], "marco");
	strcpy(months[3], "abril");
	strcpy(months[4], "maio");
	strcpy(months[5], "junho");
	strcpy(months[6], "julho");
	strcpy(months[7], "agosto");
	strcpy(months[8], "setembro");
	strcpy(months[9], "outubro");
	strcpy(months[10], "novembro");
	strcpy(months[11], "dezembro");
}

void	extenso(char dias_ext[31][100])
{
	strcpy(dias_ext[0], "um");
	strcpy(dias_ext[1], "dois");
	strcpy(dias_ext[2], "tres");
	strcpy(dias_ext[3], "quatro");
	strcpy(dias_ext[4], "cinco");
	strcpy(dias_ext[5], "seis");
	strcpy(dias_ext[6], "sete");
	strcpy(dias_ext[7], "oito");
	strcpy(dias_ext[8], "nove");
	strcpy(dias_ext[9], "dez");
	strcpy(dias_ext[10], "onze");
	strcpy(dias_ext[11], "doze");
	strcpy(dias_ext[12], "treze");
	strcpy(dias_ext[13], "catorze");
	strcpy(dias_ext[14], "quinze");
	strcpy(dias_ext[15], "dezasseis");
	strcpy(dias_ext[16], "dezassete");
	strcpy(dias_ext[17], "dezoito");
	strcpy(dias_ext[18], "dezanove");
	strcpy(dias_ext[19], "vinte");
	strcpy(dias_ext[20], "vinte e um");
	strcpy(dias_ext[21], "vinte e dois");
	strcpy(dias_ext[22], "vinte e tres");
	strcpy(dias_ext[23], "vinte e quatro");
	strcpy(dias_ext[24], "vinte e cinco");
	strcpy(dias_ext[25], "vinte e seis");
	strcpy(dias_ext[26], "vinte e sete");
	strcpy(dias_ext[27], "vinte e oito");
	strcpy(dias_ext[28], "vinte e nove");
	strcpy(dias_ext[29], "trinta");
	strcpy(dias_ext[30], "trinta e um");
}

int	main(void)
{
	int		i;
	int		ano;
	int		mes;
	int		dia;
	int		data;
	int		dig[8];
	int		dias_fev;
	int		meses[12];
	char	months[12][100];
	char	dias_ext[31][100];

	scanf("%d", &data);
	digitos(data, dig);
	if (digitos(data, dig) == 8)
	{
		invert_lst(dig);
		i = 0;
		ano = 0;
		mes = 0;
		dia = 0;
		while (i < 4)
			ano = ano * 10 + dig[i++];
		while (i < 6)
			mes = mes * 10 + dig[i++];
		while (i < 8)
			dia = dia * 10 + dig[i++];
		if (ano % 400 == 0)
			dias_fev = 29;
		else if (ano % 4 == 0 && ano % 100 != 0)
			dias_fev = 29;
		else
			dias_fev = 28;
		atr_dias(meses, dias_fev);
		atr_months(months);
		extenso(dias_ext);
		if (ano > 1 && mes >= 1 && mes <= 12 && dia >= 1 && dia <= meses[mes - 1])
			printf("%s-%s-%d", dias_ext[dia - 1], months[mes - 1], ano);
	}
	printf("\n");
	return (0);
}
