/*
    Steps completed:
    Step 1
    Step 7
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Create global variables
const int NUM_TEAMS = 10;
const int NUM_MEMBERS = 3;

// Create structure
struct TeamS{
    int teamID;
    string playsers[3] = {"", "", ""};
};

// Function prototypes
void Initialize (vector<TeamS> &TeamV, const int id[], const string members[][NUM_MEMBERS], int arraySize);

int main(){
    // Create vector to hold teams
    vector <TeamS> teams;
    const int teamID[NUM_TEAMS] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
    const string teamMembers[NUM_TEAMS][NUM_MEMBERS]{
        {"Ayo", "Angie", "Shawn"},
        {"Avalon", "Nehemiah", "James"},
        {"Zulekha", "Kyle", "Jay"},
        {"Mickey", "Minnie", "Daisy"},
        {"Donald", "Goofy", "Pluto"},
        {"Huey", "Dewey", "Louie"},
        {"Luke", "Leia", "Han"},
        {"Natasha", "Carol", "Wanda"},
        {"Harry", "Ron", "Hermione"},
        {"May", "Peter", "Mary Jane"}
    };

    // Exiting program
    cout << "Exiting program\n\n";
    system("pause");
    return 0;
}

void Initialize (vector<TeamS> &TeamV, const int id[], const string members[][NUM_MEMBERS], int arraySize){}