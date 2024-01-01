#include "Employer.h"
//
// Created by ASUS on 16-10-2023.
//



// methods ---> post a job
// we will create a binary search tree



typedef struct TreeNode TreeNode;

Company* Constructor_Company(){
    Company * Node = malloc(sizeof(Company));

    printf("Enter your firm's name--> ");
    fgets((Node->ComapanyName), sizeof(Node->ComapanyName),stdin);
    fflush(stdin);


    printf("Enter what job you want to post--> ");
    fgets((Node->job_post), sizeof(Node->ComapanyName),stdin);
    fflush(stdin);


    printf("Enter what package you are offering(lakhs/annum)--> ");
    scanf("%lf",&(Node->packageCTC));
    fflush(stdin);

    return Node;
}

TreeNode* Constructor_TreeNode(Company *ptr){
    TreeNode* tmp= malloc(sizeof( TreeNode));
    tmp->left=NULL; tmp->right=NULL;
    tmp->next=NULL;
    tmp->info=ptr;
    return tmp;
}

TreeNode * insert(TreeNode**root,Company* node){
    if(*root==NULL){
        *root=Constructor_TreeNode(node);
        return *root;
    }
    else if(node->packageCTC==(*root)->info->packageCTC){
        TreeNode * trav=*root;
        while(trav->next!=NULL){
            trav=trav->next;
        }
        TreeNode * tmp= Constructor_TreeNode(node);
        trav->next=tmp;
        return *root;
    }

    else if(node->packageCTC>(*root)->info->packageCTC){
        (*root)->right= insert(&(*root)->right,node);
    }
    else {
        (*root)->left= insert(&(*root)->left,node);
    }

    return *root;

}

void print_details(Company*par){
    printf("\n********-------*******\n");
    printf("Company name: %s",par->ComapanyName);
    printf("Job Posting: %s",par->job_post);
    printf("Package offer(Lakhs/annum):  %lf",par->packageCTC);
    printf("\n********-------*******");
    printf("\n");

}






