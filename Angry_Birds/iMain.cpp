///OM
///SUVOM SHAHA
///AUST CSE 39

# include "iGraphics.h"
# include<stdio.h>
# include<string.h>
# include<math.h>
# include <iostream>
# include "badhon.h"
#include <iomanip>
#include <locale>
#include <stdlib.h>
#include "HighScore.h"

int h = 0;
int a1 = 1, a2 = 1, a3 = 1, a4 = 1, a5 = 1, a6 = 1, a7 = 1, a8 = 1, a9 = 1, a10 = 1, a11 = 1, a12 = 1;
char pic[50][50] = {"picture//bird1.BMP", "picture//bird2.BMP", "picture//bird3.BMP", "picture//bird4.BMP"};
int moveX = 100;
int moveY = 250;
int moveX2 = 10;
int moveY2 = 370;
int index = 0;
bool music = true;
bool thirdLevel = false;
bool isCompleted(){
	if (h >= 11)
		return true;
	return false;
}
bool isCompleted3(){
	if (h >= 12)
		return true;
	return false;
}

void gameMenu()
{
	iShowBMP2(0, 0, "picture//Home.BMP", 0);     //home page
	iShowBMP2(50, 400, "picture//start.BMP", 0);  //start image
	iShowBMP2(40, 280, "picture//conti.BMP", 0);   //continue image
	iShowBMP2(40, 180, "picture//HighScore.BMP", 0); //highscore image
	iShowBMP2(40, 80, "picture//instruction.BMP", 0); //instruction image
	iShowBMP2(40, 0, "picture//exit.BMP", 0); //exit image
}

void nameEnter()
{
	iShowBMP2(0, 0, "picture//name.BMP", 0); //name
	iShowBMP2(screenHeight/2, 0, "picture//NameEnter.BMP", 0); //enter name image
	iSetColor(255, 0, 0); //color of name
	iText((screenHeight/2)+100, 50, name, GLUT_BITMAP_TIMES_ROMAN_24); //name text
	iShowBMP2(800, 10, "picture//back.BMP", 0); //back image
}

void highScore()
{
	iShowBMP2(0, 0, "picture//Score.BMP", 0);    //highscore image
	iShowBMP2(800, 10, "picture//back.BMP", 0); //back image
	iSetColor(100, 100, 100);                   //color of score text
	iText((screenHeight/2)+100, 500, "HIGHSCORE" , GLUT_BITMAP_TIMES_ROMAN_24); //text
	iSetColor(255, 33, 0);
}

void instruction()
{
	iShowBMP2(0, 0, "picture//instruct.BMP", 0);
	iShowBMP2(0, 80, "picture//lab.BMP", 0);     //images of instruction page
	iShowBMP2(800, 10, "picture//back.BMP", 0);
}

void sound()
{
	iShowBMP2(0, 0, "picture//instruct.BMP", 0);
	iShowBMP2(50, 250, "picture//music.BMP", 0);
	iShowBMP2(800, 10, "picture//back.BMP", 0);
}

