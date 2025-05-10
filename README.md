# 🧠 Personal Voice Assistant (C++)

A basic personal assistant built in **C++** for Windows, capable of responding to typed commands, opening applications, accessing websites, playing media files, and responding with voice using `espeak`.

---

## 🎯 Features

- ✅ Password-protected access
- ✅ Greets user based on system time
- ✅ Voice responses using `espeak`
- ✅ Opens applications like Notepad, MS Word, Excel, Paint
- ✅ Plays music using `mciSendString`
- ✅ Opens websites (Google, YouTube)
- ✅ Reads and speaks date and time
- ✅ Opens local files like PDFs, images, and videos
- ✅ Closes Chrome browser on command

---

## 📂 File Structure
- main.cpp: contains the major code
- espeak: require to convert text to voice

  
---

## 🛠 Requirements

- Windows OS
- [espeak](http://espeak.sourceforge.net/) (for voice output)
- C++17 or later
- Compatible compiler (MinGW, MSVC)
- System path access to:
  - `notepad.exe`, `excel.exe`, `winword.exe`, `mspaint.exe`
  - Chrome (for browser commands)

---

## 🧪 How to Run

1. Clone the repository
2. Compile using a C++ compiler
3. Run the program

## Default Password
Password = aditya
## Notes
- Ensure that correct paths are replaced of Microsoft Office features
- If using espeak, add it to your system PATH or provide full path.
   
   

