#!/usr/bin/python3
def max_integer(my_list=[]):
    new_list = []
    if not my_list:
        return None
    if my_list:
        my_list.sort(reverse=True)
        return (my_list[0])
