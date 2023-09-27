/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPAS2007-F7.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 09:09:13 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/23 09:47:38 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	atr_numbers(int numbers[13], int qnt[13])
{
	int	i;

	numbers[0] = 1000;
	numbers[1] = 900;
	numbers[2] = 500;
	numbers[3] = 400;
	numbers[4] = 100;
	numbers[5] = 90;
	numbers[6] = 50;
	numbers[7] = 40;
	numbers[8] = 10;
	numbers[9] = 9;
	numbers[10] = 5;
	numbers[11] = 4;
	numbers[12] = 1;
	i = -1;
	while (++i < 13)
		qnt[i] = 0;
}

void	atr_letters(char letters[13][3])
{
	strcpy(letters[0], "M");
	strcpy(letters[1], "CM");
	strcpy(letters[2], "D");
	strcpy(letters[3], "CD");
	strcpy(letters[4], "C");
	strcpy(letters[5], "XC");
	strcpy(letters[6], "L");
	strcpy(letters[7], "XL");
	strcpy(letters[8], "X");
	strcpy(letters[9], "IX");
	strcpy(letters[10], "V");
	strcpy(letters[11], "IV");
	strcpy(letters[12], "I");
}

void	romano(int num, int numbers[13], int qnt[13], char letters[13][3])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 13)
	{
		while (num >= numbers[i])
		{
			qnt[i]++;
			num -= numbers[i];
		}
	}
	i = -1;
	while (++i < 13)
	{
		j = -1;
		while (++j < qnt[i])
			printf("%s", letters[i]);
	}
}

int	main(void)
{
	char	letters[13][3];
	int		numbers[13];
	int		qnt[13];
	int		num;

	scanf("%d", &num);
	if (num >= 1 && num <= 4999)
	{
		atr_letters(letters);
		atr_numbers(numbers, qnt);
		romano(num, numbers, qnt, letters);
	}
	return (0);
}
