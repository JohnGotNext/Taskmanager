#ifndef TASK_H
#define TASK_H 
#include <iostream> 

using namespace std; 


class Task{
    int id; 
    string title; 
    string description; 
    int priority;
    bool completed;  
    int duedate; 

public: 
    Task(); 
    Task(int taskId, string taskTitle, string taskDescription, int taskPriority); 

    int getId() const;
    string getTitle() const; 
    string getDescription() const; 
    int getPriority() const;
    bool isCompleted() const; 

    void markCompleted(); 

    ~Task(); 
     
}; 
#endif



