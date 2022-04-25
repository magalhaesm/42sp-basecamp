/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 21:53:03 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/04/11 00:11:44 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_pair(int num1, int num2)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = (num1 / 10) + 48;
	b = (num1 % 10) + 48;
	c = (num2 / 10) + 48;
	d = (num2 % 10) + 48;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(num1 == 98 && num2 == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 1;
	while (num1 <= 98)
	{
		while (num2 <= 99)
		{
			print_pair(num1, num2);
			num2++;
		}
		num1++;
		num2 = num1 + 1;
	}
}
