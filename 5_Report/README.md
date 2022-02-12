# Hotel Management System Report

## Description
Hotel management system is a project that helps to manage and stores the information of the visitors. Once the user successfully login to the application it helps in providing the information regarding the booking the room, deleting room, searching facilities etc. This project is implemented using the c programming. 

## Requirements

### High Level Requirements
| ID | Description                                               |  Status   |
|----|-----------------------------------------------------------|-----------|
|HLR1|Allow the user to login using correct password and username|Implemented|
|HLR2|Allow the user to make a choice between 1 to 5 options     |Implemented|
|HLR3|Allow the user to book a room for new customers            |Implemented|
|HLR4|Allow the user to view the customers details               |Implemented|
|HLR5|Allow the user to delete the customers details             |Implemented|
|HLR6|Allow the user to search the customers details             |Implemented|
|HLR7|Allow the user to exit from the application                |Implemented|


### Low Level Requirements
| ID | Description                                                                |  Status   |
|----|-----------------------------------------------------------                 |-----------|
|LLR1|The application will ask to login using correct username and password       |Implemented|
|LLR2|Application will ask to make choise between 1 to 5 options                  |Implemented|
|LLR3|Application ask the customers details to book room                          |Implemented|
|LLR4|Application ask the room number to view customers details                   |Implemented|
|LLR5|Application ask the room number to remove from the records                  |Implemented|
|LLR6|Application displays customers details if option-5 is seleted               |Implemented|
|LLR7|Application exit if user choose option-5                                    |Implemented|


### SWOT Analysis

![SWOT](https://user-images.githubusercontent.com/98875082/153245274-870bb6ef-b87d-4f87-a076-c18ca25c7f49.png)


### 4w's and 1H
### Who
Hotel management and development.
#### What
Hotel management system helps to maintain a database which is used to enter the visitors details. 
#### When
When the customers visit the hotel.
#### Where
This is seen in all the parts of the hotel where there is a lot of booking,cancellation and other actions happening.
#### How
Creating a system which will provide all the functionalities required for booking, cancelling of the rooms and other information regarding the management. The application is implemented using a c-complier.

## Structure
### Class Diagram
![classdiagram](https://user-images.githubusercontent.com/98875082/152681058-b369bd05-175f-416e-9b1a-e7111b12d2da.jpeg)
### Component Diagram
![cmpdiagram](https://user-images.githubusercontent.com/98875082/152681107-8d9c76cf-4db2-4af2-bf5d-d91cea09b742.png)

## Behavioural
### Flowchart
![flowchat](https://user-images.githubusercontent.com/98875082/152681135-978bee89-34ce-4826-8c26-8523fd5da8d0.png)
### Use Case
![Casediagram](https://user-images.githubusercontent.com/98875082/152681175-3b2e469e-c479-40dd-bdc4-bd7a11dcb284.PNG)

## Test Plan

| Test ID | Test Case objective            |  Input Data                   | Excepted output          | Actual output             |
|---------|--------------------------------|-------------------------------|--------------------------|---------------------------|
|  TC_01  | Login Details                  |user name: hotel and password: hotel|login sucessful      |login Sucessful             |
|  TC_02  | for enterning room number      |enter room number: 1            |            1             | 1                         |
|  TC_03  | for enterning name             |enter name: ABC                |            ABC           | ABC                       |
|  TC_04  | for enterning phone number     |enter phone number: 9876543210 |      9876543210          | 9876543210                |
|  TC_05  | to view cusctomer record       |enter room number: 1         | 1, ABC, 98765432110         | 1, ABC, 98765432110       |
|  TC_06  | to delete record               |enter room number: 1         |deleted sucessfully          |deleted sucessfully         |
|  TC_07  | to search record               |choosing option 4              |   1, ABC, 98765432110       |1, ABC, 98765432110       |
|  TC_08  | to exit                        |choosing option 5              |Thank you, Visit again       |Thank you, Visit again    |

## Output 

- Login Page:

![logic_S](https://user-images.githubusercontent.com/98875082/153701131-fdd1b8fa-96bb-448e-b648-e1e18f78025a.PNG)


- For Booking Room:

![book](https://user-images.githubusercontent.com/98875082/153701117-7f9236ea-208e-4d08-b54e-c0aada3c42e3.PNG)


- To view the customers record:

![view](https://user-images.githubusercontent.com/98875082/153701147-7df14de0-4fd3-425f-ba15-97338a0eb27e.PNG)


- To search the customer using room number:

![search](https://user-images.githubusercontent.com/98875082/153701158-828aa977-23bc-4717-842a-6af1757fb3cd.PNG)


- Exiting from the main menu:

![exit](https://user-images.githubusercontent.com/98875082/153701171-d63cd11e-9573-4903-b056-e3e2b5e43181.PNG)






