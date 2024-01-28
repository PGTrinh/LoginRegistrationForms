#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    
    Users^ user = nullptr;
    while (true) {
        LoginRegForm::LoginForm loginForm;
        loginForm.ShowDialog();

        if (loginForm.switchToRegister) {
            //Show the register form
            LoginRegForm::RegisterForm registerForm;
            registerForm.ShowDialog();

            if (registerForm.switchToLogin) {
                continue;
            }
        }
        else {
            user = loginForm.user;
            break;
        }
    }
   
    // Check if the login was successful
    if (user != nullptr) {
        // Create an instance of MainForm and pass the user object
        LoginRegForm::MainForm^ mainForm = gcnew LoginRegForm::MainForm(user);
        // Run the application with MainForm
        Application::Run(mainForm);
    }
    else {
        MessageBox::Show("Exit Authentication: Goodbye!",
            "LoginRegForm-main", MessageBoxButtons::OK);
    }
}
