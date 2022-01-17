#include<iostream>
#include<Windows.h>
#include<string>
#include<conio.h>
using namespace std;

struct Resource {
	int water;
	int coffee_beans;
	int espresso_beans;
	int milk;
	int sugar;
public:
	Resource operator-(Resource stock) {
		Resource a;
		a.water = water - stock.water;
		a.coffee_beans = coffee_beans - stock.coffee_beans;
		a.espresso_beans = espresso_beans - stock.espresso_beans;
		a.milk = milk - stock.milk;
		a.sugar = sugar - stock.sugar;
		return a;
	}
};
struct Price {
	float price_coffee;
	float price_espresso;
	float price_milk;
	float price_sugar;
};
struct User {
	float needed_money;
	float inserted_money;
	float output_change;
};
struct Machine {
	Price drink{ 1.0f, 1.0f, 0.1f, 0.1f };
	Resource stock{};
	Resource drink_resource{};
	User user_drink{};
	char x, y, z;
	char passwort[6]{ 'K','a','f','f','e','e' };
	char eingabe[6]{};
};
Machine kaffeeautomat;
void kaffeeautomatInterface() {
	cout << "\nHerzlich willkommen beim Kaffe-Automaten!\n\n";
	cout << "Preis pro Tasse :\nKaffee oder Espresso \t1 Euro\nMilch oder Zucker \t0,1 Euro\n\n\n";
	cout << "Bitte w\x84hlen Sie aus :\n(k) Kaffee\n(e) Espresso\n(s) Service - Mode\n";
}
bool passwordinput(Machine* k) {
	cout << "Bitte geben Sie das Passwort ein: ";
	for (int i = 0; i < 6; i++) 
	{
		k->eingabe[i] = _getch();
		cout << "*";
	}
	for (int i = 0; i < 6; i++)
	{
		if (k->passwort[i] != k->eingabe[i])
		{
			printf("Falsches Passwort! Zugang zum Service Mode wird verweigert!");
			return false;
		}
	}
	return true;
}
bool printInformation(Machine k) {
	if (passwordinput(&kaffeeautomat) == true) {
		cout << "\n--------------------------------------------------\n";
		cout << "|Kaffee: " << k.stock.coffee_beans << " g |";
		cout << " |Milch: " << k.stock.milk << " ml |\n";
		cout << "|Espresso: " << k.stock.espresso_beans << " g |";
		cout << " |Wasser: " << k.stock.water << " ml |\n";
		cout << "|Zucker: " << k.stock.sugar << " g |";
		cout << "\n--------------------------------------------------\n";
		cout << "Menge pro Tasse\n";
		cout << "|Kaffee: 5 g | |Milch: 30 ml |\n";
		cout << "|Espresso 5 g | | Wasser f\x81r Kaffee 125 ml |\n";
		cout << "|Zucker 3 g | | Wasser f\x81r Espresso 25 ml |\n";
		cout << "\n--------------------------------------------------\n";
	}
	return true;
}
bool choice_user(Machine* k) {
		k->user_drink = {};
		cin >> k->x;
		cout << endl;
		if (k->x == 'k') {
			cout << "\nsie haben sich f\x81r die auswahl kaffee k entschieden\n";
			k->drink_resource = { 125, 5, 0, 0, 0 };
			k->user_drink.needed_money += k->drink.price_coffee;
		}
		if (k->x == 'e') {
			cout << "\nsie haben sich f\x81r die auswahl espresso e entschieden\n";
			k->drink_resource = { 25, 0, 5, 0, 0 };
			k->user_drink.needed_money += k->drink.price_espresso;
		}
		if (k->x == 's') {
			cout << "\nservice-mode\n";
			printInformation(kaffeeautomat);
			return false;
		}
			cout << "\nm\x94 \bchten sie Zucker(j/n)?\n";
			cin >> k->z;
			if (k->z == 'j') {
				k->drink_resource.sugar = 3;
				k->user_drink.needed_money += k->drink.price_sugar;
			}
			cout << "\nm\x94 \bchten sie Milch(j/n)?\n";
			cin >> k->y;
			if (k->y == 'j') {
				k->drink_resource.milk = 30;
				k->user_drink.needed_money += k->drink.price_milk;
			}
			if (k->y != 'j' && 'n' && k->z != 'j' && 'n')
			{
				cout << "\nfalsche Eingabe!\n";
				return false;
			}
			return true;
}
bool physical_money(Machine* k) {
	do {
		if (k->x == 's') {
			system("pause");
			return false;
		}
		cout << "\nBitte " << k->user_drink.needed_money << " eingeben und Enter dr\x81 \bcken\n";
		cin >> k->user_drink.inserted_money;
		k->user_drink.output_change = k->user_drink.inserted_money - k->user_drink.needed_money;
		if (k->user_drink.output_change > 0) {
			cout << "Ihr Getr\x84nk wird zubereitet . . .\nBitte " << k->user_drink.output_change << " Euro R\x81 \bckgeld und das Getr\x84k entnehmen -:) und eine Taste dr\x81 \bcken\n";
		};
		if (k->user_drink.output_change == 0) {
			cout << "Ihr Getr\x84nk wird zubereitet . . .\nBitte das Getr\x84k entnehmen -:) und eine Taste dr\x81 \bcken\n";
		}
		else {
			cout << "Zu wenig Geld Bestellung abgebrochen.\n";
			return false;
		}
		k->stock = k->stock - k->drink_resource;
		system("pause >nul");
	} while (k->user_drink.output_change < 0);
	return true;
}
int main() {
	kaffeeautomat.stock = { 5000, 1000, 1000, 1000, 500 };
	while (true) {
		kaffeeautomatInterface();
		choice_user(&kaffeeautomat);
		physical_money(&kaffeeautomat);
	};
	return 0;
}