void startGame()
{

	if(gameState == 4)
	iShowBMP2(0,0,"picture//level1back.BMP",0);
	if(gameState == 7){
		iShowBMP2(0,0,"picture//lev2.BMP",0);
		iShowBMP2(400,0,"picture//tree2.BMP",0);
		iShowBMP2(305,100,"picture//tree1.BMP",0);
		iShowBMP2(100,200,"picture//exp3.BMP",0);
		if((xBall-10 >= 363 && xBall-10 <= 400) && (yBall >= 0 && yBall <= 113))
	{
		timeChange = 1;
		check = 0;
		xBall = yBall =timeMax =  0;
		score -= 5;

	}
		if((xBall >= 70 && xBall <= 137) && (yBall >= 200 && yBall <= 240))
	{
		timeChange = 1;
		check = 0;
		xBall = yBall =timeMax =  0;
		score -= 5;

	}
		if((xBall >= 310 && xBall <= 500) && (yBall >= 100 && yBall <= 200))
	{
		timeChange = 1;
		check = 0;
		xBall = yBall =timeMax =  0;
		score -= 5;

	}
	}
	iShowBMP2(xBall, yBall, "picture//bird.BMP", 0); //bird image
	iSetColor(121, 100, 155); //color of name in game screen
	iText(10, 530, name, GLUT_BITMAP_TIMES_ROMAN_24);//font of name
	iSetColor(0, 0, 255);
	iLine(xCircle, yCircle, xLine, yLine);//position of angle line
	if(gameState == 4 || gameState == 7)
	iFilledRectangle(xCube1, yCube1, 50, 30);
	if(gameState == 4)
	iSetColor(255, 0, 0);
	else if(gameState == 7)
		iSetColor(rand()%255, rand()%255, rand()%255);
	if(gameState == 4 || gameState == 7)
	iFilledRectangle(xCube2, yCube2, 50, 30);
	iSetColor(0, 255, 0);
	if(gameState == 4 || gameState == 7)
	iFilledRectangle(xCube4, yCube4, 50, 30);
	if(gameState == 4)
	iSetColor(rand()%255, rand()%255, rand()%255);
	else if(gameState == 7)
	iSetColor(25, 255, 55);
	if(gameState == 4 || gameState == 7)
	iFilledRectangle(xCube3, yCube3, 50, 30);
	iSetColor(243, 233, 35);      //color and position of those cube
	if(gameState == 4 || gameState == 7)
	iFilledRectangle(xCube5, yCube5, 50, 30);
	iSetColor(23, 233, 35);
	if(gameState == 4 || gameState == 7)
	iFilledRectangle(xCube6, yCube6, 50, 30);
	iSetColor(243, 33, 3);
	if(gameState == 4 || gameState == 7)
	iFilledRectangle(xCube7, yCube7, 50, 30);
	iSetColor(23, 233, 135);
	if(gameState == 4 || gameState == 7)
	iFilledRectangle(xCube8, yCube8, 50, 30);
	iSetColor(123, 23, 255);
	if(gameState == 4 || gameState == 7)
	iFilledRectangle(xCube9, yCube9, 50, 30);
	iSetColor(131, 3, 35);
	if(gameState == 4 || gameState == 7)
	iFilledRectangle(xCube10, yCube10, 50, 30);
	iSetColor(3, 23, 135);
	if(gameState == 4 || gameState == 7)
	iFilledRectangle(xCube11, yCube11, 50, 30);
	if(gameState == 4 || gameState == 7){
	if(c1){
	if((xBall+5 >= xCube1-30 && xBall+5 <= xCube1+50) && (yBall >= yCube1-35 && yBall <= yCube1+30))
	{
		xCube1 = yCube1 = -400;
		timeChange = 1;
		check= c1=0;
		h++;
		score += 10;
		xBall = yBall =timeMax =  0;
	}
	}
	if(c2){
	if((xBall+5 >= xCube2-30 && xBall+5 <= xCube2+50) && (yBall >= yCube2-35 && yBall <= yCube2+30))
	{
		xCube2 = yCube2 =  -400;
		timeChange = 1;
		check = c2 = 0;
		if(gameState == 4)
		h++;
		else if(gameState == 7)
			h = 11;
		score += 20;
		xBall = yBall =timeMax =  0;
	}
	}
	if(c3){
	if((xBall+5 >= xCube3-30 && xBall+5 <=xCube3+50) && (yBall >= yCube3-35 && yBall <=yCube3+30))
	{
		xCube3 = yCube3 = -400;
		timeChange = 1;              //cube vanish formula
		check = c3 = 0;
		xBall = yBall = timeMax = 0;
		if(gameState == 4){
			score += 100;
		h=11;
		}
		else if(gameState == 7)
		{
			h++;
			score += 30;
		}
	}
	}
	if(c4){
	if((xBall+5 >= xCube4-30 && xBall+5 <= xCube4+50) && (yBall >= yCube4-35 && yBall <= yCube4+30))
	{
		xCube4 = yCube4 = -400;
		timeChange = 1;
		xBall = yBall = timeMax = 0;
		check = c4 = 0;
		score += 40;
		h++;
	}
	}
	if(c5){
	if((xBall+5 >= xCube5-30 && xBall+5 <=xCube5+50) && (yBall >=yCube5-35 && yBall <= yCube5+30))
	{
		xCube5 = yCube5 = -400;
		timeChange = 1;
		xBall = yBall = timeMax = 0;
		check = c5 = 0;
		score += 10;
		h++;
	}
	}
	if(c6){
	if((xBall+5 >= xCube6-30 && xBall+5 <=xCube6+50) && (yBall >= yCube6-35 && yBall <=yCube6+30))
	{
		xCube6 = yCube6 = -400;
		timeChange = 1;
		xBall = yBall =timeMax =  0;
		check = c6 = 0;
		score += 20;
		h++;
	}
	}
	if(c7){
	if((xBall+5 >= xCube7-30 && xBall+5 <=xCube7+50) && (yBall >= yCube7-35 && yBall <=yCube7+30))
	{
		xCube7 = yCube7 =  -400;
		timeChange = 1;
		xBall = yBall = timeMax = 0;
		check = c7 = 0;
		score += 30;
		h++;
	}
	}
	if(c8){
	if((xBall+5 >= xCube8-30 && xBall+5 <=xCube8+50) && (yBall >= yCube8-35 && yBall <=yCube8+30))
	{
		xCube8 = yCube8 = -400;
		timeChange = 1;
		xBall = yBall = timeMax = 0;
		check = c8 = 0;
		score += 40;
		h++;
	}
	}
	if(c9){
	if((xBall+5 >= xCube9-30 && xBall+5 <=xCube9+50) && (yBall >= yCube9-35 && yBall <=yCube9+30))
	{
		xCube9 = yCube9 = -400;
		timeChange = 1;
		xBall = yBall =timeMax =  0;
		check = c9 = 0;
		score += 20;
		h++;
	}
	}
	if(c10){
	if((xBall+5 >= xCube10-30 && xBall+5 <=xCube10+50) && (yBall >= yCube10-35 && yBall <=yCube10+30))
	{
		xCube10 = yCube10 = -400;
		timeChange = 1;
		xBall = yBall = 0;
		check = c10 = timeMax = 0;
		score += 40;
		h++;
	}
	}
	if(c11){
	if((xBall+5 >= xCube11-30 && xBall+5 <=xCube11+50) && (yBall >=yCube11-35 && yBall <=yCube11+30))
	{
		xCube11 = yCube11 = -400;
		timeChange = 1;
		xBall = yBall = 0;
		check = c11 = timeMax = 0;
		score += 10;
		h++;
	}
	}

}
}
void gameOver(){
	iShowBMP2(0,0, "picture//go.BMP", 0);
}
void startGameLevel3(){
	if(gameState == 9){
		//iFilledRectangle(0, 0, screenWidth, screenHeight);
		//iShowBMP2(0,0,"picture//lev2.BMP",0);
		iFilledRectangle(LCube1, PCube1, 50, 30);
		iSetColor(0, 31, 145);
		iFilledRectangle(LCube2, PCube2, 50, 30);
		iSetColor(121, 0, 45);
		iFilledRectangle(LCube3, PCube3, 50, 30);
		iSetColor(21, 231, 0);
		iFilledRectangle(LCube4, PCube4, 50, 30);
		iSetColor(21, 31, 245);
		iFilledRectangle(LCube5, PCube5, 50, 30);
		iSetColor(211, 31, 45);
		iFilledRectangle(LCube6, PCube6, 50, 30);
		iSetColor(21, 131, 45);
		iFilledRectangle(LCube7, PCube7, 50, 30);
		iSetColor(21, 31, 245);
		iFilledRectangle(LCube8, PCube8, 50, 30);
		iSetColor(21, 131, 45);
		iFilledRectangle(LCube9, PCube9, 50, 30);
		iSetColor(211, 0, 45);
		iFilledRectangle(LCube10, PCube10, 50, 30);
		iSetColor(211, 31, 0);
		iFilledRectangle(LCube11, PCube11, 50, 30);
		iSetColor(21, 71, 245);
		iFilledRectangle(LCube12, PCube12, 50, 30);
			if(a1){
	if((xBall+5 >= LCube1-30 && xBall+5 <= LCube1+50) && (yBall >= PCube1-35 && yBall <= PCube1+30))
	{
		LCube1 = PCube1 = -400;
		timeChange = 1;
		check= a1=0;
		h++;
		score += 10;
		xBall = yBall =timeMax =  0;
	}
	}
			if(a2){
	if((xBall+5 >= LCube2-30 && xBall+5 <= LCube2+50) && (yBall >= PCube2-35 && yBall <= PCube2+30))
	{
		LCube2 = PCube2 = -400;
		timeChange = 1;
		check= a2=0;
		h++;
		score += 20;
		xBall = yBall =timeMax =  0;
	}
	}
			if(a3){
	if((xBall+5 >= LCube3-30 && xBall+5 <= LCube3+50) && (yBall >= PCube3-35 && yBall <= PCube3+30))
	{
		LCube3 = PCube3 = -400;
		timeChange = 1;
		check= a3=0;
		h++;
		score += 30;
		xBall = yBall =timeMax =  0;
	}
	}
		if(a4){
	if((xBall+5 >= LCube4-30 && xBall+5 <= LCube4+80) && (yBall >= PCube4-35 && yBall <= PCube4+30))
	{
		LCube4 = PCube4 = -400;
		timeChange = 1;
		check= a4 =0;
		h++;
		score += 10;
		xBall = yBall =timeMax =  0;
	}
	}
		if(a5){
	if((xBall+5 >= LCube5-30 && xBall+5 <= LCube5+50) && (yBall >= PCube5-35 && yBall <= PCube5+30))
	{
		LCube5 = PCube5 = -400;
		timeChange = 1;
		check= a5 =0;
		h++;
		score += 20;
		xBall = yBall =timeMax =  0;
	}
	}
			if(a6){
	if((xBall+5 >= LCube6-30 && xBall+5 <= LCube6+50) && (yBall >= PCube6-35 && yBall <= PCube6+30))
	{
		LCube6 = PCube6 = -400;
		timeChange = 1;
		check= a6 =0;
		h++;
		score += 30;
		xBall = yBall =timeMax =  0;
	}
	}
			if(a7){
	if((xBall+5 >= LCube7-30 && xBall+5 <= LCube7+50) && (yBall >= PCube7-35 && yBall <= PCube7+30))
	{
		LCube7 = PCube7 = -400;
		timeChange = 1;
		check= a7 =0;
		h++;
		score += 10;
		xBall = yBall =timeMax =  0;
	}
	}
			if(a8){
	if((xBall+5 >= LCube8-30 && xBall+5 <= LCube8+50) && (yBall >= PCube8-35 && yBall <= PCube8+30))
	{
		LCube8 = PCube8 = -400;
		timeChange = 1;
		check= a8 =0;
		h++;
		score += 20;
		xBall = yBall =timeMax =  0;
	}
	}
			if(a9){
	if((xBall+5 >= LCube9-30 && xBall+5 <= LCube9+50) && (yBall >= PCube9-35 && yBall <= PCube9+30))
	{
		LCube9 = PCube9 = -400;
		timeChange = 1;
		check= a9 =0;
		h++;
		score += 30;
		xBall = yBall =timeMax =  0;
	}
	}
			if(a10){
	if((xBall+5 >= LCube10-30 && xBall+5 <= LCube10+50) && (yBall >= PCube10-35 && yBall <= PCube10+30))
	{
		LCube10 = PCube10 = -400;
		timeChange = 1;
		check= a10 =0;
		h++;
		score += 100;
		xBall = yBall =timeMax =  0;
	}
	}
			if(a11){
	if((xBall+5 >= LCube11-30 && xBall+5 <= LCube11+50) && (yBall >= PCube11-35 && yBall <= PCube11+30))
	{
		LCube11 = PCube11 = -400;
		timeChange = 1;
		check= a11 =0;
		h++;
		score += 150;
		xBall = yBall =timeMax =  0;
	}
	}
			if(a12){
	if((xBall+5 >= LCube12-30 && xBall+5 <= LCube12+50) && (yBall >= PCube12-35 && yBall <= PCube12+30))
	{
		LCube12 = PCube12 = -400;
		timeChange = 1;
		check= a12 =0;
		h++;
		score += 200;
		xBall = yBall =timeMax =  0;
	}
	}
	if((xBall >= moveX && xBall <= moveX+130) && (yBall >= moveY && yBall <= moveY+116) || (xBall >= moveX-40 && xBall <= moveX) && (yBall >= moveY-40 && yBall <= moveY)){
			xBall = yBall =timeMax = check= 0;
			timeChange = 1;
			score -= 10;
		}
	if((xBall >= moveX2 && xBall <= moveX2+130) && (yBall >= moveY2 && yBall <= moveY2+116) || (xBall >= moveX2-40 && xBall <= moveX2) && (yBall >= moveY2-40 && yBall <= moveY2)){
			xBall = yBall =timeMax = check= 0;
			timeChange = 1;
			score -= 10;
		}
	}
}
/*
	function iDraw() is called again and again by the system.
*/

