/*******************************************************************************
**************************** Grade Average Program *****************************
**************************** By Richard Fleming    ****************************/


#include <stdio.h>

int main()
{
    int numOfGrades = 0;                    //Number of grades to be entered
    double sumOfGrades =0;                  //Store the sum of all grades
    double averageGrade = 0;                //Store the average grade

//Get the number of grades from the user    
    printf("Enter the number of grades you want to average: \n");
    scanf("%d", &numOfGrades);

//Check for positive number 
     if(numOfGrades < 0){
         printf("Enter a positive number of grades to be entered!");
     }else{
    
    //initializing array for the designated amount of grades.  
        double grades[numOfGrades];
    
    //get user input for the grades    
        for(int i=0; i<numOfGrades; ++i){
            printf("Enter grade number %d:\n", (i+1));
            scanf("%lf", &grades[i]);
        }
    
    //Calculate the sum of the grades    
        for(int i=0; i<numOfGrades; ++i ){
          sumOfGrades += grades[i];
        }
    
    //Calculate the average grade    
        averageGrade = ( sumOfGrades/numOfGrades);
        
        printf("The average grade is %lf.\n", averageGrade);
    
        return 0;
    }
}