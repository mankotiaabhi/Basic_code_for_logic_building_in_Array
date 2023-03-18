#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  int arr[number_of_students], sum = 0;
    int a[number_of_students];
    if (gender == 'g')
    {
        for (int i = 1; number_of_students > i; i=i+2)
        {
            

                arr[i] = marks[i];
                sum = sum + marks[i];
            
        }
    }
    if (gender == 'b')
    {
        for (int i = 0; number_of_students >= i; i=i+2)
        {
            
                a[i] = marks[i];
                sum = sum + a[i];
            
        }
    }
    return sum;
    
}



int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}