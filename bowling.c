#include <cs50.h>
#include <stdio.h>
#include <assert.h>

void tests(void);
void bowlGameInt(void);
void bowlGameRoll(int pins);
int bowlGameScore(void);
    // int five = 5;
    // assert(five == 5 && "five should contain the int 5");

int main(void)
{
    tests();
}

void tests(void)
{
    bowlGameInit();
    for (int i = 0; i< 20; i++)
    {
        bowlGameRoll(0);
    }
    assert(bowlGameScore() == 0 && "Gutter game should result in 0");

    bowlGameInit();
     for (int i = 0; i< 20; i++)
    {
        bowlGameRoll(0);
    }
    assert(bowlGameScore() == 20 && "All one game should result in 20");
}

void bowlGameInit(void)
{
    int score = 0;
}

void bowlGameRoll(int pins)
{

}

int bowlGameScore()
{
    return 0;
}
// scores = {10,0,10,0,10,0,10,0,10,0,10,0,10,0,10,0,10,0,10,10,10};

//a empty string is false
