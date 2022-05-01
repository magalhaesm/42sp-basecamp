/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:10:10 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/04/22 12:12:22 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fat;

	fat = 1;
	if (nb < 0)
		return (0);
	if (nb < 1)
		return (1);
	while (nb)
	{
		fat *= nb;
		nb--;
	}
	return (fat);
}
