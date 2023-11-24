/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_pratico_F.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 07:37:19 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/24 08:01:30 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_input
{
	int	n;
	int	*a;
}t_input;

typedef struct s_utils
{
	int		min;
	int		max;
	char	*s;
}t_utils;

typedef struct s_data
{
	t_input	*i;
	t_utils	*u;
}t_data;

t_input	*get_input(void)
{
	t_input	*i;
	int		k;

	i = (t_input *)malloc(sizeof(t_input));
	scanf("%d", &i->n);
	if (i->n <= 0)
		return (free(i), NULL);
	i->a = (int *)malloc(sizeof(int) * i->n);
	k = -1;
	while (++k < i->n)
		scanf("%d", &i->a[k]);
	return (i);
}

t_utils	*get_utils(t_input *i)
{
	t_utils	*u;
	int		k;

	u = (t_utils *)malloc(sizeof(t_utils));
	u->min = i->a[0];
	u->max = i->a[0];
	k = -1;
	while (++k < i->n)
	{
		if (i->a[k] < u->min)
			u->min = i->a[k];
		if (i->a[k] > u->max)
			u->max = i->a[k];
	}
	return (u);
}

char	*get_status(t_input *i)
{
	int	j;
	int	k;
	int	t;

	t = 0;
	j = -1;
	while (++j < i->n)
	{
		k = j;
		while (++k < i->n)
			if (i->a[j] != i->a[k])
				t = 1;
	}
	if (t == 0)
		return (strdup("NAO ESTA A SUBIR"));
	j = -1;
	while (++j < i->n)
	{
		k = j;
		while (++k < i->n)
			if (i->a[j] > i->a[k])
				return (strdup("NAO ESTA A SUBIR"));
	}
	return (strdup("ESTA A SUBIR"));
}

void	analyse(t_data *d)
{
	int	k;
	int	count_min;
	int	count_max;

	printf("NA ESCALA DE 0 A 100: ");
	k = -1;
	while (++k < d->i->n)
	{
		if (k > 0)
			printf(", ");
		printf("%d", d->i->a[k] * 5);
	}
	count_min = 0;
	count_max = 0;
	k = -1;
	while (++k < d->i->n)
	{
		if (d->i->a[k] == d->u->min)
			count_min++;
		if (d->i->a[k] == d->u->max)
			count_max++;
	}
	printf("\nNOTAS IGUAIS A MENOR: %d", count_min);
	printf("\nNOTAS IGUAIS A MAIOR: %d", count_max);
	printf("\n%s", d->u->s);
}

int	main(void)
{
	t_data	*d;

	d = (t_data *)malloc(sizeof(t_data));
	d->i = get_input();
	if (!d->i)
		return (free(d), 0);
	d->u = get_utils(d->i);
	d->u->s = get_status(d->i);
	analyse(d);
	printf("\n");
	free(d->u->s);
	free(d->i->a);
	free(d->i);
	free(d->u);
	free(d);
	return (0);
}
