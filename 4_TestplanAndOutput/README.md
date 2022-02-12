# Test Plan


| Test ID | Test Case objective            |  Input Data                   | Excepted output          | Actual output             |
|---------|--------------------------------|-------------------------------|--------------------------|---------------------------|
|  TC_01  | Login Details                  |user name: hotel and password: hotel|login sucessful      |login Sucessful             |
|  TC_02  | for enterning room number      |enter room number: 1            |            1             | 1                         |
|  TC_03  | for enterning name             |enter name: ABC                |            ABC           | ABC                       |
|  TC_04  | for enterning phone number     |enter phone number: 9876543210 |      9876543210          | 9876543210                |
|  TC_05  | to view cusctomer record       |enter room number: 1         | 1, ABC, 98765432110         | 1, ABC, 98765432110       |
|  TC_06  | to delete record               |enter room number: 1         |removed sucessfully          |  Record not found     |
|  TC_07  | to search record               |choosing option 4              |   1, ABC, 98765432110       |1, ABC, 98765432110       |
|  TC_08  | to exit                        |choosing option 5              |Thank you, Visit again       |Thank you, Visit again    |
