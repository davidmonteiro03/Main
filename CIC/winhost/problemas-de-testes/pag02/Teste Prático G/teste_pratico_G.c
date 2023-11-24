/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_pratico_G.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:53:53 by dcaetano          #+#    #+#             */
/*   Updated: 2023/11/24 18:12:20 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_in
{
	int	n;
	int	*a;
	int	m;
}t_in;

typedef struct s_dt
{
	t_in	*in;
}t_dt;

t_in	*get_in(void)
{
	t_in	*in;
	int		i;

	in = (t_in *)malloc(sizeof(t_in));
	if (!in)
		return (NULL);
	scanf("%d", &in->n);
	in->a = (int *)malloc(sizeof(int) * in->n);
	if (!in->a)
		return (free(in), NULL);
	i = -1;
	while (++i < in->n)
	{
		scanf("%d", &in->a[i]);
		while (in->a[i] < 0 || in->a[i] > 20)
			scanf("%d", &in->a[i]);
	}
	scanf("%d", &in->m);
	return (in);
}

void	rev_sort(int **a, int n)
{
	int	i;
	int	k;
	int	t;

	i = -1;
	while (++i < n)
	{
		k = i;
		while (++k < n)
		{
			if ((*a)[i] < (*a)[k])
			{
				t = (*a)[i];
				(*a)[i] = (*a)[k];
				(*a)[k] = t;
			}
		}
	}
}

void	analyse(t_dt *dt)
{
	int	i;

	i = -1;
	while (++i < dt->in->n)
	{
		if (dt->in->a[i] >= 0 && dt->in->a[i] <= 5)
			printf("MAU\n");
		else if (dt->in->a[i] >= 6 && dt->in->a[i] <= 9)
			printf("MED\n");
		else if (dt->in->a[i] >= 10 && dt->in->a[i] <= 13)
			printf("SUF\n");
		else if (dt->in->a[i] >= 14 && dt->in->a[i] <= 16)
			printf("BOM\n");
		else
			printf("MB\n");
	}
	if (dt->in->m > 0 && dt->in->m < dt->in->n)
	{
		rev_sort(&dt->in->a, dt->in->n);
		if (dt->in->m != 1)
			printf("AS %d MELHORES NOTAS SAO: ", dt->in->m);
		else
			printf("A MELHOR NOTA E: ");
		i = -1;
		while (++i < dt->in->m)
		{
			if (i > 0)
				printf(", ");
			printf("%d", dt->in->a[i]);
		}
		printf("\n");
	}
}

int	main(void)
{
	t_dt	*dt;

	dt = (t_dt *)malloc(sizeof(t_dt));
	if (!dt)
		return (0);
	dt->in = get_in();
	if (!dt->in)
		return (free(dt), 0);
	analyse(dt);
	free(dt->in->a);
	free(dt->in);
	free(dt);
	return (0);
}
