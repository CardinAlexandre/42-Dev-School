/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 15:51:15 by aprieur           #+#    #+#             */
/*   Updated: 2019/02/15 15:51:18 by aprieur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int result;

	result = 1;
	if (nb == 0)
		return (0);
	while (result * result < nb)
		result++;
	if (nb % result == 0 && result * result == nb)
		return (result);
	return (0);
}
