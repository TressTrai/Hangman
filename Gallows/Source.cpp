#include <iostream>
#include <fstream>
#include <windows.h>
#include <ctime>
#include <string>

using namespace std;

char getUserChar()
{
	cout << "Введите букву: ";
	while (true)
	{
		string UserString;
		string ABC = "йцукенгшщзхъфывапролджэячсмитьбюёЙЦУКЕНГШЩЗХЪФЫВАПРОЛДЖЭЯЧСМИТЬБЮЁ";
		cin >> UserString;

		if (UserString.length() == 1 && ABC.find(UserString, 0) < 33 && ABC.find(UserString, 0) != -1)
			return ABC[ABC.find(UserString, 0)+33];
		else if (UserString.length() == 1 && ABC.find(UserString, 0) >= 33 && ABC.find(UserString, 0) != -1)
			return UserString[0];
		else cout << "\nВведите пожалуйста русскую букву: ";
	}
}
bool getGame()
{
	while (true)
	{
		string Check;
		cout << "1 - Да\n";
		cout << "0 - Нет\n";
		cin >> Check;
		if (Check == "1")
			return true;
		else if (Check == "0")
			return false;
		else cout << "Некорректное значение\n";
	}

}

//--------Отрисовка виселицы---------------
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
		cout << "Слово: ";
		for (int i = 0; i < UserWord.length(); i++) cout << UserWord[i] << ' ';
		cout << "\n\n";

		cout << "Ошибки(" << wrongChars.length() << ") : " << wrongChars << "\n\n";

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


	cout << "-----------------ВИСЕЛИЦА-----------------\n";
	cout << "Правила игры:\n";
	cout << "1. Компьютер «загадывает» слово.\n";
	cout << "2. На экран выводится столько символов «подчеркивания», сколько необходимо для написания слова.\n";
	cout << "3. Затем на экран выводится изображение виселицы.\n";
	cout << "4. Вы предлагаете букву, которая может входить в это слово.\n";
	cout << "5. Если вы угадываете -> компьютер пишет ее в нужных незаполненных местах.\n";
	cout << "Иначе компьютер пишет эту букву в стороне и начинает дорисовывать виселицу, добавляя к петле голову\n";
	cout << "6. Вы продолжаете отгадывать буквы до тех пор, пока не отгадает все слово.\n";
	cout << "За каждый неправильный ответ компьютер добавляет одну часть повешенного к виселице(голова, тело, две руки, две ноги).\n";
	cout << "7. Если повешенный нарисован раньше, чем вы смогли угадать слово -> компьютер побеждает.\n";
	cout << "Иначе побеждаете вы :)\n";
	cout << "Хорошей игры!\n";
	cout << "------------------------------------------\n\n";

	cout << "Хотите сыграть?\n";
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


		if (victory) cout << "Поздравляем! Вы выиграли! :)\n";

		else cout << "Сожалеем, но вы проиграли :(\n";

		cout << "Слово: " << keyWord << "\n";
		cout << "Ошибки(" << wrongChars.length() << ") : " << wrongChars << "\n\n";
		DrawGallows(wrongChars);

		cout << "Хотите еще раз сыграть?\n";
		Game = getGame();

		system("cls");
	}
	return 0;
}