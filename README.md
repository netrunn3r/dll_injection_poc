# dll_injection_poc
This is simple proof of concept to show how Windows include external DLL libraries. By default it check DLL in location below in that order:
1. The directory from which the application loaded. 
2. The system directory. Use the GetSystemDirectory function to get the path of this directory.  
3. The 16-bit system directory. There is no function that obtains the path of this directory, but it is searched. 
4. The Windows directory. Use the GetWindowsDirectory function to get the path of this directory. function to get the path of this directory. 
5. The current directory.  
6. The directories that are listed in the PATH environment variable. Note that this does not include the per-application path specified by the App Paths registry key. The App Paths key is not used when computing the DLL search path. 

This is prone to DLL injection vulnerability, as attacker can put malicious DLL to these paths and legitimate application will include it, before original DLL

In this repo there are:
1. simple DLL file, which simply show up message box when loaded by some app
2. simple "DLL client" which load DLL in this repo


One of the use cases:
1. attacker put malicious DLL to Downloads folder
2. user run some legitimate app prone to DLL injection from Downloads folder
3. vulnerable app run malicious DLL, not legitimate