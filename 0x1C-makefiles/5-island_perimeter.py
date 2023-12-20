#!/usr/bin/python3
""".."""
def island_perimeter(grid):
    """..."""
    perimeter = 0
    for i, _ in enumerate(grid):
        for j, _ in enumerate(grid[i]):
            print(grid[i][j], end=',')
            if grid[i][j] == 1:
                perimeter += 1 if grid[i][j+1] == 0 else 0
                perimeter += 1 if grid[i][j-1] == 0 else 0
                perimeter += 1 if grid[i+1][j] == 0 else 0
                perimeter += 1 if grid[i-1][j] == 0 else 0
    return perimeter
