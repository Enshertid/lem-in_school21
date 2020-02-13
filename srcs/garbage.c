/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   garbage.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:01:08 by ymanilow          #+#    #+#             */
/*   Updated: 2020/02/13 14:18:45 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void				put_out_links_of_rooms(t_data *data)
{
	int				i;
	int				j;

	ft_printf("\nlinks of OUT room\n");
	i = -1;
	while (++i < data->graph.iter.col)
	{
		j = -1;
		ft_printf("room %s has next links:\n", data->graph.rooms[i]->name);
		while (++j < data->graph.rooms[i]->fork[0].iter.col)
			ft_printf("%s\n",
			data->graph.rooms[i]->fork[0].links[j].link->room->name);
	}
	i = -1;
	ft_printf("\nlinks of IN part\n");
	while (++i < data->graph.iter.col)
	{
		j = -1;
		ft_printf("room %s has next links:\n", data->graph.rooms[i]->name);
		while (++j < data->graph.rooms[i]->fork[1].iter.col)
			ft_printf("%s\n",
					data->graph.rooms[i]->fork[1].links[j].link->room->name);
	}
}

void				put_out_way(t_way *way)
{
	t_way_room *tmp;
	int			i;


	i = 0;
	tmp = way->head;
	while (tmp->next)
	{
		i++;
		ft_printf("%s-", tmp->room->name);
		tmp = tmp->next;
	}
	ft_printf("%s  weight of way ==> %d\n", tmp->room->name, i);
}

void				put_out_array_of_ways(t_ways ways, int num)
{
	int i;

	i = -1;
	ft_printf ("\n%d set of ways:\n", num);
	while (++i < ways.iters.col)
	{
		ft_printf("num_of_way_is ==> %d\n", i + 1);
		put_out_way(&ways.way_ar[i]);
		ft_printf("\n");
	}
}
