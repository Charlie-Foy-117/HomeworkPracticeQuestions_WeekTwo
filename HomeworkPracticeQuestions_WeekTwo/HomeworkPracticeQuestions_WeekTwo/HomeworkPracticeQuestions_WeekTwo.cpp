// HomeworkPracticeQuestions_WeekTwo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>    
#include <vector>

int RecAreaCalc()
{
    int width = 0;
    int length = 0; 
    int area = 0;
    std::cout << "Please enter the rectangles length" << std::endl;
    std::cin >> length;
    std::cout << "Please enter the rectangle width" << std::endl;
    std::cin >> width;
    area = width * length;
    return area;
}

int RandScore(int minScore, int maxScore)
{
    int range = maxScore - minScore;
    int result = minScore + rand() % range;
    
    return result;
}

int main()
{
    //problem one
    /*
    //variables
    std::string playerWord;
    std::string badWord = "bad";
    std::string fillerWord = "BLEEP";

    std::cout << "Please enter a word" << std::endl;
    std::cin >> playerWord;

    //output
    if (playerWord == badWord)
    {
        std::cout << "You entered " << fillerWord << std::endl;
    }
    else
    {
        std::cout << "You entered " << playerWord << std::endl;
    }
    */

    //problem two
    /*
    //variables
    int numberOfBottles = 99;
    std::string playerChoice;
    std::string replay;

    do
    {
        //input
        std::cout << "There are " << numberOfBottles << " bottles on the wall" << std::endl
            << "Would you like to drink one - yes(y) or no(n)" << std::endl;
        std::cin >> playerChoice;

        if (playerChoice == "y")
        {
            --numberOfBottles;
            std::cout << numberOfBottles << " bottles of beer on the wall" << std::endl;
            
        }
        if (numberOfBottles == 0)
        {
            std::cout << "No more bottles on the wall" << std::endl;
            playerChoice = "n";
        }
    } while (playerChoice == "y");
    */

    //problem three
    /*
    std::cout << "The area of the rectangle is " << RecAreaCalc() << std::endl;
    */

    //problem four
    
    srand(time(NULL));
    int minScore = 10;
    int maxScore = 500;
    int score1 = RandScore(minScore, maxScore);
    std::cout << "Score " << score1 << std::endl;
    

    //problem five
    /*
    std::string addMore = "n";
    std::vector<std::string> playerNames;   
    do 
    {
        addMore = "n";
        std::string nameInput;
        
        std::cout << "Please enter a players name" << std::endl;
        std::cin >> nameInput;
        playerNames.push_back(nameInput);
        std::cout << "Would you like to enter another name y or n";
        std::cin >> addMore;

    } while (addMore == "y");

    int vectorSize = playerNames.size();
    for (size_t i = 0; i < vectorSize; i++)
    {
        std::cout << playerNames[i] << std::endl;
    }
    */
}