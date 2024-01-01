# Job-Finder-Application
# Job Finder Application

The Job Finder Application is a console-based program that facilitates firms to post job vacancies and job seekers to find suitable job opportunities based on literal matching criteria. The application utilizes embedded linked lists within a Binary Search Tree (BST) for efficient data organization and retrieval.

## Overview

This application comprises three main files:
- **Employee.c**
- **Employer.c**
- **Main.c** (or jobfinder.c)

Each file serves specific functionalities contributing to a job matching system designed for firms and job seekers.

## Employee.c

The `Employee.c` file manages functionalities related to job seekers:
- `Constructor_Employee()`: Constructs an Employee object by taking preferred job profile and expected salary as input.
- `search(TreeNode * root, Employee*tmp)`: Searches the job database to find matching job opportunities for the job seeker based on literal matching of criteria word to word.

## Employer.c

The `Employer.c` file handles functionalities for firms posting job vacancies:
- `Constructor_Company()`: Constructs a Company object by taking the firm's name, job post, and offered package (in lakhs per annum) as input.
- `Constructor_TreeNode(Company *ptr)`: Constructs a TreeNode for the binary search tree using the Company object with an embedded linked list.
- `insert(TreeNode** root, Company* node)`: Inserts a Company node into the binary search tree based on the offered package with an embedded linked list.
- `print_details(Company*par)`: Prints the details of a company's job posting.

## Main.c (or jobfinder.c)

The `Main.c` (or `jobfinder.c`) file serves as the main program execution file and orchestrates functionalities for firms and job seekers:
- Implements a menu-driven interface allowing users to choose between being a firm or job seeker.
- Handles the functionalities for posting jobs (for firms) or searching for jobs (for job seekers) based on literal word-to-word matching criteria.

## Usage

1. Compile the application using an appropriate C compiler.
2. Run the executable file.
3. Follow the prompts to:
   - Post a job (if you are a firm).
   - Search for job opportunities (if you are a job seeker).


