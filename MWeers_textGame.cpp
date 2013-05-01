/* Matt Weers 
Homeless - Text Game 
4/23/2013 */ 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <iostream>
#include "stdafx.h"
#include <Windows.h>
#include <chrono>
#include <random>

void coutc(int color, char* output);

int random(int min, int max);

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
std::default_random_engine generator (seed);

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
  int temp, wind, precip, health, choice, money, day;
  string name;

  temp = random(1,100);

  wind = random(1,50);

  health = 100;
  money = 0;
  day = 1;
  
  enum Colors { blue=1, green, cyan, red, purple, yellow, grey, dgrey, hblue, hgreen, hred, hpurple, hyellow, hwhite };

  cout << "What's your name? ";
  cin >> name;
  cout << "\nWelcome " <<name<<" you are a homeless person trying to survive one day at a time\n";
  
  do 
  {
      cout << " "<<endl;
      cout << "Day "<<day<<endl;
      cout << "\nIt is "<< temp<< " degrees"<<endl;
      cout << "The wind is blowing "<< wind<< " miles per hour"<<endl;
      cout << "You have "<< health<< " health points"<<endl;
      cout << "You have "<< money<< " dollars"<<endl;
	  cout << "\nPlease select an action."<<endl;
      cout << "1 - Rest\n";
      cout << "2 - Beg\n";
      cout << "3 - Nothing\n";
      choice = 2;
	  cin >> choice;
            
      switch (choice)  
      {
        case 1:
       		
			temp = random(1,100);

			wind = random(1,50);
			
			if (temp <= 10)
				if (wind <= 10)
					health = health + random(1,4);	
				else if (wind <= 20)
					health = health + random(1,2);
				else if (wind <= 30)
					health = health + random(0,1);
				else if (wind <= 40)
					health = health + random(0,1);
				else
					health = health + random(-100,0);

			else if (temp <= 20)
				if (wind <= 10)
					health = health + random(5,8);	
				else if (wind <= 20)
					health = health + random(1,4);
				else if (wind <= 30)
					health = health + random(1,3);
				else if (wind <= 40)
					health = health + random(1,2);
				else
					health = health + random(0,1);

			else if (temp <= 30)
				if (wind <= 10)
					health = health + random(5,12);	
				else if (wind <= 20)
					health = health + random(1,10);
				else if (wind <= 30)
					health = health + random(1,8);
				else if (wind <= 40)
					health = health + random(1,5);
				else
					health = health + random(1,3);

			else if (temp <= 40)
				if (wind <= 10)
					health = health + random(5,14);	
				else if (wind <= 20)
					health = health + random(1,12);
				else if (wind <= 30)
					health = health + random(1,10);
				else if (wind <= 40)
					health = health + random(1,8);
				else
					health = health + random(1,5);

			else if (temp <= 50)
				if (wind <= 10)
					health = health + random(5,16);	
				else if (wind <= 20)
					health = health + random(1,14);
				else if (wind <= 30)
					health = health + random(1,12);
				else if (wind <= 40)
					health = health + random(1,10);
				else
					health = health + random(1,8);

			else if (temp <= 60)
				if (wind <= 10)
					health = health + random(5,18);	
				else if (wind <= 20)
					health = health + random(1,16);
				else if (wind <= 30)
					health = health + random(1,14);
				else if (wind <= 40)
					health = health + random(1,12);
				else
					health = health + random(1,10);

			else if (temp <= 70)
				if (wind <= 10)
					health = health + random(10,20);	
				else if (wind <= 20)
					health = health + random(1,18);
				else if (wind <= 30)
					health = health + random(1,16);
				else if (wind <= 40)
					health = health + random(1,14);
				else
					health = health + random(1,12);

			else if (temp <= 80)
				if (wind <= 10)
					health = health + random(5,16);	
				else if (wind <= 20)
					health = health + random(1,14);
				else if (wind <= 30)
					health = health + random(1,12);
				else if (wind <= 40)
					health = health + random(1,10);
				else
					health = health + random(1,8);

			else if (temp <= 90)
				if (wind <= 10)
					health = health + random(5,12);	
				else if (wind <= 20)
					health = health + random(1,10);
				else if (wind <= 30)
					health = health + random(1,8);
				else if (wind <= 40)
					health = health + random(1,6);
				else
					health = health + random(1,4);

			else
				if (wind <= 10)
					health = health + random(1,8);	
				else if (wind <= 20)
					health = health + random(1,8);
				else if (wind <= 30)
					health = health + random(1,8);
				else if (wind <= 40)
					health = health + random(1,8);
				else
					health = health + random(1,8);
			






			if (temp <= 30)
				money = money - random(0,10);
			else if (temp <= 60)
				money = money - random(0,25);
			else if (temp <= 90)
				money = money;
			else
				money = money - random(0,10);
            break;




        case 2:

			temp = random(1,100);

			wind = random(1,50);

            if (temp <= 10)
				if (wind <= 10)
					money = money + random(0,10);
				else if (wind <= 20)
					health = money + random(0,10);
				else if (wind <= 30)
					money = money + random(0,10);
				else if (wind <= 40)
					money = money + random(0,10);
				else
					money = money + random(0,10);
		
			else if (temp <= 20)
				if (wind <= 10)
					money = money + random(0,20);
				else if (wind <= 20)
					health = money + random(0,20);
				else if (wind <= 30)
					money = money + random(0,20);
				else if (wind <= 40)
					money = money + random(0,20);
				else
					money = money + random(0,20);

			else if (temp <= 30)
				if (wind <= 10)
					money = money + random(0,30);
				else if (wind <= 20)
					health = money + random(0,30);
				else if (wind <= 30)
					money = money + random(0,30);
				else if (wind <= 40)
					money = money + random(0,30);
				else
					money = money + random(0,30);

			else if (temp <= 40)
				if (wind <= 10)
					money = money + random(0,35);
				else if (wind <= 20)
					health = money + random(0,35);
				else if (wind <= 30)
					money = money + random(0,35);
				else if (wind <= 40)
					money = money + random(0,35);
				else
					money = money + random(0,35);



			else if (temp <= 50)
				if (wind <= 10)
					money = money + random(0,40);
				else if (wind <= 20)
					health = money + random(0,40);
				else if (wind <= 30)
					money = money + random(0,40);
				else if (wind <= 40)
					money = money + random(0,40);
				else
					money = money + random(0,40);

			else if (temp <= 60)
				if (wind <= 10)
					money = money + random(0,45);
				else if (wind <= 20)
					health = money + random(0,45);
				else if (wind <= 30)
					money = money + random(0,45);
				else if (wind <= 40)
					money = money + random(0,45);
				else
					money = money + random(0,45);

			else if (temp <= 70)
				if (wind <= 10)
					money = money + random(0,50);
				else if (wind <= 20)
					health = money + random(0,50);
				else if (wind <= 30)
					money = money + random(0,50);
				else if (wind <= 40)
					money = money + random(0,50);
				else
					money = money + random(0,50);

			else if (temp <= 80)
				if (wind <= 10)
					money = money + random(0,40);
				else if (wind <= 20)
					health = money + random(0,40);
				else if (wind <= 30)
					money = money + random(0,40);
				else if (wind <= 40)
					money = money + random(0,40);
				else
					money = money + random(0,40);

			else if (temp <= 90)
				if (wind <= 10)
					money = money + random(0,30);
				else if (wind <= 20)
					health = money + random(0,30);
				else if (wind <= 30)
					money = money + random(0,30);
				else if (wind <= 40)
					money = money + random(0,30);
				else
					money = money + random(0,30);
			else
				if (wind <= 10)
					money = money + random(0,20);
				else if (wind <= 20)
					money = money + random(0,20);
				else if (wind <= 30)
					money = money + random(0,20);
				else if (wind <= 40)
					money = money + random(0,20);
				else
					money = money + random(0,20);

			 if (temp <= 10)
				if (wind <= 10)
					health = health - random(5,12);	
				else if (wind <= 20)
					health = health - random(5,14);
				else if (wind <= 30)
					health = health - random(5,16);
				else if (wind <= 40)
					health = health - random(5,18);
				else
					health = health - random(5,20);

			else if (temp <= 20)
				if (wind <= 10)
					health = health - random(1,10);	
				else if (wind <= 20)
					health = health - random(1,12);
				else if (wind <= 30)
					health = health - random(1,14);
				else if (wind <= 40)
					health = health - random(1,16);
				else
					health = health - random(1,18);

			else if (temp <= 30)
				if (wind <= 10)
					health = health - random(1,8);	
				else if (wind <= 20)
					health = health - random(1,10);
				else if (wind <= 30)
					health = health - random(1,12);
				else if (wind <= 40)
					health = health - random(1,14);
				else
					health = health - random(1,16);

			else if (temp <= 40)
				if (wind <= 10)
					health = health - random(1,6);	
				else if (wind <= 20)
					health = health - random(1,8);
				else if (wind <= 30)
					health = health - random(1,10);
				else if (wind <= 40)
					health = health - random(1,12);
				else
					health = health - random(1,14);

			else if (temp <= 50)
				if (wind <= 10)
					health = health - random(1,4);	
				else if (wind <= 20)
					health = health - random(1,6);
				else if (wind <= 30)
					health = health - random(1,8);
				else if (wind <= 40)
					health = health - random(1,10);
				else
					health = health - random(1,12);

			else if (temp <= 60)
				if (wind <= 10)
					health = health - random(1,2);	
				else if (wind <= 20)
					health = health - random(1,4);
				else if (wind <= 30)
					health = health - random(1,6);
				else if (wind <= 40)
					health = health - random(1,8);
				else
					health = health - random(1,10);

			else if (temp <= 70)
				if (wind <= 10)
					health = health - random(0,1);	
				else if (wind <= 20)
					health = health - random(1,2);
				else if (wind <= 30)
					health = health - random(1,4);
				else if (wind <= 40)
					health = health - random(1,6);
				else
					health = health - random(1,8);

			else if (temp <= 80)
				if (wind <= 10)
					health = health - random(1,10);	
				else if (wind <= 20)
					health = health - random(1,8);
				else if (wind <= 30)
					health = health - random(1,10);
				else if (wind <= 40)
					health = health - random(1,12);
				else
					health = health - random(1,15);

			else if (temp <= 90)
				if (wind <= 10)
					health = health - random(1,12);	
				else if (wind <= 20)
					health = health - random(1,10);
				else if (wind <= 30)
					health = health - random(1,12);
				else if (wind <= 40)
					health = health - random(1,14);
				else
					health = health - random(1,16);

			else
				if (wind <= 10)
					health = health - random(1,14);	
				else if (wind <= 20)
					health = health - random(1,12);
				else if (wind <= 30)
					health = health - random(1,14);
				else if (wind <= 40)
					health = health - random(1,16);
				else
					health = health - random(1,18);

            break;
        case 3:

			temp = random(1,100);

			wind = random(1,50);

			if (temp <= 10)
				health = health - random(1,25);
			else if (temp <= 20)
				health = health - random(1,20);
			else if (temp <= 30)
				health = health - random(1,18);
			else if (temp <= 40)
				health = health - random(1,16);
			else if (temp <= 50)
				health = health - random(1,14);
			else if (temp <= 60)
				health = health - random(1,12);
			else if (temp <= 70)
				health = health - random(1,10);
			else if (temp <= 80)
				health = health - random(1,15);
			else if (temp <= 90)
				health = health - random(1,20);
			else
				health = health - random(1,25);
  
            break;
       default:
			cout << "Enter valid choice"<<endl;
			continue;
      }
 
    if (health > 100)
		health = 100;
      
	if (money < 0)
		money = 0;
      
	day+=1;
      
	if (money >= 500)
		break;
        
  } 
  while (health>=0); 
  
  if (health <=0)
      coutc(red, "You are dead!\n");
  else 
      coutc(green, "Congrats! You can now afford a place to live!\n");

  coutc(grey, "");
  
  system("pause");
  
  return 0;
}
  
int random(int min, int max)
{
	std::uniform_int_distribution<int> random(min,max);

	return random(generator);
}


void coutc(int color, char* output)
{
   HANDLE handle= GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleTextAttribute( handle, color);
   cout<< output;
   SetConsoleTextAttribute( handle, color);
}