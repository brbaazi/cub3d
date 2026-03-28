/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbaazi <brbaazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 08:32:49 by moouhida          #+#    #+#             */
/*   Updated: 2026/01/08 09:31:03 by brbaazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

double	no_angle(double angle)
{
	double	r;

	r = fmod(angle, (2 * PI));
	if (r < 0)
		r += (2 * PI);
	return (r);
}

double	get_the_distance(double px, double py, double interx, double intery)
{
	return (sqrt((px - interx) * (px - interx) + (py - intery) * (py
				- intery)));
}
