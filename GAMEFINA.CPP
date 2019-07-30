#include<iostream.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
void DQ()
{
	clrscr();
	cleardevice();
	for(int i1=1;i1<=15;i1++)
		{

			setcolor(i1);
			for(int j=180;j<200;j++)
				{
					settextstyle(3,0,1);  // allows different font,direction,font size of written text
					outtextxy(50,80,"You have been disqualified!!");

				}

		}
		settextstyle(3,0,6);
		setcolor(4);
		outtextxy(50,100,"BYE!!!");  // allows text to be placed anywhere on screen
		delay(1000);
		settextstyle(3,0,4);
		outtextxy(50,160,"YOU DON'T GET ANOTHER CHANCE!!!!");
		delay(1000);
		exit(0);

}

void explosion()
{
 int n;
 char OT[33]={'W','e','l','c','o','m','e',' ','T','o',' ','H','a','n','s','e','l',' ','&',' ','K','i','r','k','s',' ','P','r','o','j','e','c','t'};
 char TO[25]={'L','a','u','n','c','h','i','n','g',' ','i','n',' ','3','.','.','.','2','.','.','.','1','.','.','.'};
 time_t t;
 clrscr();
 cleardevice();

 cout<<endl<<endl<<endl<<endl<<endl;
 for(int i=0;i<33;i++)
 {
	cout<<OT[i];
	delay(100);
 }
 cout<<endl;
 for(i=0;i<25;i++)
 {
	cout<<TO[i];
	delay(100);
 }

  for (int z=0;z<=400;z++)
  {
  setcolor(15);
  line(325,z+10,325,z+10);
  setcolor(0);
  delay(5);
  line(325,z,325,z);
  }
  for(int k=0;k<200;k++)
  {

   for (int m=1;m<10;m++)
   {
   srand(time(&t));
   n=rand()%14;         //random number generator

   setcolor(n);         //random color
   circle(250,400,k);
   circle(270,400,k);

  setcolor(n+1);
   circle(285,400,k+10);
   circle(318,400,k+10);
   circle(335,400,k+10);
   circle(370,400,k+10);

   setcolor(n);
   circle(390,400,k);
   circle(410,400,k);
  }
  }

clrscr();
cleardevice();

}



void rules()
{
int p=5;
do
 {
 clrscr();
 cleardevice();
 settextstyle(1,0,3);
 setcolor(4);
  outtextxy(250,10,"RULES & HELP");
  delay(500);
  cout<<endl<<endl<<endl<<"1) An 8x5 table with, randomly generated numbers, will be generated.";
  delay(500);
  cout<<endl<<endl<<"2) The player has to identify ANY two positions of equal numbers.\n   Note down or Memorise the row and column numbers of each of these positions.";
  delay(500);
  cout<<endl<<endl<<"3) The table will be visible to the player for 5 seconds, after which all the\n   numbers will be hidden.";
  delay(500);
  cout<<endl<<endl<<"4) Player then enters their guess in the following order:-\n   Row number of 1st guess. \n   Column number of 1st guess. \n   Row number of 2nd guess. \n   Column number of 2nd guess.";
  delay(500);
  cout<<endl<<endl<<"5) The Row and Column numbering starts from the top left corner.\n   The top left corner has Row=1 & Column=1.";
  delay(500);
  cout<<endl<<endl<<"6) In the case of entering same position for both guesses the player will be\n   DISQUALIFIED.";
  delay(500);
  cout<<endl<<endl<<"7) Entry of Row and Column number out of range will result in NO\n   selection of that number.";
  delay(500);
  cout<<endl<<endl<<"8) Player has 3 chances to get a correct answer.";
  delay(500);
  cout<<endl<<endl<<endl<<"To continue Press 1.  ";
  delay(5000);
  for(int i=1;i<=5;i++)
  {
  for( int j=1;j<=15;j++)
  {
  setcolor(j);
  outtextxy(100,435,"MAY THE ODDS BE EVER IN YOUR FAVOR!");   //allows text to be placed anywhere on screen
  delay(100);
  }
  }
   setcolor(2);
  outtextxy(100,435,"MAY THE ODDS BE EVER IN YOUR FAVOR!");
  cin>>p;
  }while(p!=1);
  clrscr();
  cleardevice();
  }

void win()
{   int n=0;
	clrscr();
	cleardevice();
	do
{
 sound(200);
 delay(100);
 nosound();
 sound(250);
 delay(100);
 nosound();
 sound(300);
 delay(100);
 nosound();
 sound(350);
 delay(100);
 nosound();
 sound(400);
 delay(100);
 nosound();
 sound(450);
 delay(100);
 nosound();
 sound(100);
 delay(100);
 nosound();
  sound(550);
 delay(100);
 nosound();
 sound(600);
 delay(100);
 nosound();
 n++;
} while(n<3)  ;

	for(int i1=1;i1<=15;i1++)
		{

			setcolor(i1);
			for(int j=180;j<200;j++)
				{
					settextstyle(3,0,1);
					outtextxy(50,180,"Wohhoooo!!! Correct answer");
				}
		}
delay(1000);
clrscr();
cleardevice();
}

