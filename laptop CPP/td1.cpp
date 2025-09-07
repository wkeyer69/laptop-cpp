#include <iostream>
using namespace std;

string getQuantityPhrase(int x)  {
    if (x == 1) {
        return "a single";
    }
    else {
        return "more than one";
    }

}

string getApplesPluralized(int x) {
    if (x == 1) {
        return "apple";
    } else{
        return "apples"; 
    }
} 



int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}