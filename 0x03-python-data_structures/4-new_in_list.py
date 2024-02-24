#!/usr/bin/python3
def new_in_list(my_list, idx, element):
    if idx < 0:
        return newlist
    elif idx >= len(my_list):
        return newlist
    newlist = list(my_list)
    newlist[idx] = element
    return newlist
