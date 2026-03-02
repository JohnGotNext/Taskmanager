#include <iostream> 
#include "User.h"
#include "Task.h"

using namespace std;

int main(){
    User user; 
    Task task(194, "Plan Event", "Plan event for my wedding", 5);

    cout << "Task Manager started successfully.\n";
    cout << task.getId() << endl;
    cout << task.getDescription() << endl;
    cout << task.getTitle() << endl;
    cout << task.getPriority() << endl;
    cout << task.isCompleted() << endl;


    return 0;
}