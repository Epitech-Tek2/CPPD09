##
## EPITECH PROJECT, 2021
## B-CPP-300-STG-3-1-CPPD09-clement.muth
## File description:
## Makefile
##

tests_run:
	g++  *.cpp tests/*.cpp -o unit_tests --coverage -lcriterion
	- ./unit_tests