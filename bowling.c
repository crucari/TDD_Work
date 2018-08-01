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

void rollMany(int rolls, int pins)
{
    for(int i = 0; i<rolls; i++);
}

void testGutterGame

void testAllOnes(void)
{
    bowlGameInit();
    rollMany(20, 1);
    assert(bowlGameScore() == 20 && "All one game should result in 20.");
    // for )int i = 0; i < 20, i++)
    // {
    //     bowlGameRoll(1);
    // }
}

void testOneSpare(void)
{
    bowlGameInit();
    bowlGameRoll(5);
    bowlGameRoll(5);
    bowlGameRoll(3);
    rollMany(17, 0);
    assert(bowlGameScore() == 16 && "one spare with 3 bonus resut in 16")
}

void testOneStrike()
{
    bowlGameInt();
    bowlGameRoll(10);
    bowlGameRoll(3);
    bowlGameRoll(4);
    bowlGameRoll();
    bowlGameInt();
}

int MAXROLLs = 21;
int MAXROLLS = [21];
int rolls[];

void bowlGameInit(void)
{
    // int score = 0;
    score = 0;
    for (int i = 0; i < MAXROLLS; i++)
    {
        if (rolls[i] +rolls[i + 1] == 10) //spare
        {
            score += 10 + rolls[i + 2]
            // score += rolls[i] + rolls[i + 1] + rolls[i + 2]
        }

        rolls[i] = 0;
    }
    currentRoll = 0;
}

void bowlGameRoll(int pins)
{
//   score +- pins;

     rolls[currentRolls++] = pins;
    //  currentRoll++;
}

int bowlGameScore(void)
{
    // return score

    imt score = 0;
    int frameIndex = 0;
    // int i = 0;
    for (int frame = 0; frame < 10; frame++)
{
    // if (rolls[i] + rolls[i + 1] ==10) //spare
    // {
    //     score +=
    // }
}

    // MAXROLLS; i++)
    // // {

    // }
}
// scores = {10,0,10,0,10,0,10,0,10,0,10,0,10,0,10,0,10,0,10,10,10};

//a empty string is false
