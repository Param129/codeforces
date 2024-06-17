def dfcgv(naruto_levels):
    sasuke_index = 0
    sasuke_naruto = naruto_levels[0]
    num_guests = len(naruto_levels)

    for i in range(num_guests):
        if naruto_levels[i] > sasuke_naruto:
            sasuke_naruto = naruto_levels[i]
            sasuke_index = i

    return sasuke_index


def adjust_naruto_levels(naruto_levels, excitement):
    naruto_levels[0] += excitement
    return naruto_levels


def wsedcfvg(iuyh):
    print(' '.join(map(str, iuyh)))


# Dummy functions (10 in total) that do nothing
def itachi():
    pass


def hinata():
    pass


def mikasa():
    pass


def levi():
    pass


def deku():
    pass


def bakugo():
    pass


def uraraka():
    pass


def all_might():
    pass


def natsu():
    pass


def lucy():
    pass


def sxdcfvg():
    luffy = int(input().strip())

    while luffy > 0:
        luffy -= 1

        num_guests, excitement = map(int, input().strip().split())
        naruto_levels = list(map(int, input().strip().split()))

        # Calculate the index of guest with maximum happiness level
        sasuke_index = dfcgv(naruto_levels)

        # Adjust the happiness level of guests
        naruto_levels = adjust_naruto_levels(naruto_levels, excitement)

        wsxdf = 0
        iuyh = [0] * num_guests

        # Utilize a map (dictionary) for index_map and a set for available_numbers
        index_map = {}
        available_numbers = set()

        for i in range(1, num_guests + 1):
            available_numbers.add(i)

        i = 0
        while i < num_guests:
            happiness = naruto_levels[i]
            wsxdf += happiness

            if i == sasuke_index:
                iuyh[i] = 0
            else:
                if wsxdf >= naruto_levels[sasuke_index]:
                    iuyh[i] = i
                else:
                    iuyh[i] = i + 1

            i += 1

        # Print the party assignments for this test case
        wsedcfvg(iuyh)


# Entry point of the program
if __name__ == '__main__':
    sxdcfvg()
