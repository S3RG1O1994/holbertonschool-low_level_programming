#!/bin/usr/python3
"""
	[Function for determined the perimeter of an island in grid]
"""


def island_perimeter(grid):
	"""[Island_perimeter]

	Args:
		grid ([Matrix]): [matrix of n size]

	Returns:
		[int]: [plus of the sides multiply x 2]
	"""

	if not grid:
		return
	if len(grid) < 1:
		return

	add_w = 0
	add_h = 0

	for cols in grid:
		for cnt2 in range(len(cols)):
			if cnt2 < len(cols):
				if cols[cnt2] == 1 and cols[cnt2 - 1] == 1:
					if cols[cnt2 - 2] == 0:
						add_w += 2
					else:
						add_w += 1
				if cols[cnt2] == 1 and cols[cnt2 - 1] == 0:
					add_h += 1
	return (add_h + add_w) * 2
