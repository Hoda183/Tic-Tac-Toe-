#include <stdio.h>
#include <stdlib.h>


char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='x';
 void print_matrix(){
     system("cls");
 for (int i=0;i<3;i++){
     for (int j=0;j<3;j++){
            printf("\t%c\t",matrix[i][j]);
 }
 printf("\n");
 }
 }

 void play (){
 char pos;
 printf("choose your position : <%c>",player);
 scanf("%c",&pos);
for (int i=0;i<3;i++){
     for (int j=0;j<3;j++){
             if ( matrix[i][j]== pos){
                matrix[i][j]= player;
                if (player == 'x'){
                    player  = 'o';
                }
                else {
                    player = 'x';
                }
                print_matrix();
            }
    }
 }
 }

 int all(){
 char x_counter=0;
 char o_counter=0;
 char counter= 0;
 for(int i=0; i<3;i++){
    for(int j=0;j<3;j++){
        if (matrix[i][j]!='x'&&matrix[i][j]!='o'){
            counter++;
        }
        if(matrix[i][j]=='x'){
            x_counter++;
        }else if (matrix[i][j]=='o'){
            o_counter++;
        }
        if(x_counter==3 || o_counter==3){
            return x_counter > o_counter ? 'x' :'o';
        }
 }
    x_counter=0;
    o_counter=0;
 }
 for(int i=0; i<3;i++){
    for(int j=0;j<3;j++){
        if(matrix[j][i]=='x'){
            x_counter++;
        }else if (matrix[j][i]=='o'){
            o_counter++;
        }
        if(x_counter==3 || o_counter==3){
            return x_counter > o_counter ? 'x' :'o';
        }
 }
    x_counter=0;
    o_counter=0;
 }
if (matrix[0][0]=='x' &&matrix[1][1]=='x' && matrix[2][2]=='x'){return 'x';}
else if (matrix[0][0]=='o' &&matrix[1][1]=='o' && matrix[2][2]=='o'){return 'o';}
else if (matrix[0][2]=='x' &&matrix[1][1]=='x' && matrix[2][0]=='x'){return 'x';}
else if (matrix[0][2]=='o' &&matrix[1][1]=='o' && matrix[2][0]=='o'){return 'o';}


if (counter==0){
    return 'e';
}
return '.';
 }

int main()
{
    while(all()=='.'){
            print_matrix();
            play();
    }
    if(all()=='x'){
        printf("x player is the winner");
    }else if (all()=='o'){
        printf("o player is the winner");
    }else if (all()=='e'){

    printf("tie");
    }

printf("%c",all());
    return 0;
}




