# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    transform.sh                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/04 09:22:30 by dcaetano          #+#    #+#              #
#    Updated: 2024/08/04 10:57:34 by dcaetano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

option=0
text=0
input=""

for arg in "$@"; do
	if echo "$arg" | grep -qE '^-[e]+$'; then
		option=1
	else
		input="$input$arg "
	fi
done

if [ -z "$input" ]; then
	echo "$0 [STRING]..."
	exit 1
fi

input=$(echo $(echo $input |
	iconv -f UTF-8 -t ASCII//TRANSLIT |
	sed 's/[^a-zA-Z0-9]/\n/g' |
	grep -v '^$' |
	tr '\n' ' ') |
	sed 's/[^a-zA-Z0-9]/_/g' |
	tr '[:upper:]' '[:lower:]')
if [ $option -eq 1 ]; then
	input=$(echo $input |
		tr 'abcdefghijklmnopqrstuvwxyz' 'nopqrstuvwxyzabcdefghijklm' |
		tr '0123456789' '5678901234' |
		tr 'abcdefghijklmnopqrstuvwxyz0123456789' 'stuvwxyz0123456789abcdefghijklmnopqr' |
		tr -d '_')
fi

echo $input
