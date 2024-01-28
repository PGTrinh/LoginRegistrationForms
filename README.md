# LoginRegistrationForms
Create basic Login and Registration Forms. Non Secure, No encryption or trust certificate utilized.

Prerequisites:

MS Visual Studio 2022 or later

.NET Framework (C++/CLI support for v143 build tools)

SQL Express Server

Start:

Create CLR Empty Project (.NET framework)

Project property: Platform x64; SubSystem: Windows; Entry Point: main

Server Explorer: Connect to Database; Microsoft SQL server; uncheck "always use this selection"

- Servername: localhost\sqlexpress; put "Encryption" false. Will deal with encryption, trust certificate, and security later on; test connection if successful.
- Choose database name and create.
- Create table; can change table name; under id create name: varchar(50) can change to varchar(100).
- Create email, etc. address & password select varchar(MAX). uncheck "allow nulls" if shouldn't empty.
- Make id auto increment by Id column property - set (Is Identity) to "True."
- Add UNIQUE to email so "NOT NULL UNIQUE", create table by click Update- Update Database
- Refresh Tables tab to see added table.

Create Login Form:

- Add new item to project -\> UI -\> Window Form -\> Change name. Error = Close Page reopen MS VS
- Use Toolbox; add Label; align mid by change auto size to "False," drag it out; align to Middle Center
- Create label for Email & Password + textbox for those; add name for textbox.
- Set Password char to use \* to hide char.
- Create buttons; add listener to buttons. Cancel btn: this-\>Close(); Login btn need link to database
- Login btn need to read text & check for correct email, password then compare make sure correct.
- Show message box, try & catch for error in connection to database.
- Add "usingnamespace System::Data::SqlClient;" when using SqlConnection String"
- Create SqlQuery to get email & pass from database.
- Add header class store data of authenticated user: id, name, email, phone, address, password. According to the database. Then include in Loginform.h
- Create obj of user to store authenticated user info. Add read info each lines.
- Add linked register and code switch to register.

Create main method:

- Include user pointer to nullptr.
- Create while loop for loginForm.h
- Show login form as a dialog.
- Create a switch to register if user selects Register link. Include Register form.
- In the Register form, check if want to switch back to login form, continue to go back to begin of loop.
- Otherwise break the loop.

Create Main Menu:

- Make new Window Form, create labels.
- Source code include user.h, reference user to initialize label & show authenticated user info

Could just link this to the app main function instead of showing authenticated user info

Create Register form:

- Create design, same process as Login form. Add Linked Login Button.
- Code Cancel as "this-\>Close();"
- Add listener to login link, add switch to login variable. Make public access outside of class.
- Add listener to register btn to read and add new user to database.
- Add hide password and confirm password into a \* key when input.
- Add check box for showing password to show plain text characters.
- Ensure read all read fields and condition if any field is empty to show message box.
- Ensure password and confirm password are same.
- Try connect to database, show error if any issue.
- Create public type Users to save user info and can access anywhere. Add header user.h
- ExecuteNonQuery then initialize new user with all info field.

Skill learned:

Create & connect to SQL Database that stored users' information.

Create Login & Registration Interface.

Create Main Dashboard interface.

Issue:

Encryption/Trust certificate issue, not supporting data connection to SQL server. Modified Encrypt to false and rerun the project fix the issue.

Mistake: Created Create CLR Empty Project (.NET) instead of (.NET framework) -\> did not support UI toolbox control. Try reinstalling VS and repair, etc. Before redo project to found error

[https://stackoverflow.com/questions/69248334/webbrowser-option-greyed-out-in-toolbox-visual-studio-2019](https://stackoverflow.com/questions/69248334/webbrowser-option-greyed-out-in-toolbox-visual-studio-2019)

![alt text](https://github.com/PGTrinh/LoginRegistrationForms/blob/main/project%20proof.png)

Reference:

https://www.youtube.com/watch?v=huCyyUVYk3g
