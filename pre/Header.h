#pragma once
#include<iostream>
#include<string>
using namespace std;
struct Animal
{
	string title_of_animal{ NULL };
	string class_of_animal{ NULL };
	string nick_of_animal{ NULL };
	string voice{ NULL };
} animals[100];
void Search_name_voice(int k, string name)
{
	int count{ 0 };
	for (int i = 1; i <= k; i++)
	{
		if (animals[i].title_of_animal == name)
		{
			count++;
			cout << animals[i].voice;
			cout << "\n\n";
		}
	}
	if (count == 0)
	{
		cout << "Ничего не найдено.\n\n";
	}
}
