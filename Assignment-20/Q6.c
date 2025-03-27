// 4. Four players are playing a tournament of Chess with round robin method 
// (each player will play with every other player). Each win has 2 points, draw has 1 point 
// and loose has 0 points. Declare a score_board two dimensional array to store the scores 
// of the players agains each player.
        // 5. For que-4, define a function to update score_board after each match result.
        // 6. For que-4, define a function to display score_board.
        // 7. For que-4, define a function which returns the score of a specific player
        // 8. For que-4, define a function to find the winner of the tournament.
        // 9. For que-4, define a function to display rank of the players.
        // 10. For que-4, define a function to run tournament, in which user has to enter result of 
        // each game and update score board using score_board function.



        #include<stdio.h>
        void run_tournament(int score_board[][4]);
        void update_score_board(int p1,int p2,int result,int score_board[][4]);
        void display_score_board(int score_board[][4]);
        int getScore(int player,int score_board[][4]);
        int findWinner(int scores[]);
        void display_rank(int scores[]);
        int main(){
            int score_board[4][4]={0};
            run_tournament(score_board);
            return 0;
        }
        void run_tournament(int score_board[][4]){
            update_score_board(0,1,2,score_board);
            update_score_board(0,2,1,score_board);
            update_score_board(0,3,2,score_board);
            update_score_board(1,2,1,score_board);
            update_score_board(1,3,2,score_board);
            update_score_board(2,3,0,score_board);
            
            display_score_board(score_board);
            
            int scores[4];
            printf("\n\n");
            for(int i=0;i<4;i++){
                int result=getScore(i,score_board);
                printf("Score of the player - %d is %d.\n",i+1,result);
                scores[i]=result;
            }
            int temp=findWinner(scores);
            printf("\n\nWinner of the tournament is Player - %d and score of the player is %d.\n\n",temp+1,getScore(temp,score_board));
            
            display_rank(scores);
        }
        void display_rank(int scores[]){
            int sortedArray[4], temp;
            
            // Copy the original array.....
            for(int i=0;i<4;i++){
                sortedArray[i]=scores[i];
            }
            
            // Sorting of the array....
            for(int round=1;round<4;round++){
                for(int i=0;i<4-round;i++){
                    if(sortedArray[i]<sortedArray[i+1]){
                        temp=sortedArray[i];
                        sortedArray[i]=sortedArray[i+1];
                        sortedArray[i+1]=temp;
                    }
                }
            }
            
            for(int i=0;i<4;i++){
                for(int j=0;j<4;j++){
                    if(scores[i]==sortedArray[j]){
                        
                        printf("Player %d has the rank %d.\n",i+1,j+1);
                        break;
                    }
                }
            }
        }
        int findWinner(int scores[]){
            int greatest=scores[0],temp=0;
            for(int i=1;i<4;i++){
                if(scores[i]<greatest){
                    greatest=scores[i];
                    temp++;
                }
            }
            return temp;
        }
        int getScore(int player,int score_board[][4]){
            int score=0;
            for(int i=0;i<4;i++){
                score+=score_board[player][i];
            }
            return score;
        }
        void update_score_board(int p1,int p2,int result,int score_board[][4]){
            score_board[p1][p2]=result;
            score_board[p2][p1]=2-result;
        }
        void display_score_board(int score_board[][4]){
            for(int i=0;i<4;i++){
                for(int j=0;j<4;j++){
                    printf("%d\t",score_board[i][j]);
                }
                printf("\n");
            }
        }