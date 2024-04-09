/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:51:31 by ovosmera          #+#    #+#             */
/*   Updated: 2024/02/20 12:48:20 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		char_count;
	int		*ptr_char_count;

	va_start(args, format);
	char_count = 0;
	ptr_char_count = &char_count;
	while (*format != '\0')
	{
		if (*format != '%')
		{
			ft_putchar(*format, ptr_char_count);
		}
		else
		{
			ft_format_type(*(format + 1), args, ptr_char_count);
			format++;
		}
		format++;
	}
	va_end(args);
	return (char_count);
}

/*
 int main() {
	// Test with characters
	ft_printf("Characters: %c\n", 'A');

	// Test with strings
	ft_printf("String: %s\n", "Hello, World!");

	// Test with number
	ft_printf("Number: %d\n", 42);

	// Test with a pointer
	int num = 45;
	ft_printf("Pointer: %p\n", (void*)&num);

	 // Test with an unsigned number
	ft_printf("Unsigned Number: %u\n", 12345);

	// Test with lowercase hexadecimal
	ft_printf("Lowercase Hex: %x\n", 255);

	// Test with uppercase hexadecimal
	ft_printf("Uppercase Hex: %X\n", 255);

	return 0;
}    */
