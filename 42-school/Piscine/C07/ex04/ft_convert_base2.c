/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:31:59 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/29 15:59:38 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check(char *base)
{
	int	i;
	int	j;

	i = -1;
	while (base[++i])
	{
		j = i;
		while (base[++j])
		{
			if (base[j] == base[i])
				return (0);
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
	}
	return (1);
}

int	power(int nbr, int power)
{
	int	res;

	res = 1;
	while (--power >= 0)
		res = res * nbr;
	return (res);
}

int	atoibase2(char *str, char *base, int strlen, int baselen)
{
	int	i;
	int	j;
	int	res;

	i = -1;
	res = 0;
	while (str[++i])
	{
		j = -1;
		while (base[++j])
		{
			if (str[i] == base[j])
				break ;
		}
		if (base[j] == 0)
			return (res);
		res = res + j * power(baselen, --strlen);
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	baselen;
	int	res;
	int	neg;

	neg = 1;
	res = 0;
	baselen = ft_strlen(base);
	if (baselen < 2)
		return (0);
	while (*str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			neg = -neg;
	}
	res = atoibase2(str, base, ft_strlen(str), baselen) * neg;
	return (res);
}
