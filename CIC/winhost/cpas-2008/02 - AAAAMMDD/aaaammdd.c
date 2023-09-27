/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aaaammdd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:10:18 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/23 10:22:53 by Dcaetano         ###   ########.fr       */
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
	strcpy(months[0], "JANEIRO");
	strcpy(months[1], "FEVEREIRO");
	strcpy(months[2], "MARCO");
	strcpy(months[3], "ABRIL");
	strcpy(months[4], "MAIO");
	strcpy(months[5], "JUNHO");
	strcpy(months[6], "JULHO");
	strcpy(months[7], "AGOSTO");
	strcpy(months[8], "SETEMBRO");
	strcpy(months[9], "OUTUBRO");
	strcpy(months[10], "NOVEMBRO");
	strcpy(months[11], "DEZEMBRO");
}

int	main(void)
{
	int		i;
	int		n;
	int		t;
	int		ano;
	int		mes;
	int		dia;
	int		data[100];
	int		dig[8];
	int		dias_fev;
	int		meses[12];
	char	months[12][100];

	scanf("%d", &n);
	t = -1;
	while (++t < n)
		scanf("%d", &data[t]);
	t = -1;
	while (++t < n)
	{
		digitos(data[t], dig);
		if (digitos(data[t], dig) == 8)
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
			if (ano > 1 && mes >= 1 && mes <= 12 && dia >= 1 && dia <= meses[mes - 1])
			{
				if (dia < 10)
					printf("0");
				printf("%d DE %s DE ", dia, months[mes - 1]);
				if (ano % 100 < 10)
					printf("0");
				printf("%d", ano % 100);
			}
			printf("\n");
		}
	}
	return (0);
}
