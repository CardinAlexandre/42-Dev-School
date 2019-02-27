/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 17:59:44 by aprieur           #+#    #+#             */
/*   Updated: 2019/02/13 17:59:50 by aprieur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		compt;
	int		size_str;
	char	temp;

	compt = 0;
	size_str = 0;
	while (str[size_str])
	{
		size_str++;
	}
	size_str--;
	while (compt <= size_str)
	{
		temp = (str[size_str]);
		str[size_str] = str[compt];
		str[compt] = temp;
		compt++;
		size_str--;
	}
	return (str);
}
