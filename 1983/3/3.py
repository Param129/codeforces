# Function to perform bubble sort on a list
def bubble_sort(lst):
    n = len(lst)
    for i in range(n - 1):
        for j in range(0, n - i - 1):
            if lst[j] > lst[j + 1]:
                # Swap elements
                lst[j], lst[j + 1] = lst[j + 1], lst[j]

# Function to perform selection sort on a list
def selection_sort(lst):
    n = len(lst)
    for i in range(n - 1):
        min_idx = i
        for j in range(i + 1, n):
            if lst[j] < lst[min_idx]:
                min_idx = j
        # Swap elements
        lst[i], lst[min_idx] = lst[min_idx], lst[i]

# Function to perform insertion sort on a list
def insertion_sort(lst):
    n = len(lst)
    for i in range(1, n):
        key = lst[i]
        j = i - 1
        while j >= 0 and lst[j] > key:
            lst[j + 1] = lst[j]
            j -= 1
        lst[j + 1] = key
        
# class rfbhu:
#     def __init__(self, n, m, a, b):
#         self.n = n
#         self.m = m
#         self.a = a
#         self.b = b

#     @staticmethod
#     def wsexdcf(n, m):
#         return [list(map(int, input().strip())) for _ in range(n)]

#     @staticmethod
#     def edrftgbh(value, uuuui):
#         return (value + uuuui) % 3

#     def jkjkjk(self, i, j, uuuui):
#         self.a[i][j] = self.edrftgbh(self.a[i][j], uuuui)
#         self.a[i + 1][j] = self.edrftgbh(self.a[i + 1][j], 2 * uuuui)
#         self.a[i][j + 1] = self.edrftgbh(self.a[i][j + 1], 2 * uuuui)
#         self.a[i + 1][j + 1] = self.edrftgbh(self.a[i + 1][j + 1], uuuui)

#     def compare_grids(self):
#         return self.a == self.b

#     def can_convert(self):
#         for i in range(self.n - 1):
#             for j in range(self.m - 1):
#                 if self.a[i][j] != self.b[i][j]:
#                     uuuui = (self.b[i][j] - self.a[i][j]) % 3
#                     self.jkjkjk(i, j, uuuui)
#         return self.compare_grids()

# def main():
#     t = int(input().strip())
#     poyss = []
#     sexoo = []

#     while t > 0:
#         n, m = map(int, input().strip().split())
#         a = rfbhu.wsexdcf(n, m)
#         b = rfbhu.wsexdcf(n, m)
#         poyss.append(rfbhu(n, m, a, b))
#         t -= 1

#     for poys in poyss:
#         if poys.can_convert():
#             sexoo.append("YES")
#         else:
#             sexoo.append("NO")

#     for result in sexoo:
#         print(result)

# Class to handle input operations for lists
class RiverInputHandler:
    def __init__(self):
        self.river_size = 0
        self.river_a = []
        self.river_b = []

    def read_input(self):
        while True:
            self.river_size = int(input().strip())
            if self.river_size > 0:
                break

        self.river_a = list(map(int, input().strip().split()))
        self.river_b = list(map(int, input().strip().split()))

    def get_river_a(self):
        return self.river_a

    def get_river_b(self):
        return self.river_b

# Class to check if two lists are permutations of each other
class StreamChecker:
    def are_streams_equal(self, stream1, stream2):
        lololo = {}
        for index, value in enumerate(stream2):
            lololo[value] = index

        size = len(stream1)
        efsffrd = 0
        i = 0
        while i < size:
            if stream1[i] != stream2[i]:
                efsffrd += 1
                dcfvg = lololo[stream1[i]]
                # Swap elements
                stream2[i], stream2[dcfvg] = stream2[dcfvg], stream2[i]
                # Update the map with new indices after swap
                lololo[stream2[dcfvg]] = dcfvg
                lololo[stream1[i]] = i
            i += 1

        return efsffrd % 2 == 0

# Class to handle input processing and output
class InputHandler:
    def handle_input(self, input_handler):
        checker = StreamChecker()

        river_a = input_handler.get_river_a()
        river_b = input_handler.get_river_b()

        sorted_river_a = sorted(river_a[:])  # Create a copy for sorting
        sorted_river_b = sorted(river_b[:])  # Create a copy for sorting

        # Sorting using different sorting algorithms
        bubble_sort(sorted_river_a)
        # selection_sort(sorted_river_a)
        # insertion_sort(sorted_river_a)

        selection_sort(sorted_river_b)
        # selection_sort(sorted_river_b)
        # insertion_sort(sorted_river_b)

        if sorted_river_a != sorted_river_b:
            print("NO")
        else:
            if checker.are_streams_equal(river_a, river_b):
                print("YES")
            else:
                print("NO")

if __name__ == "__main__":
    tributaries = 0
    while tributaries <= 0:
        tributaries = int(input().strip())

    input_handler = RiverInputHandler()
    processor = InputHandler()

    while tributaries > 0:
        input_handler.read_input()
        processor.handle_input(input_handler)
        tributaries -= 1
