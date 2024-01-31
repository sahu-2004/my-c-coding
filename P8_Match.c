#include<stdio.h>  
void main()  
{
  char player1[20];  
  char player2[20]; 
  int p1Score, p2Score, scoreGap;  
  printf("Player 1 Enter Your Name : "); 
  scanf("%s",&player1);
  printf("Player 1 Enter Score : "); 
  scanf("%d",&p1Score);
  printf("Player 2 Enter Your Name : "); 
  scanf("%s",&player2);  
  printf("Player 2 Enter Score : "); 
  scanf("%d",&p2Score);
  
  
  if(p1Score > p2Score){
      scoreGap = p1Score - p2Score;
      printf("%s WON by %d Score", player1, scoreGap);
  }else if(p1Score < p2Score){
      scoreGap = p2Score - p1Score;
      printf("%s WON by %d Score", player2, scoreGap);
  }else if(p1Score == p2Score){
      printf("Its a TIE");
  }
  
  //if program is not pausing
  //use getch();
  
}
