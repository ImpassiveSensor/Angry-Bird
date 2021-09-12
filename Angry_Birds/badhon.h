
# define g 9.8/100
# define PI 3.14159265
# define screenWidth 1000
# define screenHeight 550
int xCircle;
int yCircle;
int radius = 80;
double angle = 0.0;
int xLine = (radius+30)*cos(angle*PI/180);
int yLine = (radius+30)*sin(angle*PI/180);
int xBall = xCircle;
int yBall = yCircle;
int radiusBall = 5;
int v = 10;
int mposx;
int mposy;
int check = 0;
int timeChange = 1;
int timeMax;
int xCubePos = 800;
int yCubePos = 0;
int rMax;
int xCube1 = xCubePos+0, yCube1 = yCubePos+0;
int xCube2 = xCubePos+50, yCube2 = yCubePos+0;
int xCube3 = xCubePos+100, yCube3 = yCubePos+0;
int xCube4 = xCubePos+150, yCube4 = yCubePos+0;
int xCube5 = xCubePos+0, yCube5 = yCubePos+30;
int xCube6 = xCubePos+50, yCube6 = yCubePos+30;
int xCube7 = xCubePos+100, yCube7 = yCubePos+30;
int xCube8 = xCubePos+150, yCube8 = yCubePos+30;
int xCube9 = xCubePos+50, yCube9 = yCubePos+60;
int xCube10 = xCubePos+100, yCube10 = yCubePos+60;
int xCube11= xCubePos+75, yCube11 = yCubePos+90;

int xCubePos3 = 750;
int yCubePos3 = 0;

int LCube1 = xCubePos3+0, PCube1 = yCubePos3+0;
int LCube2 = xCubePos3+100, PCube2 = yCubePos3+0;
int LCube3 = xCubePos3+200, PCube3 = yCubePos3+0;
int LCube4 = xCubePos3+0, PCube4 = yCubePos3+180;
int LCube5 = xCubePos3+100, PCube5 = yCubePos3+170;
int LCube6 = xCubePos3+200, PCube6 = yCubePos3+160;
int LCube7 = xCubePos3+0, PCube7 = yCubePos3+360;
int LCube8 = xCubePos3+100, PCube8 = yCubePos3+350;
int LCube9 = xCubePos3+200, PCube9 = yCubePos3+340;
int LCube10 = xCubePos3+0, PCube10 = yCubePos3+540;
int LCube11= xCubePos3+100, PCube11 = yCubePos3+530;
int LCube12= xCubePos3+200, PCube12 = yCubePos3+520;

int gameState = -1;
char name[200];
int nameIndex = 0;
int dx = 10, dy = 10;
int image1;
int c1 = 1, c2 = 1, c3 = 1, c4 = 1, c5 = 1, c6 = 1, c7 = 1, c8 = 1, c9 = 1, c10 = 1, c11 = 1; 
int score = 0, birds = 0, showTime = 0;
int hit=0;


int timeCount=30;
bool canWrite = false;

void ghori()
{
	if(gameState==4 || gameState==7 || gameState==9){
		timeCount--;
		if(timeCount<=0){
			gameState = 5;
			canWrite = true;
		}
		
	}
}