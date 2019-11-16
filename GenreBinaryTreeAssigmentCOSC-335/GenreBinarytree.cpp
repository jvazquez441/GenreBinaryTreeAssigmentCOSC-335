#include <iostream>
#include <string>
#include "BSTree.h"

using namespace std;

int main()
{
	BSTree<string> GenreTree;


	//GenreTree.insert("E");
	//GenreTree.insert("D");
	//GenreTree.insert("C");
	//GenreTree.insert("B");
	//GenreTree.insert("A");

	//cout << "In Order: ";
	//GenreTree.printInOrder();
	//cout << "\nPre Order: ";
	//GenreTree.printPreOrder();
	//cout << "\nPost Order: ";
	//GenreTree.printPostOrder();


	//GenreTree.insert("a");

	//cout << "\nIn Order: ";
	//GenreTree.printInOrder();
	//cout << "\nPre Order: ";
	//GenreTree.printPreOrder();
	//cout << "\nPost Order: ";
	//GenreTree.printPostOrder();


	//cout << "\nLol";


	bool quitProg = false;
	int pick;
	string genreTitle = "";


	while (!quitProg)
	{

		system("CLS");
		cout << "****************************************************************" << endl;
		cout << "***************  Welcome to the Genre Database  ****************" << endl;
		cout << "****************************************************************" << endl;

		cout << "\n\n";
		cout << "         What would you like to do in our Genre Database?" << endl;
		cout << "            (1) Add a genre to our database." << endl;
		cout << "            (2) List all genres in pre-order." << endl;
		cout << "            (3) List all genres in in-order." << endl;
		cout << "            (4) Search for a genre in our database." << endl;
		cout << "            (5) Exit database and program." << endl;
		cout << "            Enter a number from 1 to 5: >> ";
		cin >> pick;

		switch (pick)
		{
		case 1:
			system("CLS");
			cout << "Please enter the title that you want to enter to our database: ";
			cin.clear();
			cin.ignore(20, '\n');
			getline(cin, genreTitle);

			if (GenreTree.search(genreTitle) == 0)
			{
				GenreTree.insert(genreTitle);
				cout << "\nGenre added to our Database." << endl;
			}
			else
			{
				cout << "\nGenre already exist.\n";
			}
			cin.clear();
			cin.ignore(20, '\n');
			system("pause");
			break;

		case 2:
			
			cout << "\nPrinting all genres in Pre-Order" << endl;
			GenreTree.printPreOrder();
			cout << endl;
			cin.clear();
			cin.ignore(20, '\n');
			system("pause");
			break;

		case 3:
			cout << "\nPrinting all genres in In-Order" << endl;
			GenreTree.printInOrder();
			cout << endl;
			cin.clear();
			cin.ignore(20, '\n');
			system("pause");
			break;
		case 4:
			system("CLS");
			cout << "Enter a genre to search in our Database: ";

			cin.clear();
			cin.ignore(20, '\n');
			getline(cin, genreTitle);
			if (GenreTree.search(genreTitle) == 0)
			{
				char addToTree = ' ';
				cout << "The genre " << genreTitle << " does not exist in our Database.\n";
				cout << "Would you like to add it? Y/N";
				cin >> addToTree;

				if (addToTree == 'Y' || addToTree == 'y')
				{
					cout << "\nGenre added to our Database.\n";
					GenreTree.insert(genreTitle);
				}
				else
				{
					cout << "\nGenre was not added.\n";
				}
			}
			else
			{
				cout << "\nThe genre " << genreTitle << " was found in our Database.\n";
			}
			cin.clear();
			cin.ignore(20, '\n');
			system("pause");
			break;

		case 5:
			quitProg = true;
			exit;
			break;

		default:
			system("CLS");
			cout << "\nInvalid input. Please try again\n";
			cin.clear();
			cin.ignore(20, '\n');
			system("pause");
			break;
		}
	}

	return 0;
}