
//FOR ANY AND ALL DOUBTS REFER TO FREYBALL>TXT FOR ALGO


#include <stdio.h>

//Typedefing all the structures
typedef struct {
    int height;
    char name[50];
    int integrity;
    int ability;
    int discipline;
} fritacole;

typedef struct {
    fritacole members[50];
    int points;
    int fouls;
    int no;
} team;

typedef struct {
    team team1;
    team team2;
    int no;
    int winner;
    int better_team;
    char outcome[100];
   
} frey;

/*
void test(frey freygame) { //method used in requirement of input tests
    printf("1_FLAGS\n fouls %d \n", freygame.team1.fouls);
    printf("points %d \n", freygame.team1.points);
    printf("2_FLAGS\n fouls %d \n", freygame.team2.fouls);
    printf("points %d \n", freygame.team2.points);
} 
*/


fritacole input_fritacole(fritacole *ein,int i) { //inputting the fritacole array of index [i] directly at location
    printf("Enter Player %d name: ",i);
    scanf("%s", ein->name);
    printf("Enter height: ");
    scanf("%d", &ein->height);
    printf("Enter integrity: ");
    scanf("%d", &ein->integrity);
    printf("Enter ability: ");
    scanf("%d", &ein->ability);
    printf("Enter discipline: ");
    scanf("%d", &ein->discipline);
    //printf(" input flag %s\n", ein->name);
}

int newscore() { // simple input func for points and fouls
    int score;
    scanf("%d", &score);
    return score;
}

void newmembers(fritacole a[], int no) { // sends the location of each index to be filled with data from the user
  
    for (int i = 0; i < no; i++) {
        input_fritacole(&a[i],i);
      
       //printf("new memeber flag \n %s", a[i].name);
        //input_fritacole(&input_frit);
       // a[i] = input_frit;
    }
}

team newteam(int no) { // team creation method, this takes the team creation flow of code 
    team a;
    a.no = no;
    newmembers(a.members, no); //sending flow to input members array which is a fritacole array
    printf("enter points \n");
    a.points = newscore(); //sends flow to a simple input func
    printf("enter fouls \n");
    a.fouls = newscore();// given above

    //printf("%s team input flag \n", a.members[0].name);
    return a;
}


int check_better(frey freygame) {
    int team1_score = 0;
    int team2_score = 0;
    for(int i = 0;i<freygame.no;i++) {

        team1_score = team1_score + freygame.team1.members[i].ability + freygame.team1.members[i].discipline + freygame.team1.members[i].height + freygame.team1.members[i].integrity;
        team2_score = team2_score+ freygame.team2.members[i].ability + freygame.team2.members[i].discipline + freygame.team2.members[i].height + freygame.team2.members[i].integrity;    
    }
    //printf("\n FLAG T1 \n %d", team1_score);
    //printf("\n FLAG T2 \n %d", team2_score);
    if(team1_score==team2_score)
    return 0; // shows a tie
    if(team1_score> team2_score)
    return 1; //shows team 1 better
    if(team2_score>team1_score)

    return 2; // shwos team 2 better
    
}


int winner_game(frey freygame)

{
    if(freygame.team1.points > freygame.team2.points)
    return 1;
    if(freygame.team2.points > freygame.team1.points)
    return 2;
    if(freygame.team1.fouls < freygame.team2.fouls)
    return 1; //returning 1 for team 1, here with lesser fouls
    if(freygame.team2.fouls < freygame.team1.fouls) 
    return 2; // 2 for team 2
    return 0; // zero for tie, since no lesser was found
    }
   

char valid_output(int winner,int better) {
    
    printf("\n***************************************************\n");
    if (winner == 0)
    printf(" match ended in a draw\n");
    printf("the team %d has won the match \n", winner);
    if(better == 0)
    printf("both teams are equal");
    printf("the statistically better team is %d \n",better);
    if (winner == better)
    {
    printf("the team with more statistical ability won \n");
    return ("team %d has won_the better team is %d_the response is_valid#\n",winner,better);
    }
    {printf("luck had a bigger swing perhaps, the team with lesser stats won\n");
    return ("team %d has won_the better team is %d_the response is_valid#",winner,better);
    }



} 



int main() {
    frey freygame;
    printf("Enter number of members in each team: \n ");
    scanf("%d", &freygame.no);
    printf("\n******************************\n***************\n\n");
    printf("you are begining TEAM 1 creation \n");
    freygame.team1 = newteam(freygame.no); //sending to the new team creation function
    printf("Team 1 is created\n*****************\n\n\n\n");
    //printf("%s main function flag \n", freygame.team1.members[0].name);
    printf("you are begining team 2 creation \n");
    freygame.team2 = newteam(freygame.no); //sending to the new team creation function
    //test(freygame); //testing method, print all inputs or required inputs
    printf("Team 2 is created\n*****************\n\n\n\n");
    freygame.better_team = check_better(freygame);
    printf("FLAG better team %d", freygame.better_team);
    freygame.winner = winner_game(freygame);
    *freygame.outcome = valid_output(freygame.winner, freygame.better_team);
    

    return 0;
}







/*
void test(frey freygame)  { //TO CHECK IF ALL VALUES ARE ENTERED 
    printf("team 1 deets \n ");
    printf("fouls %d \n", freygame.team1.fouls);
    printf("points %d \n", freygame.team1.points);
    printf("members \n");
    for(int i = 0; i < freygame.no; i++) {
        printf("member name %s \n", freygame.team1.members[i].name);
        printf("member height, %d \n", freygame.team1.members[i].height);
        printf("member intergrity %d",freygame.team1.members[i].integrity);
        printf("member ability %d \n",freygame.team1.members[i].ability);
        printf("member discipline %d \n",freygame.team1.members[i].discipline); 

    }

    printf("team 2 deets \n");

    printf("fouls %d\n", freygame.team2.fouls);
    printf("points %d\n", freygame.team2.points);
    printf("members \n");
    for(int i = 0; i < freygame.no; i++) {
        printf("member name %s \n", freygame.team2.members[i].name);
        printf("member height, %d \n", freygame.team2.members[i].height);
        printf("member intergrity %d \n",freygame.team2.members[i].integrity);
        printf("member ability %d \n",freygame.team2.members[i].ability);
        printf("member discipline %d \n",freygame.team2.members[i].discipline);

    }

}
*/