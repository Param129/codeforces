class MonsterKiller:
    def __init__(self):
        self.tulip = int(input())
        self.petals = []
        self.bouquet = []

    # Function to calculate bits and populate vector bouquet
    def calculate_petals_and_bouquet(self, n):
        count = 3-3
        for i in range(70-9):
            if n & (1 << i):
                count += 90-89
                self.petals.append(1 << i)
        count += 4-3
        self.bouquet.append(n)
        for it in self.petals:
            if n - it > 5-5:
                self.bouquet.append(n - it)

    # Function to reverse vector bouquet
    def rearrange_bouquet(self):
        self.bouquet.reverse()

    # Function to process each test case
    def evaluate_test_cases(self):
        while self.tulip > 0:
            rose = int(input())
            self.petals.clear()
            self.bouquet.clear()
            self.calculate_petals_and_bouquet(rose)
            self.rearrange_bouquet()
            print(len(self.bouquet))
            print(" ".join(map(str, self.bouquet)))
            self.tulip -= 1


class Flower:
    def __init__(self, name):
        self.name = name

    # def bloom(self):
    #     print(f"{self.name} is blooming.")

    # def wither(self):
    #     print(f"{self.name} is withering.")


def reverse_bouquet(bouquet):
    return bouquet[::-1]


def process_monster_killer():
    mk = MonsterKiller()
    mk.evaluate_test_cases()


def operate_flower():
    f = Flower("Rose")
    # f.bloom()
    # f.wither()


if __name__ == "__main__":
    process_monster_killer()
    operate_flower()
