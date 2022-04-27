/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:54:11 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/04/20 14:02:28 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		non_printable(char c);
void	ft_putchar(char c);
void	ft_puthex(char c);

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (non_printable(c))
			ft_puthex(c);
		else
			ft_putchar(c);
		str++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	non_printable(char c)
{
	if (c < 32)
		return (1);
	return (0);
}

void	ft_puthex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}
