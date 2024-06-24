class FlowerBed:
    def __init__(self, numRows, numCols):
        self.numRows = numRows
        self.numCols = numCols
        self.matrix = []

    def read_matrix(self):
        for _ in range(self.numRows):
            row = list(map(int, input().split()))
            self.matrix.append(row)

    def get_max_neighbor_value(self, rowIdx, colIdx):
        maxVal = 0
        
        if rowIdx - 1 >= 0:
            maxVal = max(maxVal, self.matrix[rowIdx - 1][colIdx])
        if colIdx - 1 >= 0:
            maxVal = max(maxVal, self.matrix[rowIdx][colIdx - 1])
        if rowIdx + 1 < self.numRows:
            maxVal = max(maxVal, self.matrix[rowIdx + 1][colIdx])
        if colIdx + 1 < self.numCols:
            maxVal = max(maxVal, self.matrix[rowIdx][colIdx + 1])
        
        return maxVal

    def should_update_cell(self, rowIdx, colIdx):
        if (rowIdx - 1 >= 0 and self.matrix[rowIdx][colIdx] <= self.matrix[rowIdx - 1][colIdx]):
            return False
        if (colIdx - 1 >= 0 and self.matrix[rowIdx][colIdx] <= self.matrix[rowIdx][colIdx - 1]):
            return False
        if (rowIdx + 1 < self.numRows and self.matrix[rowIdx][colIdx] <= self.matrix[rowIdx + 1][colIdx]):
            return False
        if (colIdx + 1 < self.numCols and self.matrix[rowIdx][colIdx] <= self.matrix[rowIdx][colIdx + 1]):
            return False
        
        return True

    def process_matrix(self):
        for rowIdx in range(self.numRows):
            for colIdx in range(self.numCols):
                maxVal = self.get_max_neighbor_value(rowIdx, colIdx)
                if self.should_update_cell(rowIdx, colIdx):
                    self.matrix[rowIdx][colIdx] = maxVal

    def print_matrix(self):
        for row in self.matrix:
            print(" ".join(map(str, row)))


class GardenManager:
    def __init__(self):
        self.numTestCases = 1

    def read_num_test_cases(self):
        self.numTestCases = int(input())

    def process_test_cases(self):
        for _ in range(self.numTestCases):
            numRows, numCols = map(int, input().split())
            flower_bed = FlowerBed(numRows, numCols)
            flower_bed.read_matrix()
            flower_bed.process_matrix()
            flower_bed.print_matrix()


class FlowerGarden:
    def __init__(self):
        self.garden_manager = GardenManager()

    def simulate_flower_garden(self):
        self.garden_manager.read_num_test_cases()
        self.garden_manager.process_test_cases()


if __name__ == "__main__":
    flower_garden = FlowerGarden()
    flower_garden.simulate_flower_garden()
