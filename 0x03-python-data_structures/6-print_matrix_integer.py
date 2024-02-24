#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    for row in range(len(matrix)):
        for i in range(len(matrix[row])):
            if i != len(matrix[row]) - 1:
                endspace = ' '
            else:
                endspace = ''
            print("{:d}".format(matrix[row][i]), end=endspace)
        print()
