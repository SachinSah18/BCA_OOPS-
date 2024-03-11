#include<iostream>
#include<string>

using namespace std;

class NumberWords {
private:
    string numbersInWords[5]; 

public:
    void acceptNumbers(int nums[]) {
        string words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        
        for(int i = 0; i < 5; i++) {
            if(nums[i] >= 0 && nums[i] <= 9) {
                numbersInWords[i] = words[nums[i]];
            } else {
                numbersInWords[i] = "Invalid"; 
            }
        }
    }

    void displayWords() {
        for(int i = 0; i < 5; i++) {
            cout << numbersInWords[i] << endl;
        }
    }
};

int main() {
    NumberWords nw;
    int numbers[5];
    
    cout << "Enter five integers (0 to 9):" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    nw.acceptNumbers(numbers);
    cout << "Output:" << endl;
    nw.displayWords();

    return 0;
}
