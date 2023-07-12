#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>
#include"player.h"

using namespace std;

Player::Player(string name, string haircolor, string eyecolor, int height) :name{ name }, haircolor{ haircolor],eyecolor{eyecolor},height{height}{
	if(name.empty() || haircolor.empty() || eyecolor.empty())
		throw runtime_error("the parameters can't be empty!")
	if(height < 140 || height > 220)
		("pls enter a realistic height")
}
ostream& Player::print(ostream& o)const {
	o << "Name: " << name << "Haircolor: " << haircolor << "Eyecolor: " << eyecolor << "Height: " << height;
	return o;
}

ostream& operator<<(ostream& o, const Player p1) {
	return p1.print(o);
}