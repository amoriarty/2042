/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rand.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaueur <chaueur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 11:37:26 by chaueur           #+#    #+#             */
/*   Updated: 2015/02/28 14:21:25 by chaueur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush2042.h"
int		rand_a_b(int a, int b)
{
	return (rand() %(b + 1 - a) + a);
}

int		rand_a_else_b(int a, int b)
{
	int		number;

	number = rand_a_b(1, 10);
	if (number % 2 == 0)
		return (a);
	else
		return (b);
}