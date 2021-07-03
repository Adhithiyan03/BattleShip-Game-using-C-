#include<bits/stdc++.h>
using namespace std;
void instructions()//this is the instruction function.
{
 cout<<"WELCOME TO THE BATTLE SHIP GAME."<<endl<<"THE INSTRUCTIONS ARE SIMPLE."<<endl;
 cout<<"1.This is a two player game."<<"the players can together decide the size of the five ships."<<endl;
 cout<<"2.Then player wil have select the pos of ship by giving the first coordinate of ship and telling the direction in whih the ship is placed."<<endl;
 cout<<"3.Now the scond player comes to attack by selcting coordinates of ship.";
cout<<"For each correct guess player recieve 2 point and negative of 1 for wrong guess"<<endl;
cout<<"after all ship are attacked the score of player 2 is exibhited."<<endl;
cout<<"now the vice versa happens and the one with higher score is declared as the winner."<<endl;
cout<<"                   NOTE:players should not use the same coordinates for attacking or choosing his area"<<endl;	
cout<<"HAVE FUN"<<endl; 
}
class player//created a class for players
{   public:
	string d[10][30];
	void start()//member functiom start() command to start the game
	{
		cout<<"Let's start the game"<<endl;
	}
int pos()//decides the position
   {int sum=0;
string bf[10][30];
for(int i=0;i<10;i++)
{
	for(int j=0;j<30;j++)
	{
		bf[i][j]="-";//all the elements will be - until selected
	}
}
int ship[5];//array for the size of the 5 ships
cout<<"\nplayer 1 should start\n"<<endl;
	cout<<"choose preferable size for 5 ships:"<<endl;//size here refers to how much space a ship occupies
	for(int i=0;i<5;i++)
	{
		cin>>ship[i];
		if(ship[i]<10)
		{sum+=ship[i];}
		else
		{
			cout<<"size less than 10"<<endl;
			i=i-1;
		}
	}
for(int i=0;i<5;i++)//assigning pos to the ship
	{int xco,yco;
	cout<<"enter the starting x coordinates(no more than 10!!):"<<endl;
	cin>>xco;
    cout<<"enter the starting y coordinates(no more than 30!!):"<<endl;
	cin>>yco;	
	int ch;
	if(bf[xco][yco]=="-")
	{
	cout<<"enter the direction in which u would want keep ur ship no"<<i<<endl<<"1 for left"<<endl<<" 2 for right"<<endl<<" 3 for down"<<endl<<" 4 for up:";
	cout<<endl;
	cin>>ch;
	int size=ship[i];	
	switch(ch)
	{
	case 1:{
	for(int j=0;j<size;j++)
	{
		bf[xco][yco-j]="X";//if selected the element becomes X
	}
		break;
	}
	case 2:{
	for(int j=0;j<size;j++)
	{
		bf[xco][yco+j]="X";
	}
		break;
	}case 3:{
	for(int j=0;j<size;j++)
	{
		bf[xco-j][yco]="X";
	}
		break;
	}case 4:{
	for(int j=0;j<size;j++)
	{
		bf[xco+j][yco]="X";
	}
		break;
	}
	default:
		{
			cout<<"no such direction exists"<<endl;
		}
}}
else{
	cout<<"retry again"<<endl;
	i=i-1;
}}

 for(int i=0;i<10;i++)
{
	for(int j=0;j<30;j++)
	{
		
		cout<<bf[i][j];
	}
	cout<<endl;
}
system("PAUSE");
cout<<"\ncheck the input given\n"<<endl;
cout<<"now press any key so that enemy can't see ur battleship.\n"<<endl ;
system("CLS");
cout<<"player 2 can starting attacking his enemy battleships"<<endl;
//give command to start attacking ships
{int game=1;
string a[10][30];
for(int i=0;i<10;i++)
{
	for(int j=0;j<30;j++)
	{a[i][j]="-";
}
}
int score=0;
while(game)
{
int no=0;
int x,y;
cout<<"select the x coordinate to attack(not more than 10!!):"<<endl;
cin>>x;
cout<<"select the y coordinates to attack(not more than 30!!):"<<endl;
cin>>y;
 if(bf[x][y]=="X")//if attacked at correct pos element will change from X to O
 {
 	cout<<"the enemy ship is hit!!"<<endl;
 	a[x][y]="O";
	score+=2;
	 }
 else
 {
 	cout<<"missed!!"<<endl;
	 a[x][y]="+";//wrong place results in +
	 score=score-1;
	 }	
for(int i=0;i<10;i++)
{
	for(int j=0;j<30;j++)
	{
		
		cout<<a[i][j];
	}
	cout<<endl;
}
for(int i=0;i<10;i++)
{
	for(int j=0;j<30;j++)
	{if(a[i][j]=="O")
	{
		no+=1;
	}
}
}
if(no==sum)
{
	game=0;
	return score;
}
}
}}
};

int main()//main function
{int cont=1;
while(cont==1) 
{
  
instructions();
	player p1,p2;
	p1.start();
	string name1,name2;
	cout<<"enter player 1's name:"<<endl;
	cin>>name1;
	cout<<"enter player 2's name:"<<endl;
    cin>>name2;
int a=p1.pos();
cout<<"the score of "<<name2<<" is:"<<a<<endl;
system("PAUSE");
cout<<"after checking the scores hit any key to continue the game"<<endl;
system("CLS");
int b=p2.pos();
cout<<"the score of "<<name1<<" is:"<<b<<endl;
if(a>b)
{
	cout<<"the winner is player two"<<name2<<endl;
}
else if(b>a)
{
	cout<<"the winner is player one"<<endl;
}
else
{
	cout<<"match drawn"<<endl;
}
int want;
cout<<"do u wish to play again?"<<endl;
cout<<"1.to restart"<<endl;//if u wish to play again
cout<<"2.Enough for now"<<endl;
cin>>want;
if(want==1)
{
	cont=1;
}
else
{
	cont=0;
}
}
}