void lose()
{
clrscr();
cleardevice();
       int m=50;
	   sound(m);         // sound function : sound( int frequency);
	   delay(200);
	   nosound(); delay(20);       //nosound(); stops sound;
	   sound(m);
	   delay(200);
	   nosound(); delay(20);
	   sound(m);
	   delay(200);
	   nosound();
	for(int i1=1;i1<=15;i1++)
		{

		setcolor(i1);
		for(int j=180;j<200;j++)
			{
				settextstyle(3,0,1);
				outtextxy(50,180,"Your numbers dont match. TRY AGAIN!!");
			}
		}
delay(1000);
clrscr();
cleardevice();

}

void lose1()
{
clrscr();
cleardevice();
for(int i1=1;i1<=15;i1++)
{

setcolor(i1);
for(int j=180;j<200;j++)
{
settextstyle(3,0,1);
outtextxy(50,180,"You ran out of chances. YOU LOSE!!! :(");
}
}
delay(1000);
clrscr();
cleardevice();
}

void loading()
{
	  settextstyle(1,0,6);
 setcolor(2);
 outtextxy(100,100,"MEMORY GAME");
 delay(1000);

 settextstyle(3,0,2);
 setcolor(3);
  outtextxy(200,200,"LOADING....");
  rectangle(199,179,350,191);
	for(int i=0;i<150;i++)
		{
			setcolor(3);
			rectangle(200,180,200+i,190);
			delay(10);
		}

     cleardevice();
}
void shownum(int ar[8][5])
	{
	 int i,j;
	 clrscr();
	 cleardevice();
		for(i=0;i<8;i++)
			{
			 for(j=0;j<5;j++)
				{
				 cout<<ar[i][j]<<"\t";
				}
			    cout<<endl<<endl;
			}
	 delay(5000);
	 clrscr();
	 cleardevice();
	}
void showX(char b[8][5])
	{
	 clrscr();
	 cleardevice();

		 for(int i=0;i<8;i++)
			{
				 for(int j=0;j<5;j++)
					{
					 cout<<b[i][j]<<"\t";
					}
				cout<<endl<<endl;
			}
		delay(2000);
		clrscr();
		cleardevice();
	}
void showchoice(int a,int b1,int c,int d,int ar[8][5],char b[8][5])
	{
	 clrscr();
 cleardevice();
 for(int i=0;i<8;i++)
  {
   for(int j=0; j<5;j++)
	{        if((a==i & b1==j)|(c==i & d==j))
		   {
		    cout<<ar[i][j]<<"\t";
		    }
				 else
		 {
		 cout<<b[i][j]<<"\t";
		 }
	}
	cout<<endl<<endl;
  }
  delay(2000);
  clrscr();
  cleardevice();

	}

void main()
{
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"C://TURBOC3//BGI"); //initialize graphics mode only ONCE.
 explosion();
 loading();
 rules();
int chance,flag, n ,i, ar[8][5],j,k,x1,y1,x2,y2,a,b1,c,d;
char b[8][5],restart='y';
time_t t;
do
{
chance=1;
flag=0;
srand(time(&t));
for (i=0;i<8;i++)
{
	for(j=0;j<5;j++)
	{
		 for(k=0;k<40;k++)
			{       if(k>i || k>j) break;     //if condition present so that
			       else{                   //40 random numbes aren't generated
						       //for one memory location of ar
				n=rand()%25;           //random number generated
				ar[i][j]=n;}           // random number stored in ar[i][j]
		 }

	 }

}
	      //displaying values
 shownum(ar);


 for(i=0;i<8;i++)                       //hiding values
  {
   for(j=0; j<5;j++)
	{
		 b[i][j]='X';
		 cout<<b[i][j]<<"\t";
	}
	cout<<endl<<endl;
  }
 delay(2000);
 clrscr();
 cleardevice();
 cout<<" Enter your guess.\n";
 cout<<" Row number of first guess = ";
 cin>>a;
 cout<<" Column number of first guess = ";
 cin>>b1;
 cout<<" Row number of second guess = ";
 cin>>c;
 cout<<" Column number of second guess = ";
 cin>>d;
		    //first chance
 x1=a-1;
 y1=b1-1;
 x2=c-1;
 y2=d-1;
 if(x1==x2&&y1==y2)
 {
  DQ();
 }
 showchoice(x1,y1,x2,y2,ar,b);



		 if(ar[x1][y1]==ar[x2][y2])
			 {

				win();
			 }



		  else
			{
			      chance++;     //second chance
				do
				{

					lose();

					if(chance==4)
					{
					 lose1();
					 break;
					}
					shownum(ar);
					showX(b);
					  cout<<" Enter your guess\n";
					  cout<<" Row number of first guess = ";
						cin>>a;
						cout<<" Column number of first guess = ";
						cin>>b1;
						cout<<" Row number of second guess = ";
						cin>>c;
						cout<<" Column number of second guess = ";
						cin>>d;
					  x1=a-1;
					  y1=b1-1;
					  x2=c-1;
					  y2=d-1;
					   if(x1==x2&&y1==y2)
						 {
							 DQ();
						 }
					  showchoice(x1,y1,x2,y2,ar,b);

					  if(ar[x1][y1]==ar[x2][y2])
							{
							 flag=1;
							 break;
							}
					   else
							{
							chance++; //second chance++
							}
				 } while(chance<=5);
			}

		       if(flag==1)
		       {
			win();
		       }

cout<<" Press Y to play again.\n Press N to exit.\n";
cout<<" ";
cin>>restart;
clrscr();
cleardevice();
}while(restart=='y'||restart=='Y');
 //no "getch();" so that blank black screen automatically disappears.
}