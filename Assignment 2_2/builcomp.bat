g++ -o Calculator Main.cpp
if %errorlevel% neq 0 exit /b %errorlevel%
Calculator.exe
