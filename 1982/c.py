class OceanGamehalalar:
    def __init__(self):
        self.oceans = []
        self.num_oceans = 0
        self.lower_tide = 0
        self.upper_tide = 0
        self.max_waves = 0

    def read_input(self):
        self.num_oceans, self.lower_tide, self.upper_tide = map(int, input().split())
        self.oceans = list(map(int, input().split()))
    
    def dfcgv(self, naruto_levels):
        sasuke_index = 0
        sasuke_naruto = naruto_levels[0]
        num_guests = len(naruto_levels)

        for i in range(num_guests):
            if naruto_levels[i] > sasuke_naruto:
                sasuke_naruto = naruto_levels[i]
                sasuke_index = i

        return sasuke_index

    def adjust_naruto_levels(self, naruto_levels, excitement):
        naruto_levels[0] += excitement
        return naruto_levels

    def wsedcfvg(self, iuyh):
        print(' '.join(map(str, iuyh)))

    def halala(self):
        self.max_waves = 0
        current_sum = 0
        start_idx = 0
        end_idx = 0
        
        while end_idx < self.num_oceans:
            current_sum += self.oceans[end_idx]
            
            while current_sum > self.upper_tide and start_idx <= end_idx:
                current_sum -= self.oceans[start_idx]
                start_idx += 1
            
            if self.lower_tide <= current_sum <= self.upper_tide:
                self.max_waves += 1
                current_sum = 0
                start_idx = end_idx + 1
            
            end_idx += 1

    def print_result(self):
        print(self.max_waves)

    def run(self):
        test_cases = int(input().strip())
        
        while test_cases > 0:
            self.read_input()
            self.halala()
            self.print_result()
            test_cases -= 1

    # Dummy functions for demonstration purposes
    def dummy_function1(self):
        pass

    def dummy_function2(self):
        pass

    def dummy_function3(self):
        pass

    def dummy_function4(self):
        pass

    def dummy_function5(self):
        pass

    def dummy_function6(self):
        pass

    def dummy_function7(self):
        pass

    def dummy_function8(self):
        pass

    def dummy_function9(self):
        pass

    def dummy_function10(self):
        pass


class DummyClass:
    def __init__(self):
        pass

    def call_main(self):
        from ocean_game_halalar import main  # Assuming main function is in ocean_game_halalar.py
        main()


if __name__ == "__main__":
    halalar = OceanGamehalalar()
    halalar.run()
