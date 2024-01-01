#include"Employer.h"
#include "Employee.h"

int main(){

    printf("\n\n********** MAIN MENU **********\n\n");

    TreeNode * database=NULL;
    Company * firm=NULL;
    Employee * job_seeker=NULL;
    while(true){

        int choice=0;
        printf("\n--->Are you a firm or a job seeker, Press 1-->Firm / Press 2-->job seeker / Press 3-->checkout: ");
        scanf("%d",&choice);
        fflush(stdin);
        printf("\n");
        switch (choice) {
            case 1: 
                firm=Constructor_Company();
                insert(&database,firm);
                printf("\nJob posted.\n");
                break;

            case 2:

                printf("Welcome to our Platform!!\n\n");
                job_seeker= Constructor_Employee();
                if(search(database,job_seeker)){
                   printf("\nHere are all the results.\n");

               }
               else{
                   printf("We cant find any jobs right now for your profile.\n");
               }
               break;

            case 3:
                exit(1);

            default:
                printf("Invalid Choice\n.");

        }

    }



}