/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semabote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:32:46 by semabote          #+#    #+#             */
/*   Updated: 2020/07/17 11:33:01 by semabote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)

{
	int i;

	i = 0;
	while (str[i] != '0')
	{
		ft_putchar(str[i]);
		i++
	}
}

