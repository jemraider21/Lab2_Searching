#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Create global variables
const int NUM_TEAMS = 10;
const int NUM_MEMBERS = 3;

// Create structure
struct TeamS
{
	int teamID;
	string players[3] = {"", "", ""};
};

// Function prototypes
void Initialize(vector<TeamS> &TeamV, const int id[], const string members[][NUM_MEMBERS], int arraySize);
void displayTeams(const vector<TeamS> &TeamV);
int menu();
void linSearchTeams(const vector<TeamS> &TeamV, int id);
void binSearchTeams(const vector<TeamS> &TeamV, int id);

int main()
{
	// Create vector to hold teams
	vector<TeamS> teams;
	const int teamID[NUM_TEAMS]{100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
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
		{"May", "Peter", "Mary Jane"}};

	// Put data into vector
	Initialize(teams, teamID, teamMembers, 10);

	int choice, searchID;
	do
	{
		// Get user input for the menu
		choice = menu();
		switch (choice)
		{
		// Display the teams
		case 1:
			displayTeams(teams);
			break;
		case 2:
			cout << "Enter an id: ";
			cin >> searchID;
			linSearchTeams(teams, searchID);
			break;
		case 3:
			cout << "Enter an id: ";
			cin >> searchID;
			binSearchTeams(teams, searchID);
			break;
		default:
			break;
		}
	} while (choice != 4);

	// Exiting program
	cout << "Exiting program\n\n";
	system("pause");
	return 0;
}

void Initialize(vector<TeamS> &TeamV, const int id[], const string members[][NUM_MEMBERS], int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		// Put data into temporary structure
		TeamS temp;
		temp.teamID = id[i];
		for (int j = 0; j < NUM_MEMBERS; j++)
		{
			string name = members[i][j];
			temp.players[j] = name;
		}

		// Put temp structure into vector
		TeamV.push_back(temp);
	}
}

void displayTeams(const vector<TeamS> &TeamV)
{
	for (TeamS temp : TeamV)
	{
		printf("Members of Team %i: \n\t", temp.teamID);
		for (int i = 0; i < NUM_MEMBERS; i++)
		{
			string name = temp.players[i];
			if ((i + 1) == NUM_MEMBERS)
			{
				cout << "and " << name;
			}
			else
			{
				cout << name << ", ";
			}
		}

		cout << endl;
	}

	cout << endl
		 << endl;
}

int menu()
{
	cout << "1. Display The Teams" << endl;
	cout << "2. Search For A Team - Linear" << endl;
	cout << "3. Search For A Team - Binary" << endl;
	cout << "4. Exit the program" << endl
		 << endl;

	cout << "Enter your choice: ";
	int choice, looper = 0;

	do
	{
		cin >> choice;
		if (choice < 1 || choice > 4)
		{
			cout << "Wrong input(out of range). Please try again: ";
		}
		else
		{
			looper = 1;
		}
	} while (looper == 0);

	return choice;
}

void linSearchTeams(const vector<TeamS> &TeamV, int id)
{
	bool found = false;
	int position = -1;
	int index = 0;

	while (found == false && index < NUM_TEAMS)
	{
		int teamID = TeamV[index].teamID;
		if (teamID == id)
		{
			found = true;
			cout << "Team ID found. Displaying team members: ";
			for (int i = 0; i < NUM_MEMBERS; i++)
			{
				cout << TeamV[index].players[i] << " ";
			}
			cout << endl
				 << endl;
		}

		index++;
	}

	if (found == false)
	{
		cout << "Team ID not found\n\n";
	}
}

void binSearchTeams(const vector<TeamS> &TeamV, int id)
{
	int first = 0;
	int last = NUM_TEAMS - 1;
	bool found = false;
	int position = -1;

	while (found != true and first <= last)
	{
		int middle = first + (last - first) / 2;
		if (TeamV[middle].teamID == id)
		{
			found = true;
			cout << "Team ID found. Displaying team members: ";
			for (int i = 0; i < NUM_MEMBERS; i++)
			{
				cout << TeamV[middle].players[i] << " ";
			}
			cout << endl
				 << endl;
		}
		else if (TeamV[middle].teamID > id)
		{
			last = middle - 1;
		}
		else
		{
			first = middle + 1;
		}
	}

	if (found == false)
	{
		cout << "Team ID not found\n\n";
	}
}