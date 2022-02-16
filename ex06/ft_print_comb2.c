/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asieburg <asieburg@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:10:47 by asieburg          #+#    #+#             */
/*   Updated: 2022/02/16 01:02:11 by asieburg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers_2(int num_left, int num_right)
{
	char	digits_left[2];
	char	digits_right[2];

	digits_left[0] = num_left / 10 + '0';
	digits_left[1] = num_left % 10 + '0';
	digits_right[0] = num_right / 10 + '0';
	digits_right[1] = num_right % 10 + '0';
	write(1, digits_left, 2);
	write(1, " ", 1);
	write(1, digits_right, 2);
	if (num_left == 98 && num_right == 99)
		;
	else
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	num_left;
	int	num_right;

	num_left = 0;
	num_right = 1;
	while (num_left <= 98)
	{
		num_right = num_left + 1;
		while (num_right <= 99)
		{
			ft_print_numbers_2(num_left, num_right);
			num_right++;
		}
		num_left++;
	}
}
