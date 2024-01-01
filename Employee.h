//
// Created by ASUS on 18-10-2023.
//

#ifndef C_MINI_PROJECT_JOB_FINDER_EMPLOYEE_H 
#define C_MINI_PROJECT_JOB_FINDER_EMPLOYEE_H
#include "Employer.h"
#include <stdbool.h>
#include <string.h>
typedef struct{
    char job_need[100];
    double expected_package;
}Employee;

Employee * Constructor_Employee();
bool search(TreeNode * root,Employee*tmp);


#endif //C_MINI_PROJECT_JOB_FINDER_EMPLOYEE_H
