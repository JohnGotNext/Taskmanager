#include "Task.h"
#include <iostream>

using namespace std;


Task::Task(){
    id = 000;
    title = "XXXX";
    description = "XXXXXX";
    priority = 0;
}

Task::Task(int taskId, string taskTitle, string taskDescription, int taskPriority){
    id = taskId; 
    title = taskTitle; 
    description = taskDescription; 
    priority = taskPriority; 
}

int Task::getId() const{
    return id; 
}

string Task::getTitle() const{
    return title; 
}

string Task::getDescription() const{
    return description; 
}

int Task::getPriority()const{
    return priority; 
}

bool Task::isCompleted()const{
    return completed; 
}

void Task::markCompleted(){
    if(priority == 0){
         completed = true; 
    }
}

Task::~Task(){
}; 


