/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dcaetano <damonteiro12446@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:06:42 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/21 15:48:35 by Dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>
#define MAX 3*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*create_str(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	if (size <= 0)
		len = 1;
	str = (char *)malloc(sizeof(char) * len);
	if (str == NULL)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = create_str(size, strs, sep);
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[k++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			str[k++] = sep[j];
			j++;
		}
	}
	str[k] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	*mat[MAX];
	char	*sep;
	int		i;

	mat[0] = "David";
	mat[1] = "Caetano";
	mat[2] = "Monteiro";
	i = 0;
	sep = "******************************************************************************************************************";
	printf("\n\tLista de strings sem separador: ");
	while (i < MAX)
	{
		printf("%s", mat[i]);
		i++;
	}
	printf("\n\n\t\t\t     Separador: ");
	printf("%s", sep);
	printf("\n\n\tLista de strings com separador: ");
	printf("%s\n\n", ft_strjoin(MAX, mat, sep));
	return (0);
}
*/
