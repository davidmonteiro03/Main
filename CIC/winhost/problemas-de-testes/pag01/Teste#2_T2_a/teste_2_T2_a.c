/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_2_T2_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 08:48:42 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/06 09:00:54 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		n;
	int		i;
	char	t[100];
	int		q[100];
	int		p[100];
	int		t_a;
	int		t_b;
	int		t_c;
	int		max;
	int		sum;
	double	media;

	scanf("%d", &n);
	if (n < 1 || n > 1000)
		return(0);
	t_a = 0;
	t_b = 0;
	t_c = 0;
	i = -1;
	while (++i < n)
	{
		scanf(" %c", &t[i]);
		if (t[i] == 'A')
			t_a++;
		else if (t[i] == 'B')
			t_b++;
		else if (t[i] == 'C')
			t_c++;
		scanf("%d", &q[i]);
		scanf("%d", &p[i]);
	}
	max = q[0] * p[0];
	sum = 0;
	i = -1;
	while (++i < n)
	{
		if (q[i] * p[i] > max)
			max = q[i] * p[i];
		printf("%d\n", q[i] * p[i]);
		sum += q[i];
	}
	media = (double)sum / (double)n;
	printf("%d\n%d\n%d\n", t_a, t_b, t_c);
	printf("%d\n", max);
	printf("%.2lf\n", media);
	return (0);
}
