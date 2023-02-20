#! /bin/zsh
#caso 1: ok
#:./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
#caso 2 video 1:ok
#./rush-01 "2 3 1 3 3 2 2 1 2 4 2 1 2 1 2 2" | cat -e
#caso 3 video 2:ok
./rush-01 "3 3 2 1 1 2 3 3 1 2 3 3 3 3 2 1" | cat -e
#caso 3 video 3:ok
./rush-01 "2 3 2 1 2 1 2 3 1 3 2 3 3 1 3 2" | cat -e



#testing 4 bad solution
./rush-01 "4 3 2 1 1 2 4 2 4 3 2 1 1 2 2 2" | cat -e
#./rush-01 "3 3 2 1 1 2 2 2 3 3 2 1 1 2 4 2" | cat -e
