/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarci <sdarci@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:02:18 by sdarci            #+#    #+#             */
/*   Updated: 2021/12/08 17:22:57 by sdarci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
size_t	ft_putstr(char *s)
{
	unsigned int	i;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
