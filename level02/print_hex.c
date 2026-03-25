/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:50:48 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/25 17:01:09 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	nb;
	int	i = 0;
	int	sign = 1;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
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

void	print_hex(int nb)
{
	char	base[16] = "0123456789abcdef";

	if (nb > 16)
	{
		print_hex(nb / 16);
		print_hex(nb % 16);
	}
	else
		write(1, &base[nb], 1);
}

int	main(int argc, char **argv)
{
	int	nb;

	if (argc != 2)
		return (write(1, "\n", 1), 0);
	nb = ft_atoi(argv[1]);
	if (nb > 0)
		print_hex(nb);
	write(1, "\n", 1);
	return (0);
}
