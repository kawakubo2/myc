cmake_minimum_required (VERSION 3.16.3)

project(rpn)

add_executable (rpn rpn_test.c expression_parse.c stack.c linkedlist.c)
