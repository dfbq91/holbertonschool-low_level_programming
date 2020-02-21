#!/usr/bin/python3
'''island task'''

def island_perimeter(grid):
    '''
    returns the perimeter of the island described in grid
    nline: is the number of the current line
    nstep: is the number of the current position in current line
    perimeter: perimeter of the island
    LINE: current list of grid(another list)
    POS: current position in LIST
    '''

    nline = 0
    perimeter = 0
    for LINE in grid:
        nstep = 0
        for POS in LINE:
            if POS == 0:
                nstep += 1
                continue
            if POS == 1:
                print("Fila:", nline, "posición:", nstep, "valor:", LINE[nstep])
                if LINE[nstep - 1] == 0:
                    perimeter += 1
                if LINE[nstep + 1] == 0:
                    perimeter += 1
                if grid[nline-1][nstep] == 0:
                    perimeter += 1
                if grid[nline-1][nstep] == 0:
                    perimeter += 1
                nstep += 1
        nline += 1

    return perimeter
