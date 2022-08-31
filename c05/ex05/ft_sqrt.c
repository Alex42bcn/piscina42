/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicanyo <apicanyo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:02:13 by apicanyo          #+#    #+#             */
/*   Updated: 2022/08/31 18:02:57 by apicanyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		while (n * n <= nb)
		{
			if (n * n == nb)
				return (n);
			else if (n >= 46341)
				return (0);
			n++;
		}
	}
	return (0);
}

/*int	main(void)
{
	printf("sqrt of %d is %d\n", -2282, ft_sqrt(-2282));
	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 25, ft_sqrt(25));
	printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
	printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
	printf("sqrt of %d is %d\n", 20286016, ft_sqrt(20286016));
	printf("sqrt of %d is %d\n", 1120795600, ft_sqrt(1120795600));
	printf("sqrt of %d is %d\n", 484440100, ft_sqrt(484440100));
	printf("sqrt of %d is %d\n", 1046643418, ft_sqrt(1046643418));
	printf("sqrt of %d is %d\n", 1944104464, ft_sqrt(1944104464));
	printf("sqrt of %d is %d\n", 231739964, ft_sqrt(231739964));
	printf("sqrt of %d is %d\n", 1454436, ft_sqrt(1454436));
	printf("sqrt of %d is %d\n", 1411303165, ft_sqrt(1411303165));
	printf("sqrt of %d is %d\n", 259564321, ft_sqrt(259564321));
	printf("sqrt of %d is %d\n", 416153106, ft_sqrt(416153106));
	return (0);
}*/
