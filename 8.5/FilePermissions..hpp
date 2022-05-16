/** 
| 0 - no permissions |
| 1 - execute | 
| 2 - write |  
| 3 - execute and write |
| 4 - read | 
| 5 - execute and read |
| 6 - write and read |
| 7 - execute, write, and read | 
**/

enum class FilePermissions {
    no_permissions, execute, write, execute_and_write,
    read, execute_and_read, write_and_read, execute_write_read
};