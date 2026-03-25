/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 12:30:21 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/25 13:08:03 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	sign = 1;
	int	nb = 0;

	while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	add_prime_sum(int nb)
{
	int	sum = 0;
	int	i;
	int	count;

	while (nb > 1)
	{
		i = 1;
		count = 0;
		while (i <= nb)
		{
			if (nb % i == 0)
				count++;
			i++;
		}
		if (count == 2)
			sum += nb;
		nb--;
	}
	ft_putnbr(sum);
}

int	main(int argc, char **argv)
{
	int	nb;

	if (argc != 2)
		return (write(1, "0\n", 2), 0);
	nb = ft_atoi(argv[1]);
	if (nb <= 1)
		return (write(1, "0\n", 2), 0);
	add_prime_sum(nb);
	write(1, "\n", 1);
	return (0);
}
