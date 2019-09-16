Purpose: To Practice the use of a vector and search algorithms

Specifications: This program will allow the user to see a list of teams, or search for a team using an ID
1. Structure definition
    First define struct TeamS with an intefer field to hold an ID, and an array of strings with three elements to hold the names of the team members. In the main function, delcare an empty vector of TeamV and the following arrays(note the constants being used):

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

2. Create and load data into the vector
    Call a function with the following prototype and pass in the empty vector and the arrays
        void Initialize (vector<TeamS> &TeamV, const int id[], const string members[][NUM_MEMBERS], int arraySize);
    The function should place into the vector the data in the arrays. Remember: Each element of the vector is a TeamS structure
    Example
        The first element of the vector will store team 123 with memebers: Ayo, Angie, and Shawn
        The second element of the vector will will store team 321 with memebrs: Avalon, Nehemiah, and James

3. displayTeams function
    From main, call the displayTeams function(see prototype below) to show theat your vector has been populated with the team information. The function simply displays the contents of the vecotr
        void displayTeams(const vector <TeamS> &TeamV);

4. The menu Function
    Next, place a loop in your main function such that in each iteration the user sees a menu and has the chance to enter a choice
    Call a function with the following prototype to display the menu:
        void menu()
    If the user selects menu option 1, call the displayTeams function to display the list of teams

5. Searching for a team - Linear Search
    If the user selects menu option 2, ask for the Team ID the user wants to search for and call a function with the listed prototype. The function should perform a linear search on the teamV vector for the matching id. If a matching id is found the function should display the team information for the matching id. If not found display "Team ID not found"
        void linSearchTeams(const vector <TeamS> &TeamV, int id);
    Make sure that this function performs a linerar search and displays only the vector entry for the matching id if found

6. Searching for a team - Binary Search
If the user selects menu option 3, ask for the Team ID the user wants to search for and call a function with the listed prottype. The function should perform a binary search on the teamV vector for the matching id. If a matching id is found the function should display the team information for the matching id. If not found display "Team ID not found"
    void binSearchTeams(const vector <TeamS> &TeamV, int id);
Make sure that this function performs a binary search and displays only the vector entry for the matching id if found

7. Ending the program
    If the user selects menu option 4. stop the program
    Display the following message: "Exiting program"