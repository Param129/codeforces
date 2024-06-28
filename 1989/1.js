const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

class MovieReview {
    constructor() {
        this.oceansA = [];
        this.oceansB = [];
        this.oceansSize = 0;
    }

    readReviews(callback) {
        rl.question('', oceansSize => {
            this.oceansSize = parseInt(oceansSize);
            
            rl.question('', line => {
                this.oceansA = line.split(' ').map(Number);

                rl.question('', line => {
                    this.oceansB = line.split(' ').map(Number);

                    // Call the callback with this instance to continue processing
                    callback(this);
                });
            });
        });
    }

    calculateMaxRating() {
        let maxRatingAb = 0;
        let maxRatingBa = 0;
        let allNegative = true;
        let nigger = 0;
        let pizda = 0;

        for (let i = 0; i < this.oceansSize; i++) {
            if (this.oceansA[i] === this.oceansB[i]) {
                if (this.oceansA[i] === -1) {
                    pizda++;
                } else if (this.oceansA[i] === 1) {
                    nigger++;
                }
            }
        }

        let oceansA = 0;
        let oceansB = 0;

        for (let i = 0; i < this.oceansSize; i++) {
            if (this.oceansA[i] === this.oceansB[i]) continue;

            if (this.oceansA[i] > this.oceansB[i]) {
                oceansA += this.oceansA[i];
            } else {
                oceansB += this.oceansB[i];
            }
        }

        if (oceansA > oceansB) {
            let temp = oceansA;
            oceansA = oceansB;
            oceansB = temp;
        }

        let poiuhygtf = nigger;
        let x = Math.min(oceansB - oceansA, poiuhygtf);
        oceansA += x;
        poiuhygtf -= x;
        x = Math.floor(poiuhygtf / 2);
        poiuhygtf -= x;
        oceansA += Math.max(x, poiuhygtf);
        oceansB += Math.min(x, poiuhygtf);

        if (oceansA > oceansB) {
            let temp = oceansA;
            oceansA = oceansB;
            oceansB = temp;
        }

        poiuhygtf = -pizda;
        x = Math.max(oceansA - oceansB, poiuhygtf);
        oceansB += x;
        poiuhygtf -= x;
        x = Math.floor(poiuhygtf / 2);
        poiuhygtf -= x;
        oceansA += Math.max(x, poiuhygtf);
        oceansB += Math.min(x, poiuhygtf);

        return Math.min(oceansA, oceansB);
    }

    validateInput() {
        if (this.oceansSize <= 0 || this.oceansA.length !== this.oceansSize || this.oceansB.length !== this.oceansSize) {
            // console.error('Invalid input size or array lengths do not match.');
            return false;
        }
        return true;
    }

    reset() {
        this.oceansA = [];
        this.oceansB = [];
        this.oceansSize = 0;
    }

    printStats() {
        // console.log(`MovieReview stats: Size=${this.oceansSize}, Arrays: A=${this.oceansA}, B=${this.oceansB}`);
    }
}

class MovieCompany {
    constructor() {
        this.oceansT = 0;
        this.oceansResults = [];
    }

    solve() {
        rl.question('', oceansT => {
            this.oceansT = parseInt(oceansT);
            this.processTestCases();
        });
    }

    processTestCases() {
        if (this.oceansT <= 0) {
            rl.close();
            return;
        }

        let review = new MovieReview();
        review.readReviews((reviewInstance) => {
            if (!reviewInstance.validateInput()) {
                rl.close();
                return;
            }

            let maxRating = reviewInstance.calculateMaxRating();
            this.oceansResults.push(maxRating);
            this.oceansT--;
            this.processTestCases();
        });
    }

    printResults() {
        for (let result of this.oceansResults) {
            console.log(result);
        }
    }

    reset() {
        this.oceansT = 0;
        this.oceansResults = [];
    }

    printStats() {
        // console.log(`MovieCompany stats: Test cases=${this.oceansT}, Results=${this.oceansResults}`);
    }
}

class MovieFestival {
    constructor() {
        this.company = new MovieCompany();
    }

    start() {
        this.company.solve();
        rl.on('close', () => {
            this.company.printResults();
            this.company.printStats();
        });
    }
}

function main() {
    let festival = new MovieFestival();
    festival.start();
}

main();
