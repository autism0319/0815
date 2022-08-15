#include<stdio.h>
#include<getch.h>
#include<stdlib.h>
#include<time.h>
int main(int argc,const char*argv[])
//构建迷宫地图
{
	char maze[10][10]={
						{'#','#','#','#','#','#','#','#','#','#'},
						{'#','@','#','#','#','#','#','#','#','#'},
						{'#',' ','#','#','#','#','#','#','#','#'},
						{'#',' ','#','#','#','#','#','#','#','#'},
						{'#',' ','#','#','#',' ',' ',' ',' ','#'},
						{'#',' ',' ',' ','#',' ','#','#',' ',' '},
						{'#','#','#',' ',' ',' ','#','#','#','#'},
						{'#','#','#','#','#','#','#','#','#','#'},
						{'#','#','#','#','#','#','#','#','#','#'} ,
						{'#','#','#','#','#','#','#','#','#','#'}};
	time_t t1=time(NULL);
	int x=1,y=1;
		for(;;)
		{
			system("clear");
			for(int i=0;i<10;i++)
			{
				for(int j=0;j<10;j++)
				{
					printf("%c ",maze[i][j]);
				}
				printf("\n");
			}
			if(x==5&y==9)
			{
				printf("通过\n");
				printf("通过时间%u",time(NULL)-t1);
			return 0; 
			}
			switch(getch())
			{
				case 183:
					if(x>0 && ' '==maze[x-1][y])
					{
					maze[x][y]=' ';
					maze[x-1][y]='@';
					x--;
					}
					break;
				case 184:
					if(x<9 && ' '==maze[x+1][y])
					{
					maze[x][y]=' ';
					maze[x+1][y]='@';
					x++;
					}
					break;
				case 185:
					if(y<9 && ' '==maze[x][y+1])
					{
					maze[x][y]=' ';
					maze[x][y+1]='@';
					y++;
					}
					break;
				case 186:
					if(y>0 && ' '==maze[x][y-1])
					{
					maze[x][y]=' ';
					maze[x][y-1]='@';
					y--;
					}
					break;
			}
		}
} 
