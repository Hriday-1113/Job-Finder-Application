//
// Created by ASUS on 18-10-2023.
//

#ifndef C_MINI_PROJECT_JOB_FINDER_EMPLOYER_H
#define C_MINI_PROJECT_JOB_FINDER_EMPLOYER_H
#include <stdlib.h>
#include <stdio.h>

typedef struct {
    char ComapanyName[100];
    double packageCTC;
    char job_post[100];
} Company;

// Define TreeNode structure
typedef struct TreeNode {
    struct TreeNode* left;
    Company* info;
    struct TreeNode* right;
    struct TreeNode* next;
} TreeNode;

// Function declarations
Company* Constructor_Company();
TreeNode * Constructor_TreeNode(Company *ptr);
TreeNode* insert(TreeNode** root, Company* node);
void print_details(Company* par);




#endif //C_MINI_PROJECT_JOB_FINDER_EMPLOYER_H
