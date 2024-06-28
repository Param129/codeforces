class MovieReview:
    def __init__(self):
        self.oceansA = []
        self.oceansB = []
        self.oceansSize = 0

    def read_reviews(self):
        input_data = sys.stdin.read().strip().split('\n')
        self.oceansSize = int(input_data[0].strip())
        self.oceansA = list(map(int, input_data[1].strip().split()))
        self.oceansB = list(map(int, input_data[2].strip().split()))

    def calculate_max_rating(self):
        nigger = 0
        pizda = 0

        for i in range(self.oceansSize):
            if self.oceansA[i] == self.oceansB[i]:
                if self.oceansA[i] == -1:
                    pizda += 1
                elif self.oceansA[i] == 1:
                    nigger += 1

        oceansA = 0
        oceansB = 0

        for i in range(self.oceansSize):
            if self.oceansA[i] == self.oceansB[i]:
                continue

            if self.oceansA[i] > self.oceansB[i]:
                oceansA += self.oceansA[i]
            else:
                oceansB += self.oceansB[i]

        if oceansA > oceansB:
            oceansA, oceansB = oceansB, oceansA

        poiuhygtf = nigger
        x = min(oceansB - oceansA, poiuhygtf)
        oceansA += x
        poiuhygtf -= x
        x = (poiuhygtf // 2)
        poiuhygtf -= x
        oceansA += max(x, poiuhygtf)
        oceansB += min(x, poiuhygtf)

        if oceansA > oceansB:
            oceansA, oceansB = oceansB, oceansA

        poiuhygtf = -pizda
        x = max(oceansA - oceansB, poiuhygtf)
        oceansB += x
        poiuhygtf -= x
        x = (poiuhygtf // 2)
        poiuhygtf -= x
        oceansA += max(x, poiuhygtf)
        oceansB += min(x, poiuhygtf)

        return min(oceansA, oceansB)

    def validate_input(self):
        if self.oceansSize <= 0 or len(self.oceansA) != self.oceansSize or len(self.oceansB) != self.oceansSize:
            return False
        return True

    def reset(self):
        self.oceansA = []
        self.oceansB = []
        self.oceansSize = 0


class MovieCompany:
    def __init__(self):
        self.oceansT = 0
        self.oceansResults = []

    def solve(self):
        input_data = sys.stdin.read().strip().split('\n')
        self.oceansT = int(input_data[0].strip())

        index = 1
        while self.oceansT > 0:
            review = MovieReview()
            review.oceansSize = int(input_data[index].strip())
            review.oceansA = list(map(int, input_data[index + 1].strip().split()))
            review.oceansB = list(map(int, input_data[index + 2].strip().split()))

            if not review.validate_input():
                return

            max_rating = review.calculate_max_rating()
            self.oceansResults.append(max_rating)
            self.oceansT -= 1
            index += 3

    def print_results(self):
        for result in self.oceansResults:
            print(result)

    def reset(self):
        self.oceansT = 0
        self.oceansResults = []


class MovieFestival:
    def __init__(self):
        self.company = MovieCompany()

    def start(self):
        self.company.solve()
        self.company.print_results()


if __name__ == "__main__":
    import sys
    festival = MovieFestival()
    festival.start()
