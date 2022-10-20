//author: Armando Fabian Gonzalez
/*
this program create one list of coordinates in a file
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct point{
	int X;
	int Y;
};


int main(int argc, char*args[]){
	
	int M;
	scanf("introduce Shape of matrix: %d", &M);
//	M = atoi(args[1]);
	int i, j;
	struct point listPoints[M];
	struct point Coordinate;

	srand(time(NULL));
	FILE* File;
	File = fopen("list_points.txt", "w");
	if(File == NULL)
	{
	
		printf("error to open file\n");
	}

	for(i = 0; i < M/2; i ++){
		for(j = 0; j < M/2; j++){
			Coordinate.X = rand() % M + 1;
			Coordinate.Y = rand() % M + 1;
			listPoints[i] = Coordinate;
			fprintf(File, "[%d,%d]", Coordinate.X, Coordinate.Y);		
	//		printf("%d, %d\n", Coordinate.X, Coordinate.Y);
		}
		fprintf(File, "\n");
}
	printf("shape of matrix(%d, %d)\n total coordinates generated: %d\n", M/2, M/2, (M*M)/4);

fclose(File);

return 0;
}
