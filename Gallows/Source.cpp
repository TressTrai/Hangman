#include <iostream>
#include <fstream>
#include <windows.h>
#include <ctime>
#include <string>

using namespace std;

char getUserChar()
{
	cout << "������� �����: ";
	while (true)
	{
		string UserString;
		string ABC = "����������������������������������������������������������������ި";
		cin >> UserString;

		if (UserString.length() == 1 && ABC.find(UserString, 0) < 33 && ABC.find(UserString, 0) != -1)
			return ABC[ABC.find(UserString, 0)+33];
		else if (UserString.length() == 1 && ABC.find(UserString, 0) >= 33 && ABC.find(UserString, 0) != -1)
			return UserString[0];
		else cout << "\n������� ���������� ������� �����: ";
	}
}
bool getGame()
{
	while (true)
	{
		string Check;
		cout << "1 - ��\n";
		cout << "0 - ���\n";
		cin >> Check;
		if (Check == "1")
			return true;
		else if (Check == "0")
			return false;
		else cout << "������������ ��������\n";
	}

}

//--------��������� ��������---------------
void DrawZero()
{
	cout << "    ____________________\n";
	cout << "     |                 |\n";
	cout << "     |                 |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "_______________________|_____\n\n";
}
void DrawOne()
{
	cout << "    ____________________\n";
	cout << "     |                 |\n";
	cout << "     |                 |\n";
	cout << "    ---                |\n";
	cout << "  /     \\              |\n";
	cout << "  \\     /              |\n";
	cout << "    ---                |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "_______________________|_____\n\n";
}
void DrawTwo()
{
	cout << "    ____________________\n";
	cout << "     |                 |\n";
	cout << "     |                 |\n";
	cout << "    ---                |\n";
	cout << "  /     \\              |\n";
	cout << "  \\     /              |\n";
	cout << "    ---                |\n";
	cout << "     |                 |\n";
	cout << "     |                 |\n";
	cout << "     |                 |\n";
	cout << "     |                 |\n";
	cout << "     |                 |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "_______________________|_____\n\n";
}
void DrawThree()
{
	cout << "    ____________________\n";
	cout << "     |                 |\n";
	cout << "     |                 |\n";
	cout << "    ---                |\n";
	cout << "  /     \\              |\n";
	cout << "  \\     /              |\n";
	cout << "    ---                |\n";
	cout << "     |                 |\n";
	cout << "    /|                 |\n";
	cout << "   / |                 |\n";
	cout << "  /  |                 |\n";
	cout << " /   |                 |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "_______________________|_____\n\n";
}
void DrawFour()
{
	cout << "    ____________________\n";
	cout << "     |                 |\n";
	cout << "     |                 |\n";
	cout << "    ---                |\n";
	cout << "  /     \\              |\n";
	cout << "  \\     /              |\n";
	cout << "    ---                |\n";
	cout << "     |                 |\n";
	cout << "    /|\\                |\n";
	cout << "   / | \\               |\n";
	cout << "  /  |  \\              |\n";
	cout << " /   |   \\             |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "                       |\n";
	cout << "_______________________|_____\n\n";
}
void DrawFive()
{
	cout << "    ____________________\n";
	cout << "     |                 |\n";
	cout << "     |                 |\n";
	cout << "    ---                |\n";
	cout << "  /     \\              |\n";
	cout << "  \\     /              |\n";
	cout << "    ---                |\n";
	cout << "     |                 |\n";
	cout << "    /|\\                |\n";
	cout << "   / | \\               |\n";
	cout << "  /  |  \\              |\n";
	cout << " /   |   \\             |\n";
	cout << "    /                  |\n";
	cout << "   /                   |\n";
	cout << "  /                    |\n";
	cout << " /                     |\n";
	cout << "/                      |\n";
	cout << "                       |\n";
	cout << "_______________________|_____\n\n";
}
void DrawSix()
{
	cout << "    ____________________\n";
	cout << "     |                 |\n";
	cout << "     |                 |\n";
	cout << "    ---                |\n";
	cout << "  /     \\              |\n";
	cout << "  \\     /              |\n";
	cout << "    ---                |\n";
	cout << "     |                 |\n";
	cout << "    /|\\                |\n";
	cout << "   / | \\               |\n";
	cout << "  /  |  \\              |\n";
	cout << " /   |   \\             |\n";
	cout << "    / \\                |\n";
	cout << "   /   \\               |\n";
	cout << "  /     \\              |\n";
	cout << " /       \\             |\n";
	cout << "/         \\            |\n";
	cout << "                       |\n";
	cout << "_______________________|_____\n\n";
}
//-----------------------------------------

