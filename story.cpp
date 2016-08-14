#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	string name;
	string gender;
	string empty, empty2, empty3, empty4, empty5, empty6;
	string uroom;
	cout << "Welcome to this new interactive story!!!" << endl;
	Sleep(2500);
	cout << "So...";
	Sleep(1000);
	cout << " " << "lets begin the story!" << endl;
	Sleep(1000);
	system("cls");
	Sleep(1000);
	cout << "So, tell me your name..." << endl;
	cin >> name;
	cout << "So your name is " << name << endl;
	Sleep(1000);
	cout << "Now, are you a boy or a girl?" << endl;
	
	while(gender != "boy" || gender != "girl")
	{
		cin >> gender;
		if(gender == "boy")
		{
			cout << "So your a boy!" << endl;
		}

		else if(gender == "girl")
		{
			cout << "So your a girl!" << endl;
		}

		else
		{
			cout << "You did not chose your gender. Now, are you a boy or a girl?" << endl;
		}
	}

	cout << "Great! So, Now that we know who you are, lets dive straight into this story" << endl;
	Sleep(1000);
	cout << "You wake up in your room, and see 3 things.";
	Sleep(1000);
	cout << " " << "Stairs leading down";
	Sleep(1000);
	cout << " " << "your computer";
	Sleep(1000);
	cout << " " << "and lastly, your game console.";
	Sleep(1000);
	cout << "Now, what do you want to do? Choose from Stairs, Computer, Game.";
	while(uroom != "Stairs" || uroom != "Computer" || uroom != "Game")
	{
		cin >> uroom;
		if( uroom == "Stairs")
		{
			cout << "You silently creep down the stairs" << endl;
		}

		else if(uroom == "Computer")
		{
			cout << "You booted up your computer" << endl;
		}

		else if(uroom == "Game")
		{
			cout << "You load up your favorite game, Pokemon." << endl;
		}

		else
		{
			cout << "You did not choose one out of the three options given!";
			Sleep(1000);
			cout << " " << "Now, what do you want to do? Choose from Stairs, Computer, Game.";
		}
	}
}

