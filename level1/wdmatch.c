/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 17:15:17 by albben-a          #+#    #+#             */
/*   Updated: 2026/03/24 17:21:26 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wdmatch(char *wrd, char *ltr)
{
	int	i = 0;
	int	j = 0;

	while (ltr[j])
	{
		if (wrd[i] == ltr[j])
			i++;
		j++;
	}
	if (wrd[i] == '\0')
	{
		i = 0;
		while (wrd[i])
		{
			write(1, &wrd[i], 1);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (write(1, "\n", 1), 0);
	else
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
