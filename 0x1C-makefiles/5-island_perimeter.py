#!/usr/bin/python3
"""function that returns the perimeter of the island described in grid"""


def island_perimeter(grid):
  """
  Calculates the perimeter of the island in the given grid.

  Args:
      grid: A list of lists of integers representing the grid.
          0 represents water, 1 represents land.

  Returns:
      The perimeter of the island as an integer.
  """

  rows, cols = len(grid), len(grid[0])
  perimeter = 0

  for row in range(rows):
    for col in range(cols):
      if grid[row][col] == 1:
        # Check for land neighbors (up, down, left, right)
        perimeter += 4  # Assume all sides are water (worst-case scenario)
        if row > 0 and grid[row - 1][col] == 1:
          perimeter -= 2  # Not water on top
        if row < rows - 1 and grid[row + 1][col] == 1:
          perimeter -= 2  # Not water on bottom
        if col > 0 and grid[row][col - 1] == 1:
          perimeter -= 2  # Not water on left
        if col < cols - 1 and grid[row][col + 1] == 1:
          perimeter -= 2  # Not water on right

  return perimeter