void DrawGallows(string wrongChars)
{
	switch (wrongChars.length())
	{
	case 0:
		DrawZero();
		break;
	case 1:
		DrawOne();
		break;
	case 2:
		DrawTwo();
		break;
	case 3:
		DrawThree();
		break;
	case 4:
		DrawFour();
		break;
	case 5:
		DrawFive();
		break;
	case 6:
		DrawSix();
		break;
	default:
		cout << "ERROR";
		break;
	}
}

bool GameResult(string keyWord,string UserWord, string &wrongChars)
{
	bool Game = true;
	char UserChar;

	while (Game)
	{
		cout << "�����: ";
		for (int i = 0; i < UserWord.length(); i++) cout << UserWord[i] << ' ';
		cout << "\n\n";

		cout << "������(" << wrongChars.length() << ") : " << wrongChars << "\n\n";

		DrawGallows(wrongChars);

		if (wrongChars.length() == 6)
		{
			system("cls");
			Game = false;
			return false;
		}
			

		if (Game)
		{
			UserChar = getUserChar();

			bool Mistake = true;
			for (int i = 0; i < keyWord.length(); i++)
			{
				if (keyWord[i] == UserChar)
				{
					UserWord[i] = UserChar;
					Mistake = false;
				}

			}
			if (Mistake && wrongChars.find(UserChar, 0) == -1) wrongChars = wrongChars + UserChar;

			if (keyWord == UserWord)
			{
				system("cls");
				return true;
				Game = false;
			}

		}
		system("cls");

	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));

	string keyWord = "", UserWord = "", wrongChars = "";
	char UserChar;
	bool Game = false, victory = false;
	ifstream f;
	int keyNumber;
	string* words = new string[256];

	f.open("words.txt");
	
	int j = 0;
	while (getline(f, words[j])) ++j;
	
	f.close();


	cout << "-----------------��������-----------------\n";
	cout << "������� ����:\n";
	cout << "1. ��������� ����������� �����.\n";
	cout << "2. �� ����� ��������� ������� �������� ���������������, ������� ���������� ��� ��������� �����.\n";
	cout << "3. ����� �� ����� ��������� ����������� ��������.\n";
	cout << "4. �� ����������� �����, ������� ����� ������� � ��� �����.\n";
	cout << "5. ���� �� ���������� -> ��������� ����� �� � ������ ������������� ������.\n";
	cout << "����� ��������� ����� ��� ����� � ������� � �������� ������������ ��������, �������� � ����� ������\n";
	cout << "6. �� ����������� ���������� ����� �� ��� ���, ���� �� �������� ��� �����.\n";
	cout << "�� ������ ������������ ����� ��������� ��������� ���� ����� ����������� � ��������(������, ����, ��� ����, ��� ����).\n";
	cout << "7. ���� ���������� ��������� ������, ��� �� ������ ������� ����� -> ��������� ���������.\n";
	cout << "����� ���������� �� :)\n";
	cout << "������� ����!\n";
	cout << "------------------------------------------\n\n";

	cout << "������ �������?\n";
	Game = getGame();
	system("cls");

	while (Game)
	{
		keyNumber = rand() % j;
		keyWord = words[keyNumber];
		UserWord = "";
		for (int i = 0; i < keyWord.length(); i++)	UserWord = UserWord + "_";
		wrongChars = "";

		victory = GameResult(keyWord, UserWord, wrongChars);


		if (victory) cout << "�����������! �� ��������! :)\n";

		else cout << "��������, �� �� ��������� :(\n";

		cout << "�����: " << keyWord << "\n";
		cout << "������(" << wrongChars.length() << ") : " << wrongChars << "\n\n";
		DrawGallows(wrongChars);

		cout << "������ ��� ��� �������?\n";
		Game = getGame();

		system("cls");
	}
	return 0;
}