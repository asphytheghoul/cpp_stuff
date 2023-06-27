#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;

class Random {
    int lb;
    int ub;
public:
    Random(int lb, int ub) : lb(lb), ub(ub) {}
    int getRand() {
        srand(time(0));
        int random_val = lb + rand() % (ub - lb) + 1;
        return random_val;
    }
};

namespace custom {
    int isLesser(int num, int randNum) {
        return num < randNum;
    }
    int isGreater(int num, int randNum) {
        return num > randNum;
    }
    int isEqual(int num, int randNum) {
        return num == randNum;
    }
}

int getInput() {
    int input;
    while (!(cin >> input)) {
        cin.clear();
        cin.ignore(1000, '\n'); 
        cout << "Invalid type entered! Please enter a valid number: \n";
    }
    return input;
}

int main() {
    int lb, ub, num;
    cout << "Enter lower bound: ";
    lb = getInput();
    cout << "Enter upper bound: ";
    ub = getInput();

    Random r(lb, ub);
    int randomnum = r.getRand();
    
    cout << "Enter a number: ";
    num = getInput();
    if (num<lb){
        cout<<"Number is lesser than lower bound, try again with a higher guess!"<<endl;
        cout << "Enter a number: ";
        num = getInput();
    }
    else if (num>ub){
        cout<<"Number is greater than upper bound, try again with a lower guess!"<<endl;
        cout << "Enter a number: ";
        num = getInput();
    }
    vector<int> guesses;
    int flag = 1;

    while (num != randomnum) {
        if (num<lb){
        cout<<"Number is lesser than lower bound, try again with a higher guess!"<<endl;
        cout << "Enter a number: ";
        num = getInput();
    }
    else if (num>ub){
        cout<<"Number is greater than upper bound, try again with a lower guess!"<<endl;
        cout << "Enter a number: ";
        num = getInput();
    }
        for (int i = 0; i < guesses.size(); i++) {
            if (custom::isEqual(num, guesses[i])) {
                cout << "You have already guessed this number, try another one instead :)" << endl;
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            if (custom::isLesser(num, randomnum)) {
                cout << "Number is lesser, try again with a higher guess!" << endl;
                guesses.push_back(num);
            }
            else if (custom::isGreater(num, randomnum)) {
                cout << "Number is greater, try again with a lower guess!" << endl;
                guesses.push_back(num);
            }
        }
        flag = 1;
        cout << "Enter a number: ";
        num = getInput();
    }
    guesses.push_back(num);

    cout << "You guessed it right!" << endl;
    cout << "Your guesses were: ";
    for (int i = 0; i < guesses.size(); i++) {
        cout << guesses[i] << "\t";
    }
    return 0;
}
