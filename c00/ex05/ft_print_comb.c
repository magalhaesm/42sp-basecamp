/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 20:29:09 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/04/10 21:47:18 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char i, char j, char k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (i != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	hundred;
	char	ten;
	char	unity;

	hundred = '0';
	ten = '1';
	unity = '2';
	while (hundred <= '7')
	{
		while (ten <= '8')
		{
			while (unity <= '9')
			{
				print(hundred, ten, unity);
				unity++;
			}
		ten++;
		unity = ten + 1;
		}
	hundred++;
	ten = hundred + 1;
	unity = ten + 1;
	}
}
