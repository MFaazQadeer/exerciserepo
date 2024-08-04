#include <stdio.h>
/*
Author:         Faaz Qadeer
Description:    Tell the grades based on Marks
Date:           03-08-2024
Day: 		 Saturday
*/

/*assuming resolve the mearch conflit by removing
<<<<<<< HEAD 
=======
Date:           04-08-2024
>>>>>>> feature*/

int main (){
    unsigned char marks; //as marks are from 0 to 100 so we can use char oor unsigned char 
    printf ("Please enter the grade : ");
    scanf ("%d", &marks);

    if (marks >= 73 && marks <100){
        printf ("Congrats! You got an A grade.");
    }else if (marks >= 68 && marks <73){
        printf ("You got a B+ grade.");
    }else if (marks >= 63 && marks <68){
        printf ("You got a B grade.");
    }else if (marks >= 58 && marks <63){
        printf ("You got a C+ grade.");
    }else if (marks >= 52 && marks <58){
        printf ("You got a C grade.");
    }else if (marks >= 47 && marks <52){
        printf ("You got a D+ grade.");
    }else if (marks >= 41 && marks <47){
        printf ("You got a D grade.");
    }else{
        printf ("You are Fail.");
    }
    return 0;
}
