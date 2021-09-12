/*# include "badhon.h"
struct saveScoreFile
{
	int highScores;
	char playerName[100];
}ssf[11], temp;

FILE *accessSaveFile;
int save=0;
int temp_score;
char temp_name[100];
int newScore;
char name2[100];
char holdHighScore[10];
int nameL = 0;
char scrCount[10];
int score = 0;
char name[200];

void saveScore()
{
	save=1;
	ssf[10].highScores = 50-timeCount;
	//printf("%d %d\n", ssf[10].highScores, timeCount);
	strcpy(ssf[10].playerName,name2);
	iFilledRectangle(0,0,100,500);
	accessSaveFile = fopen("High Score.txt", "r");

	for(int i = 0; i<10 ; i++)
	{
		fscanf(accessSaveFile , "%s %d" , &ssf[i].playerName  , &ssf[i].highScores);
	}

	fclose(accessSaveFile);
	if(ssf[9].highScores>ssf[10].highScores){
		ssf[9].highScores=ssf[10].highScores;
		strcpy(ssf[9].playerName, name);
		for(int i=8; i>=0; i--){
			if( ssf[i].highScores > ssf[i+1].highScores ){
				/*temp_score = ssf[i].highScores;
				ssf[i].highScores = ssf[i+1].highScores;
				ssf[i+1].highScores = temp_score;

				strcpy( temp_name , ssf[i+1].playerName);
				strcpy( ssf[i].playerName , ssf[i+1].playerName);
				strcpy( ssf[i+1].playerName , temp_name);*/
/*				temp=ssf[i];
				ssf[i]=ssf[i+1];
				ssf[i+1]=temp;
			}
			else break;
		}
	}
	score=0;
	accessSaveFile = fopen("High Score.txt", "w");

	for(int i = 0; i<10 ; i++)
	{
		fprintf(accessSaveFile , "%s\t%d\n" , ssf[i].playerName  , ssf[i].highScores);
	}

	fclose(accessSaveFile);

}*/