bool pred = false;

void iDraw()
{
	//place your drawing codes here
	iClear();
	/*if (pred == false && canWrite == true)
	{
		storeScore();
		pred = true;
		read();
	}*/

	if(gameState == 9){
		//iSetColor(255, 0, 0);
		//iFilledCircle(100, 200, 81, 1000);
		iShowBMP2(0,0,"picture//sky1.BMP",0);
		iShowBMP2(moveX, moveY, pic[index], 0);
		iShowBMP2(moveX2, moveY2, pic[index], 0);
		void moveBird();
	}
	if (gameState == 7)
	{
		startGame();
	}
	if(gameState == 9)
	{
		startGame();
		startGameLevel3();
	}
	if (gameState == 4 && isCompleted()){
		gameState = 6;
	}
	if(gameState == 1)
		sound();
	if(gameState == 7 && isCompleted())
		gameState = 8;
	if(gameState == 9 && isCompleted3())
	{
		storeScore();
		gameState = 10;
		read();
	}
	if(gameState == -1)
		gameMenu();
	if(gameState == 0)
		nameEnter();
	if(gameState == 2){       //interface change
		highScore();
		show(s);
	}
	if(gameState == 3)
		instruction();
	if(gameState == 4){
		startGame();
		void ghori();
	}
	if(gameState ==5){
		//if(save == 0)
			gameOver();}
	if(gameState == 10)
	{

	/*if (pred == false && canWrite == true)//           HIGHSCORE KAJ KORE NA KAN(only 1st level er ta kore)???
	{
		storeScore();
		pred = true;
		read();
	}*/
		canWrite = true;
		pred = false;
		iShowBMP2(0, 0, "picture//gameOver2.BMP", 0);
		iShowBMP2(40, 0, "picture//exit.BMP", 0);
		iSetColor(211, 109, 96);
			char s[100];
	iText(890, 520, "Score : ", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(960, 520, s, GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (gameState == 6 || gameState == 8){
		if(gameState == 6){
		if((timeCount>10 && timeCount<=19)){
			iShowBMP2(150, 200, "picture//level1(2).BMP", 0);
			iShowBMP2(30, 40, "picture//next.BMP", 0);
		}
		 else if(timeCount>0 && timeCount<= 10){
			iShowBMP2(150, 200, "picture//level1(3).BMP", 0);
			iShowBMP2(30, 40, "picture//next.BMP", 0);

		}
		 else if (timeCount>=20 && timeCount<30){
			iShowBMP2(150, 200, "picture//level1.BMP", 0);
			iShowBMP2(30, 40, "picture//next.BMP", 0);

		}
		 else
		 {
			 iShowBMP2(30, 40, "picture//next.BMP", 0);
		 }
		}
				if(gameState == 8){
		if((timeCount>= 20 && timeCount< 29)){
			iShowBMP2(150, 200, "picture//level1(2).BMP", 0);
			iShowBMP2(30, 40, "picture//next.BMP", 0);
		}
		 else if(timeCount>0 && timeCount<= 19){
			iShowBMP2(150, 200, "picture//level1(3).BMP", 0);
			iShowBMP2(30, 40, "picture//next.BMP", 0);

		}
		 else if (timeCount>=30 && timeCount<50){
			iShowBMP2(150, 200, "picture//level1.BMP", 0);
			iShowBMP2(30, 40, "picture//next.BMP", 0);

		}
		 else
		 {
			 iShowBMP2(30, 40, "picture//next.BMP", 0);
		 }
		}
	}
	char s[100];
	char b[20];
	char T[30];

	itoa(birds, b, 10);
	itoa(score, s, 10);
	if(gameState == 4 || gameState == 7 || gameState == 9){
	iSetColor(211, 109, 96);
	iText(890, 520, "Score : ", GLUT_BITMAP_TIMES_ROMAN_24);
	//iText(890, 520, t, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(960, 520, s, GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(11, 109, 96);
	iText(500, 520, b, GLUT_BITMAP_TIMES_ROMAN_24);
	sprintf(T, "Time: %d", timeCount);
	iText(100, 520, T, GLUT_BITMAP_TIMES_ROMAN_24);
}
}
/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	double a = mx-100;
	double b = my-100;
	angle = atan2(b, a)*180/PI;
	xLine = xCircle+(radius+30)*cos(angle*PI/180);
	yLine = xCircle+(radius+30)*sin(angle*PI/180);     //projectile angle line
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(gameState == -1 && mx >= 50 && mx <= 850 && my >= 400 && my <= 900)
			gameState = 0;
		else if(gameState == -1 && mx >= 50 && mx <= 850 && my >= 280 && my <= 900){
			gameState = 1;

		}
		else if(gameState == -1 && mx >= 50 && mx <= 850 && my >= 180 && my <= 900)
			gameState = 2;
		else if(gameState == -1 && mx >= 50 && mx <= 850 && my >= 80 && my <= 900)    //game state control with mouse
			gameState = 3;
		else if(gameState == -1 && mx >= 50 && mx <= 850 && my >= 0 && my <= 900)
			exit(0);
		else if(gameState == 2 && mx >= 800 && mx <= 956 && my >= 10 && my <= 110)
			gameState = -1;
		else if(gameState == 3 && mx >= 800 && mx <= 956 && my >= 10 && my <= 110)
			gameState = -1;
		else if(gameState == 0 && mx >= 800 && mx <= 956 && my >= 10 && my <= 110)
			gameState = -1;
		else if(gameState == 1 && mx >= 800 && mx <= 956 && my >= 10 && my <= 110)
			gameState = -1;
		if(gameState == 10 && mx >= 50 && mx <= 850 && my >= 0 && my <= 900)
			exit(0);
		if(gameState == 6 && mx >= 30 && mx <= 206 && my >= 40 && my <= 80){
			c1 = 1, c2 = 1, c3 = 1, c4 = 1, c5 = 1, c6 = 1, c7 = 1, c8 = 1, c9 = 1, c10 = 1, c11 = 1;
			gameState = 7;
			birds = h = 0;
			timeCount = 50;
		iShowBMP2(0,0,"picture//level1back.BMP",0);
	xCubePos = 800;
	yCubePos = 0;
	xCube1 = xCubePos+0, yCube1 = yCubePos+0;
	xCube2 = xCubePos+50, yCube2 = yCubePos+0;
	xCube3 = xCubePos+100, yCube3 = yCubePos+0;
	xCube4 = xCubePos+150, yCube4 = yCubePos+0;
	xCube5 = xCubePos+0, yCube5 = yCubePos+30;
	xCube6 = xCubePos+50, yCube6 = yCubePos+30;
	xCube7 = xCubePos+100, yCube7 = yCubePos+30;
	xCube8 = xCubePos+150, yCube8 = yCubePos+30;
	xCube9 = xCubePos+50, yCube9 = yCubePos+60;
	xCube10 = xCubePos+100, yCube10 = yCubePos+60;
	xCube11= xCubePos+75, yCube11 = yCubePos+90;
		}
	if(gameState == 8 && mx >= 30 && mx <= 206 && my >= 40 && my <= 80){

			gameState = 9;
			birds = h = 0;
			timeCount = 100;
			thirdLevel = true;
	}
		if(gameState == 5 && mx >= 400 && mx <= 600 && my >= 100 && my <= 200){
			gameState = 4;
			score = birds = h = 0;
			c1 = 1, c2 = 1, c3 = 1, c4 = 1, c5 = 1, c6 = 1, c7 = 1, c8 = 1, c9 = 1, c10 = 1, c11 = 1;
			timeCount = 30;
			xCubePos = 800;
	yCubePos = 0;
	xCube1 = xCubePos+0, yCube1 = yCubePos+0;
	xCube2 = xCubePos+50, yCube2 = yCubePos+0;
	xCube3 = xCubePos+100, yCube3 = yCubePos+0;
	xCube4 = xCubePos+150, yCube4 = yCubePos+0;
	xCube5 = xCubePos+0, yCube5 = yCubePos+30;
	xCube6 = xCubePos+50, yCube6 = yCubePos+30;
	xCube7 = xCubePos+100, yCube7 = yCubePos+30;
	xCube8 = xCubePos+150, yCube8 = yCubePos+30;
	xCube9 = xCubePos+50, yCube9 = yCubePos+60;
	xCube10 = xCubePos+100, yCube10 = yCubePos+60;
	xCube11= xCubePos+75, yCube11 = yCubePos+90;
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}
}
/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */

void iPassiveMouseMove(int mx,int my)
{
	//place your code here

 mposx = mx;
mposy = my;
 if(mx== 2){}        /*Something to do with mx*/
 else if(my== 2){}   /*Something to do with my*/

}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if(key != '\b' && gameState == 0)
	{
		name[nameIndex] = key;
		nameIndex++;
		name[nameIndex] = '\0';
	}
	else if (key == '\b' && gameState == 0)               //name input
	{
		if(nameIndex <= 0)
			nameIndex = 0;
		else
			{
				nameIndex--;
				name[nameIndex] = '\0';
			}
	}
	if(key == '\r' && gameState == 0)
		gameState = 4;
	if (key == '\n' && gameState == 0)
	{
		name[nameIndex] = '\0';
		gameState = 4;
	}
	if((key == 'q' && gameState == 4) || (key == 'q' && gameState == 7))
		if((xBall == 0) && (yBall == 0))
	{
		check = 1;
		birds++;
	}
	if(key == '1' && gameState == 9)
	if((xBall == 0) && (yBall == 0)){
		check = 1;
		v = 10;
		birds++;
	}
		if(key == '2' && gameState == 9)
		if((xBall == 0) && (yBall == 0)){
		check = 1;
		v = 12;
		birds++;
	}
		if(key == '3' && gameState == 9)
		if((xBall == 0) && (yBall == 0)){
		check = 1;
		v = 14;
		birds++;
	}
		if(key == 's' && gameState == 1){
						//music = false;
			if(music){
				music = false;
				PlaySound(0, 0, 0);
			}
			else
			{
				music = true;
				PlaySound("music\\backGround.wav", NULL, SND_LOOP | SND_ASYNC);
			}
		}

	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	else if(key == GLUT_KEY_UP && check == 0)
	{
		if(angle <= 90 && check == 0)
		{
			angle += 5;
			xLine = (radius+30)*cos(angle*PI/180);
			yLine = (radius+30)*sin(angle*PI/180);
			timeMax = v*sin(angle*PI/180)/g;
			rMax = v*v*sin(2*angle*PI/180)/g;
		}
	}
	else if(key == GLUT_KEY_LEFT && check == 0)
	{
		if(angle <= 90 && check == 0)
		{
			angle += 5;
			xLine = (radius+30)*cos(angle*PI/180);
			yLine = (radius+30)*sin(angle*PI/180);
			timeMax = v*sin(angle*PI/180)/g;
			rMax = v*v*sin(2*angle*PI/180)/g;
		}
	}
	else if(key == GLUT_KEY_DOWN && check == 0)
	{
		if(angle <= 90 && check == 0)
		{
			angle -= 5;
			xLine = (radius+30)*cos(angle*PI/180);
			yLine = (radius+30)*sin(angle*PI/180);
			timeMax = v*sin(angle*PI/180)/g;
			rMax = v*v*sin(2*angle*PI/180)/g;
		}
	}
	else if(key == GLUT_KEY_RIGHT && check == 0)
	{
		if(angle <= 90 && check == 0)
		{
			angle -= 5;
			xLine = (radius+30)*cos(angle*PI/180);
			yLine = (radius+30)*sin(angle*PI/180);
			timeMax = v*sin(angle*PI/180)/g;
			rMax = v*v*sin(2*angle*PI/180)/g;
		}
	}
	//place your codes for other keys here
}
void change()
{
	if(check == 1)
	{
		xBall = v*cos(angle*PI/180)*timeChange;
		yBall = xBall*tan(angle*PI/180)-0.5*g*xBall*xBall/(v*cos(angle*PI/180))/(v*cos(angle*PI/180));
		if(timeChange != timeMax)
			timeChange++;
		if(yBall < 0)
		{
			timeChange = 1;
			timeMax = 0;
			check = 0;
			xBall = yBall = 0;
		}
	}
}
void moveBird(){
	index++;
	if(index >= 4)
		index = 0;
	moveX += 20;
	moveX2 += 15;
	if(moveX >= screenWidth)
		moveX = 0;
	if(moveX2 >= screenWidth)
		moveX2 = 0;
}
int main()
{
	read();
	iSetTimer(200, moveBird);
	iSetTimer(1000, ghori);
	iSetTimer(1, change);
	if(music)
		PlaySound("music\\backGround.wav", NULL, SND_LOOP | SND_ASYNC);
	iInitialize(screenWidth, screenHeight, "Angry Birds");
	//iSetTimer(900, startGame);
	//image1 = iLoadImage("picture\\bird.png");
	return 0;
}
