//Computer guesser.
#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
int main(){
	srand(static_cast<unsigned int>(time(0)));
	//Game header info.
	std::string header = "Welcome to the number guessing game!!! All you have to do is to guess the computer's number in just 3 tries.\n\n";
	std::cout<<header<<"Guess. Hint - the number is between 1 - 100\n";
	int guess;
	int tries = 0;
	int computer_random_number =( rand() % 100) + 1;
	
	std::cin>>guess;
	do{
		if(guess == computer_random_number){
			std::cout<<"You found the answer is just "<<tries<<" tries!!!\n";
			}else{
				tries += 1;
				std::cout<<"Try again!!!\n";
				std::cin>>guess;
				}
	}while(tries <= 3);
	if(tries > 3){
		std::cout<<"You lost!!\n";
		std::cout<<"This was the answer "<<computer_random_number<<"\n";
	}
}