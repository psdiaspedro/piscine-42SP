/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugusto <paugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 08:43:09 by paugusto          #+#    #+#             */
/*   Updated: 2021/08/02 08:43:30 by paugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

void	ft_iterative_power_test(int nb, int power)
{
	int	res;

	res = ft_iterative_power(nb, power);
	printf(" nb = %d, power = %d, result: %d\n", nb, power, res);
}

int	main(void)
{
	int	nb;
	int	power;

	// testando potencias negativas(deve retornar 0)
	printf("[1] Potencias negativas(deve retornar 0)\n");
	nb = -4;
	while (nb <= 4)
	{
		power = -4;
		while (power < 0)
		{
			ft_iterative_power_test(nb, power);
			power++;
		}
		nb++;
	}
	// testando potencias 0(deve retornar 1)
	printf("[2] Potencias 0(deve retornar 1)\n");
	nb = -4;
	power = 0;
	while (nb <= 4)
	{
		ft_iterative_power_test(nb, power);
		nb++;
	}
	// testando potencias 0(deve retornar 1)
	printf("[3] Potencias positivas(deve retornar o numero elevado a potencia)\n");
	nb = -4;
	while (nb <= 4)
	{
		power = 1;
		while (power <= 4)
		{
			ft_iterative_power_test(nb, power);
			power++;
		}
		nb++;
	}
	return (0);
}
