/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:33:20 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/04/22 12:15:05 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAX_INT 2147483647

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	while (nb < MAX_INT && !ft_is_prime(nb))
		nb += 1;
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
