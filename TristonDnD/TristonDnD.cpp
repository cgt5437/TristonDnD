// Blaine Harper
// A CPP DnD Campaign
// Not really sure where this is going, but it may be fun.

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int options(int);
int bin_option(string, string);

void main_menu();

string player_name;

int main()
{
	cout << "Welcome to Blaine's Roleplaying Game!" << endl;
	cout << "This is a big WIP, so work with me, but we'll see how it goes!" << endl;
	main_menu();

	return 0;
}

void main_menu()
{
	int player_choice;
	cout << "\n\nMAIN MENU" << endl;
	cout << "1. New Game" << endl;
	cout << "2. Continue Game" << endl;
	cout << "3. Options" << endl;
	cout << "4. Exit" << endl;

	while(true)
	{
		cout << "> ";
		cin >> player_choice;
		if (player_choice == 1)
		{
			system("CLS");
			cout << "\nWhat is your name traveller? ";
			cin.ignore();
			getline(cin, player_name);
			cout << "Welcome " << player_name << " to this new adventure world!\n\nAre you ready?" << endl;
			
			int choice = options(1);
			if (choice == 1)
			{
				goto op1;
			}
			else if (choice == 0)
			{
				goto op0;
			}
		}
		else if (player_choice == 2)
		{
			
		}
		else if (player_choice == 3)
		{
		}
		else if (player_choice == 4)
		{
			
		}
		else
		{
			break;
		}
	}

op0:
	{
		cout << "Well... you're no fun." << endl;
		goto op99;
	}

op1:
	{
		system("CLS");
		cout << endl << "You find yourself in a dark forest late at night \n\n"
			<< "You hear nothing but the howling of the wind and the rustling of the leaves \n\n"
			<< "Ahead of you there are two paths with a old sign that reads: \n\n"
			<< "     (Left) Triston's Cabin \n"
			<< "     (Right) Chrissyvale \n\n" << endl;
		cout << "Which path would you choose?" << endl;

		// Options(2) is l/r option
		// op2 is Triston's Cabin
		// op3 is Chrissyvale
		if (options(2) != 0)
		{
			goto op2;
		}
		else
		{
			goto op3;
		}
	}

op2:
	{
		system("CLS");
		cout << "\nYou head down the path to Triston's Cabin...\n" << endl;
		cout << "As you approach the cabin you can see the faint light of a candle through one of the windows...\n" << endl;
		cout << "You decide you can either ";
		int choice = bin_option("go closer", "turn around");
		if (choice == 0)
		{
			goto op21;
		}
		else
		{
			goto op1;
		}
	}

op21:
	{
		goto op99;
	}

op3:
	{
		system("CLS");
		cout << "\nYou head down the path to Chrissyvale" << endl;
		goto op99;
	}

op99:
	{
		cout << "\n\nYou've reached an unfinished path! Sorry!" << endl;
		cout << "2019 (c) Blaine Harper" << endl;

		system("pause");
	}
}

int bin_option(string option_one, string option_two)
{
	int player_choice; 
	int player_response;
	while (true)
	{
		cout << option_one << " (0) or " << option_two << " (1)??\n> ";
		cin >> player_response;
		if (player_response == 0)
		{
			player_choice = 0;
			break;
		}
		else if (player_response == 1)
		{
			player_choice = 1;
			break;
		}
		else
		{
			cout << "Try again!" << endl;
		}
	}
	return player_choice;
}

int options(int default_option)
{
	int player_choice;
	string player_response;

	if (default_option == 1)
	{
		// Response 1 = Yes
		// Response 0 = No
		while (true)
		{
			cout << "Yes (y) or No (n)?\n> ";
			cin >> player_response;
			if (player_response.rfind("y", 0) == 0)
			{
				player_choice = 1;
				break;
			}
			else if (player_response.rfind("n", 0) == 0)
			{
				player_choice = 0;
				break;
			} 
			else
			{
				cout << "Try again!" << endl;
			}
		}
	}
	if (default_option == 2)
	{
		// Response 1 = Left
		// Response 0 = Right
		while (true)
		{
			cout << "Left (l) or Right (r)?\n> ";
			cin >> player_response;
			if (player_response.rfind("l", 0) == 0)
			{
				player_choice = 1;
				break;
			}
			else if (player_response.rfind("r", 0) == 0)
			{
				player_choice = 0;
				break;
			}
			else
			{
				cout << "Try again!" << endl;
			}
		}
	}
	return player_choice;
}
