#include <bits/stdc++.h>
#include <windows.h>
#include <mmsystem.h> // For mciSendString
#include <ctime>

using namespace std;

// Speak function to reduce repetition
void speak(string phrase) {
    string speakCommand = "espeak \"" + phrase + "\"";
    system(speakCommand.c_str());
}

// Greet user based on time
void greetings() {
    time_t now = time(0);
    tm *timeinfo = localtime(&now);

    if (timeinfo->tm_hour < 12) {
        cout << "Good Morning Master Aditya" << endl;
        speak("Good Morning Master Aditya");
    } else if (timeinfo->tm_hour <= 16) {
        cout << "Good Afternoon Master Aditya" << endl;
        speak("Good Afternoon Master Aditya");
    } else {
        cout << "Good Evening Master Aditya" << endl;
        speak("Good Evening Master Aditya");
    }
}

// Print date and time
void datetime() {
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "The date and time is: " << endl << dt << endl;
}

int main() {
    system("cls");

    cout << "\t<###################################  PERSONAL ASSISTANT ########################################>" << endl << endl;

    string password;
    string userCommand;

    do {
        cout << "******************************************************" << endl;
        cout << "| ENTER THE PASSWORD TO CONFIRM YOU ARE MASTER ADITYA |" << endl;
        cout << "******************************************************" << endl << endl;

        speak("Enter the password to confirm you are Master Aditya");

        getline(cin, password);

        STARTUPINFO startInfo = { sizeof(startInfo) };
        PROCESS_INFORMATION processInfo = {0};

        if (password == "aditya") {
            cout << "\n<**************************************************************************************************>\n\n";
            greetings();

            do {
                cout << "\n<**********************************************************************************************>\n\n";
                cout << "How can I help you Master Aditya..." << endl;
                speak("How can I help you Master Aditya");

                cout << "Enter your question ===> ";
                getline(cin, userCommand);
                cout << endl << "Answer to your question is ===> ";

                if (userCommand == "hello" || userCommand == "hi") {
                    cout << "Hello Master Aditya..." << endl;
                    speak("Hello Master Aditya");
                }

                else if (userCommand == "what is the time") {
                    datetime();
                }

                else if (userCommand == "who are you" || userCommand == "who is speaking") {
                    cout << "I'm a personal assistant created by Master Aditya!" << endl;
                    speak("I'm a personal assistant created by Master Aditya");
                }

                else if (userCommand == "open notepad") {
                    cout << "Opening Notepad..." << endl;
                    speak("Opening Notepad");
                    ShellExecute(NULL, "open", "notepad.exe", NULL, NULL, SW_SHOWNORMAL);
                }

                else if (userCommand == "open Microsoft Excel") {
                    cout << "Opening Microsoft Excel..." << endl;
                    speak("Opening Microsoft Excel");
                    ShellExecute(NULL, "open", "excel.exe", NULL, NULL, SW_SHOWNORMAL);
                }

                else if (userCommand == "open Microsoft Word") {
                    cout << "Opening Microsoft Word..." << endl;
                    speak("Opening Microsoft Word");
                    ShellExecute(NULL, "open", "winword.exe", NULL, NULL, SW_SHOWNORMAL);
                }

                else if (userCommand == "open Microsoft Paint") {
                    cout << "Opening Microsoft Paint..." << endl;
                    speak("Opening Microsoft Paint");
                    ShellExecute(NULL, "open", "mspaint.exe", NULL, NULL, SW_SHOWNORMAL);
                }

                else if (userCommand == "open google") {
                    cout << "Opening Google..." << endl;
                    speak("Opening Google");
                    system("start https://www.google.com");
                }

                else if (userCommand == "open youtube") {
                    cout << "Opening YouTube..." << endl;
                    speak("Opening YouTube");
                    system("start https://www.youtube.com");
                }

                else if (userCommand == "close chrome browser") {
                    cout << "Closing Chrome browser..." << endl;
                    speak("Closing Chrome browser");
                    system("TASKKILL /IM chrome.exe /F");
                }

                else if (userCommand == "open photo") {
                    cout << "Opening photo..." << endl;
                    speak("Opening photo");
                    ShellExecute(NULL, "open", "MyGod.png", NULL, NULL, SW_NORMAL);
                }

                else if (userCommand == "open oops book") {
                    cout << "Opening OOPS book..." << endl;
                    speak("Opening OOPS book");
                    ShellExecute(NULL, "open", "C:\\Users\\rajiv\\Documents\\6th sem\\oops c++ balaguruswamy.pdf", NULL, NULL, SW_NORMAL);
                }

                else if (userCommand == "open video") {
                    cout << "Opening video..." << endl;
                    speak("Opening video");
                    ShellExecute(NULL, "open", "C:\\Users\\rajiv\\Documents\\Zoom\\edit distance.mp4", NULL, NULL, SW_NORMAL);
                }

                else if (userCommand == "bye" || userCommand == "exit") {
                    cout << "Good Bye Master Aditya, see you soon!" << endl;
                    speak("Good Bye Master Aditya, see you soon!");
                    exit(0);
                }

                else {
                    cout << "Sorry, could not understand your command. Please try again!" << endl;
                    speak("Sorry, could not understand your command. Please try again");
                }

            } while (1);
        } else {
            system("cls");
            cout << "\t<###################################  PERSONAL ASSISTANT ########################################>" << endl << endl;
            cout << "**********************" << endl;
            cout << "X Incorrect Password X" << endl;
            cout << "**********************" << endl << endl;

            speak("Incorrect Password, please enter correct password");
        }

    } while (1);

    return 0;
}
