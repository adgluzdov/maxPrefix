#include <queue>
#include <iostream>
#include <string> 
#include <stdlib.h>
#include <stdio.h>

using namespace std;

string constructor(queue<char> myQueue){
	string return_;
	while(myQueue.size() != 0){
		return_ += myQueue.front();
		myQueue.pop();
	}
	return return_;
}

int minWidth(string* mass,int length){
	int min = 32000;
	for(int i=0;i<length;i++){
		if(mass[i].size() < min)
			min = mass[i].size();
	}
	return min;
}

string maxPrefix(string* mass, int length) {
	int level = 0;
	int minW = minWidth(mass,length);
	char character;
	bool _bool = true;
	queue<char> myQueue;
	while(level != minW){
		character = mass[0][level];
		for(int i=0;i<length;i++)
				if(mass[i][level] != character)
					return constructor(myQueue);
		myQueue.push(character);
		level++;
	}
	
	return constructor(myQueue);
}
