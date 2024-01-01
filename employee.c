#include "Employer.h"
#include "Employee.h"

Employee * Constructor_Employee(){
    Employee * tmp= malloc(sizeof(Employee));
    printf("Enter preferred job profile: ");
    fgets(tmp->job_need,sizeof(tmp->job_need),stdin);
    fflush(stdin);

    printf("Enter your expected salary: ");
    scanf("%lf",&(tmp->expected_package));
    fflush(stdin);
    printf("\n");
    return tmp;
}


bool search(TreeNode * root,Employee*tmp){
    bool flag=false;
    if(root==NULL){
        return false ;
    }
    // here we need to print the current roots data is mathches our conditions
    if(root->info->packageCTC>=tmp->expected_package && strcmp(root->info->job_post,tmp->job_need)==0){
        print_details(root->info);
         flag=true;
    }

    if(root->next!=NULL){
        TreeNode * trav=root->next;
        while(trav!=NULL){
          if(trav->info->packageCTC>=tmp->expected_package && strcmp(trav->info->job_post,tmp->job_need)==0) {
              print_details(root->info);
              flag=true;
          }
            trav=trav->next;
        }
    }

    return search(root->left,tmp)||search(root->right,tmp)||flag;

}

