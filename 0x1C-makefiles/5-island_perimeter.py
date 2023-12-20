#!/usr/bin/python3
def island_perimeter(grid):
    perimeter = 0
    for i, _ in enumerate(grid):
        for j, _ in enumerate(grid[i]):
            print(grid[i][j], end=',')
            if grid[i][j] == 1:
                if grid[i][j]





"""
grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
    """
grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
island_perimeter(grid)
