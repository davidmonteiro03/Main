/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   password_valida_e_forte.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:44:45 by Dcaetano          #+#    #+#             */
/*   Updated: 2023/09/22 15:03:08 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	validacao1(char pass[100])
{
	if (strlen(pass) < 8 || strlen(pass) > 12)
		return (0);
	return (1);
}

int	validacao2(char pass[100])
{
	int	i;

	i = -1;
	while (++i < strlen(pass))
		if (pass[i] >= '0' && pass[i] <= '9')
			return (1);
	return (0);
}

int	validacao3(char pass[100])
{
	int	i;

	i = -1;
	while (++i < strlen(pass))
		if ((pass[i] >= 'A' && pass[i] <= 'Z') || \
			(pass[i] >= 'a' && pass[i] <= 'z'))
			return (1);
	return (0);
}

int	validacao4(char pass[100])
{
	int	i;

	i = -1;
	while (++i < strlen(pass))
		if ((pass[i] >= 'A' && pass[i] <= 'Z'))
			return (1);
	return (0);
}

int	validacao5(char pass[100])
{
	int	i;

	i = -1;
	while (++i < strlen(pass))
		if (!((pass[i] >= '0' && pass[i] <= '9') || \
			(pass[i] >= 'A' && pass[i] <= 'Z') || \
			(pass[i] >= 'a' && pass[i] <= 'z')))
			return (1);
	return (0);
}

int	validacao6(char pass[100])
{
	int	i;

	i = -1;
	while (++i < strlen(pass))
		if (pass[i] == ' ')
			return (0);
	return (1);
}

int	validacao7(char pass[100])
{
	if (pass[0] >= '0' && pass[0] <= '9')
		return (0);
	return (1);
}

void	atr_val(int validacoes[7], char pass[100])
{
	validacoes[0] = validacao1(pass);
	validacoes[1] = validacao2(pass);
	validacoes[2] = validacao3(pass);
	validacoes[3] = validacao4(pass);
	validacoes[4] = validacao5(pass);
	validacoes[5] = validacao6(pass);
	validacoes[6] = validacao7(pass);
}

int	main(void)
{
	int		validacoes[7];
	int		i;
	int		valid;
	char	pass[100];

	scanf(" %[^\n]s", pass);
	atr_val(validacoes, pass);
	valid = 0;
	i = -1;
	while (++i < 7)
		if (validacoes[i])
			valid++;
	if (valid == 7)
		printf("E VALIDA E FORTE");
	else
		printf("NAO E VALIDA E FORTE");
	printf("\n");
	return (0);
}
