#include <random>
#include <iostream>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd()); // Mersenne Twister random engine
    std::uniform_int_distribution<> dis(1, 100); // Range [1, 100]

    int random_number = dis(gen);
    std::cout << "Random number: " << random_number << '\n';
    return 0;
}