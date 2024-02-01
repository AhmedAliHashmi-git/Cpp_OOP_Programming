#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    const int FINISH_LINE = 70;
    int tortoisePosition = 1;
    int harePosition = 1;
    
    srand(time(0));

    cout << "The race has started!\n\n";

    while (tortoisePosition < FINISH_LINE && harePosition < FINISH_LINE) {
        int tortoiseMove = rand() % 10 + 1;
        int hareMove = rand() % 10 + 1;
        
        // Tortoise moves
        if (tortoiseMove >= 1 && tortoiseMove <= 5) {
            tortoisePosition += 3;  // Fast plod
        }
        else if (tortoiseMove >= 6 && tortoiseMove <= 7) {
            tortoisePosition -= 6;  // Slip
        }
        else {
            tortoisePosition += 1;  // Slow plod
        }
        
        // Hare moves
        if (hareMove >= 1 && hareMove <= 2) {
            harePosition += 9;  // Big hop
        }
        else if (hareMove == 3) {
            harePosition -= 12;  // Big slip
        }
        else if (hareMove >= 4 && hareMove <= 5) {
            harePosition += 1;  // Small hop
        }
        else if (hareMove >= 6 && hareMove <= 8) {
            harePosition -= 2;  // Small slip
        }
        
        // Ensure positions are within bounds
        if (tortoisePosition < 1) {
            tortoisePosition = 1;
        }
        if (harePosition < 1) {
            harePosition = 1;
        }
        if (tortoisePosition > FINISH_LINE) {
            tortoisePosition = FINISH_LINE;
        }
        if (harePosition > FINISH_LINE) {
            harePosition = FINISH_LINE;
        }
        
        // Display positions
        for (int i = 1; i <= FINISH_LINE; i++) {
            if (i == tortoisePosition && i == harePosition) {
                cout << "OUCH!";
            }
            else if (i == tortoisePosition) {
                cout << "T";
            }
            else if (i == harePosition) {
                cout << "H";
            }
            else {
                cout << "-";
            }
        }
          cout << endl;
    }

    // Determine the winner
    if (tortoisePosition >= FINISH_LINE && harePosition >= FINISH_LINE) {
           cout << "\nIt's a tie!" << endl;
    }
    else if (tortoisePosition >= FINISH_LINE) {
        cout << "\nThe Tortoise wins!" << endl;
    }
    else {
        cout << "\nThe Hare wins!" << endl;
    }

    return 0;
}
