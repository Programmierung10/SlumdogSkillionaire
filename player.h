#ifndef PLAYER_H
#define PLAYER_H

#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>

class Player {
	string name;
	string haircolor;
	string eyecolor;
	int height;
	/*int weight;
	int BMI;
	int health;
	int charisma;
	int reputation;
	int money;
	int education;


	vector<Jobs>job;
	vector<Sports>sport;
	vector<Cars>car;
	vector<Girlfriends>girlfriend;
	vector<Lifestyles> lifestyle;
	vector<Nutritions> nutrition;
	*/
public:
	Player(string name, string haircolor, string eyecolor, int height);

	ostream& print(ostream& o)const;
};
ostream& operator<<(ostream& o, const Player p1);



#endif