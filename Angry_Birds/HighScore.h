#include<stdio.h>
#include<string.h>
int t = 0;
char str[100], str2[100];
void storeScore(){
	FILE *fp = fopen("D://Score.txt", "a");
	if(fp != NULL){
		fprintf(fp, "%s %d\n", name, score);
	}
	fclose(fp);
}
struct scoreHigh{
	char Fname[180];
	int N;
};
struct scoreHigh s[1000];
void bubbleSort(struct scoreHigh s[], int L){
	int I, J;
	for(I = 0; I < L; I++){
		for(J = 0; J < L; J++){
			if(s[J].N < s[J+1].N){
				struct scoreHigh p = s[J];
				s[J] = s[J+1];
				s[J+1] = p;
}
		}
	}
}
void read(){
	FILE *fp = fopen("D://Score.txt", "r");
	if(fp != NULL){
		int i = 0;
		char x[100];
		int y;
		while(fscanf(fp, "%s %d", &x, &y) != EOF){
			strcpy(s[i].Fname, x);
			s[i].N = y;
			i++;
		}
		int j;
		bubbleSort(s, i);
		//printf("Complete\n");
	}
	else{
		printf("Error\n");
	}
	fclose(fp);
}
void show(struct scoreHigh s[]){
	char HighScore[20];
	int i, w;
	for(i = 0, w = 0; i < 3; i++, w += 70){
		itoa(s[i].N, HighScore, 10);
		iSetColor(255, 0, 0);
		iText(470, 400-w, HighScore, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(400, 400-w, s[i].Fname, GLUT_BITMAP_TIMES_ROMAN_24);
	}
}