/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:52:44 by eobeng            #+#    #+#             */
/*   Updated: 2024/02/28 12:47:56 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int j;
    int count;

    count = argc - 1;
    while (1 <= count)
    {
        while (argv[count][j] != '\0')
        {
            write(1, &argv[count][j], 1);
            j++;
        }
        j = 0;
        write(1, "\n", 1);
        count--;
    }
    return (0);
}
