#include <iostream>
#include "FilePermissions..hpp"

using namespace std;

void change_permissions
(
    FilePermissions permissions[], 
    FilePermissions first = FilePermissions::no_permissions, 
    FilePermissions second = FilePermissions::no_permissions, 
    FilePermissions third = FilePermissions::no_permissions 
) 
{
        cout << "Permission for this file has changed: ";
        permissions[0] = first;
        permissions[1] = second;
        permissions[2] = third;

        int numbers[3] = {};
        for(int i = 0; i < 3; ++i)
        {
            numbers[i] = static_cast<int> (permissions[i]);
            cout << numbers[i];
        }
}

int main()
{
    const int perm_prop_amount = 3;
    FilePermissions user[perm_prop_amount] = 
    { 
        FilePermissions::read, 
        FilePermissions::write, 
        FilePermissions::no_permissions 
    };
    change_permissions(user, FilePermissions::read, FilePermissions::write, FilePermissions::execute);
}

