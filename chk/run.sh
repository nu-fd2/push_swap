#!/bin/bash

if [ -z "$1" ]; then
  echo -e "\033[1;31mno file to test\033[0m"
  exit 1
fi

if [ ! -f ../ft_printf/libftprintf.a ]; then
  echo -e "\033[1;31mlibftprintf.a not found, building ft_printf...\033[0m"
  make -C ../ft_printf
  if [ $? -ne 0 ]; then
    echo -e "\033[1;31mError building ft_printf\033[0m"
    make -C ../ft_printf fclean
    exit 1
  fi
  make -C ../ft_printf clean
fi

cc $1 ../ft_printf/libftprintf.a -o test.out

echo -e "Test 1: \033[1;33m./test.out 56 -7 2 +2\033[0m"
./test.out 56 -7 2 +2
echo -e "\033[1;34m-----------------------------------\033[0m"

echo -e "Test 2: \033[1;33m./test.out \"      -1   3 44 +2     \"\033[0m"
./test.out "      -1   3 44 +2     "
echo -e "\033[1;34m-----------------------------------\033[0m"

echo -e "Test 3: \033[1;33m./test.out 100 200 300\033[0m"
./test.out 100 200 300
echo -e "\033[1;34m-----------------------------------\033[0m"

echo -e "Test 4: \033[1;33m./test.out +123 45 -67\033[0m"
./test.out "+123 45 -67"
echo -e "\033[1;34m-----------------------------------\033[0m"

echo -e "Test 5: \033[1;33m./test.out -1 3 --\033[0m"
./test.out -1 3 --
echo -e "\033[1;34m-----------------------------------\033[0m"

echo -e "Test 6: \033[1;33m./test.out abc 123\033[0m"
./test.out abc 123
echo -e "\033[1;34m-----------------------------------\033[0m"

echo -e "Test 7: \033[1;33m./test.out\033[0m"
./test.out
echo -e "\033[1;34m-----------------------------------\033[0m"

if [ -f test.out ]; then
  rm test.out
  echo -e "\033[1;32mtest.out has been removed.\033[0m"
else
  echo -e "\033[1;31mtest.out does not exist.\033[0m"
fi
