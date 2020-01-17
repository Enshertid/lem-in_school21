/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 21:32:08 by ymanilow          #+#    #+#             */
/*   Updated: 2020/01/17 21:42:54 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PARSING_H
#define PARSING_H

#include "lem_in.h"
#include "graph.h"

void					check_side_room(t_data *data);
void					check_rooms(t_data *data);
void					check_links(t_data *data);

#endif