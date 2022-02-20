/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarci <sdarci@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:04:27 by sdarci            #+#    #+#             */
/*   Updated: 2021/12/08 17:19:44 by sdarci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
int		ft_printf(const char *fmt, ...);
int		func1(const char *fmt1, va_list p);
size_t	ft_p(unsigned long int p);
size_t	hexahigh(unsigned long n);
size_t	hexalow(unsigned long n);
size_t	ft_putnbr( long int n);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *s);

#endif
