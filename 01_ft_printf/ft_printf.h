/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:50:55 by ovosmera          #+#    #+#             */
/*   Updated: 2023/11/15 16:57:39 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>

int ft_printf(const char *format, ...);
void	ft_format_type(char format, va_list args, int *ptr_char_count);
void	ft_putchar(char c, int *ptr_char_count);
void	ft_putstr(char *str, int *ptr_char_count);
void    ft_putnbr(int n, int *ptr_char_count);
void    ft_putptr(void *ptr, int *ptr_char_count);
void    ft_putnbr_unsigned(unsigned int n, int *ptr_char_count);
void    ft_putnbr_hex(unsigned int n, char uppercase, int *ptr_char_count);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);

#endif
