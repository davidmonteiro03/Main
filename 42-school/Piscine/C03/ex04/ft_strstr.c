/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:13:48 by dcaetano          #+#    #+#             */
/*   Updated: 2023/10/03 14:42:05 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;
	int	t;

	if (ft_strlen(str) < ft_strlen(to_find))
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		k = 0;
		t = 0;
		while (to_find[k] != '\0')
		{
			if (str[k + i] == to_find[k])
				t++;
			k++;
		}
		if (t == ft_strlen(to_find))
			return (str + i);
		i++;
	}
	return (0);
}
/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str1[100] = "David Caetano Monteiro";
	char	str2[100] = "av"; // testar com "av", "ae", "an", "o ", "on", "id" e "ir"

	printf("Main string:    %s\n", str1);
	printf("String to find: %s\n", str2);
	printf("Final string:   %s", ft_strstr(str1, str2));
	return (0);
}*/
