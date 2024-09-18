class Solution(object):
    def equalPairs(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        
        # Transpose the grid to get columns as rows
        transposed_grid = list(zip(*grid))  # Transposing and converting to a list of tuples
        
        count = 0
        
        for row in grid:
            row_tuple = tuple(row)  # Convert each row to a tuple
            count += transposed_grid.count(row_tuple)  # Count matching tuples in the transposed grid
        
        return count
