/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:56:07 by xili              #+#    #+#             */
/*   Updated: 2023/07/13 18:04:01 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argn, char *argv[])
{
	int i;

	i = 0;
	while (argv[0][i] != '\0')
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	return (0);
}