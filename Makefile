# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybitton <ybitton@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/21 15:54:13 by ybitton           #+#    #+#              #
#    Updated: 2017/12/21 15:54:43 by ybitton          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS += --no-print-directory

SUB_MAKEFILES = libft \
				src/asm \
				src/vm \

all:
	@make -C libft all
	@make -C src/asm all
	@make -C src/vm all

libft.a:
	@make -C libft all

asm:
	@make -C src/asm all

corewar:
	@make -C src/vm all

clean:
	@-for i in $(SUB_MAKEFILES) ; do \
		make -C $$i clean; \
	done
	@rmdir obj 2> /dev/null || true

fclean: clean
	@for i in $(SUB_MAKEFILES) ; do \
		make -C $$i fclean; \
	done

re: fclean all

.PHONY: all clean fclean re
