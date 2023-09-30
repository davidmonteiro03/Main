/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:58:15 by dcaetano          #+#    #+#             */
/*   Updated: 2023/09/30 16:47:39 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (++i < n && (s1[i] != '\0' || s2[i] != '\0'))
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	char	*text1;
	char	*text2;
	int	i;
	int	j;

	i = 6;
	j = 7;
	text1 = "David caetano";
	text2 = "David Caetano";
	printf("%s\n%s\n", text1, text2);
	printf("%d\n", ft_strncmp(text1, text2, i));
	printf("%d", ft_strncmp(text1, text2, j));
}*/
