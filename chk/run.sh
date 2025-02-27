#!/bin/bash

# Show the number of arguments passed
echo -e "\033[1;34mNumber of arguments: $#\033[0m"

if [ $# -lt 1 ]; then
  echo -e "\033[1;31mNo file to test\033[0m"
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

cc "$@" ../ft_printf/libftprintf.a -o test.out || { 
  echo -e "\033[1;31mCompilation failed\033[0m"
  exit 1
}

run_test() {
  expected=$1
  shift
  echo -e "Test: \033[1;33m./test.out $*\033[0m"
  ./test.out "$@"
  if [ $? -eq $expected ]; then
    echo -e "\033[1;32mOK\033[0m"
  else
    echo -e "\033[1;31mOKn't\033[0m"
  fi
  echo -e "\033[1;34m-----------------------------------\033[0m"
}


run_test 0 1 1 1 1 1 1 1 1


if [ -f test.out ]; then
  rm test.out
  echo -e "\033[1;32mtest.out has been removed.\033[0m"
else
  echo -e "\033[1;31mtest.out does not exist.\033[0m"
fi
