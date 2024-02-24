#!/usr/bin/python3
def no_c(my_string):
    new = ""
    for word in my_string:
        if word != "c" and word != "C":
            new += word
    return new
