
//#include <Python.h>
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <string>

using namespace std;


//
///*
//Description:
//	To call this function, simply pass the function name in Python that you wish to call.
//Example:
//	callProcedure("printsomething");
//Output:
//	Python will print on the screen: Hello from python!
//Return:
//	None
//*/
//void CallProcedure(string pName)
//{
//	char* procname = new char[pName.length() + 1];
//	std::strcpy(procname, pName.c_str());
//
//	Py_Initialize();
//	PyObject* my_module = PyImport_ImportModule("PythonCode");
//	PyErr_Print();
//	PyObject* my_function = PyObject_GetAttrString(my_module, procname);
//	PyObject* my_result = PyObject_CallObject(my_function, NULL);
//	Py_Finalize();
//
//	delete[] procname;
//}
//
///*
//Description:
//	To call this function, pass the name of the Python functino you wish to call and the string parameter you want to send
//Example:
//	int x = callIntFunc("PrintMe","Test");
//Output:
//	Python will print on the screen:
//		You sent me: Test
//Return:
//	100 is returned to the C++
//*/
//int callIntFunc(string proc, string param)
//{
//	char* procname = new char[proc.length() + 1];
//	std::strcpy(procname, proc.c_str());
//
//	char* paramval = new char[param.length() + 1];
//	std::strcpy(paramval, param.c_str());
//
//
//	PyObject* pName, * pModule, * pDict, * pFunc, * pValue = nullptr, * presult = nullptr;
//	// Initialize the Python Interpreter
//	Py_Initialize();
//	// Build the name object
//	pName = PyUnicode_FromString((char*)"PythonCode");
//	// Load the module object
//	pModule = PyImport_Import(pName);
//	// pDict is a borrowed reference 
//	pDict = PyModule_GetDict(pModule);
//	// pFunc is also a borrowed reference 
//	pFunc = PyDict_GetItemString(pDict, procname);
//	if (PyCallable_Check(pFunc))
//	{
//		pValue = Py_BuildValue("(z)", paramval);
//		PyErr_Print();
//		presult = PyObject_CallObject(pFunc, pValue);
//		PyErr_Print();
//	}
//	else
//	{
//		PyErr_Print();
//	}
//	//printf("Result is %d\n", _PyLong_AsInt(presult));
//	Py_DECREF(pValue);
//	// Clean up
//	Py_DECREF(pModule);
//	Py_DECREF(pName);
//	// Finish the Python Interpreter
//	Py_Finalize();
//
//	// clean 
//	delete[] procname;
//	delete[] paramval;
//
//
//	return _PyLong_AsInt(presult);
//}
//
///*
//Description:
//	To call this function, pass the name of the Python functino you wish to call and the string parameter you want to send
//Example:
//	int x = callIntFunc("doublevalue",5);
//Return:
//	25 is returned to the C++
//*/
//int callIntFunc(string proc, int param)
//{
//	char* procname = new char[proc.length() + 1];
//	std::strcpy(procname, proc.c_str());
//
//	PyObject* pName, * pModule, * pDict, * pFunc, * pValue = nullptr, * presult = nullptr;
//	// Initialize the Python Interpreter
//	Py_Initialize();
//	// Build the name object
//	pName = PyUnicode_FromString((char*)"PythonCode");
//	// Load the module object
//	pModule = PyImport_Import(pName);
//	// pDict is a borrowed reference 
//	pDict = PyModule_GetDict(pModule);
//	// pFunc is also a borrowed reference 
//	pFunc = PyDict_GetItemString(pDict, procname);
//	if (PyCallable_Check(pFunc))
//	{
//		pValue = Py_BuildValue("(i)", param);
//		PyErr_Print();
//		presult = PyObject_CallObject(pFunc, pValue);
//		PyErr_Print();
//	}
//	else
//	{
//		PyErr_Print();
//	}
//	//printf("Result is %d\n", _PyLong_AsInt(presult));
//	Py_DECREF(pValue);
//	// Clean up
//	Py_DECREF(pModule);
//	Py_DECREF(pName);
//	// Finish the Python Interpreter
//	Py_Finalize();
//
//	// clean 
//	delete[] procname;
//
//	return _PyLong_AsInt(presult);
//}

// Start of my code

// Used for formatting strings
string FormatOutput(string s, char filler, int length) {
	string output = s;
	if (s.length() >= length) { return s; }
	for (int i = s.length(); i < length; i++)
	{
		 output.push_back(filler);
	}
	return output;
}
// Displays input menu and returns result to main
int DisplayInputMenu() {
	int i = 0;
	string s;
	bool validInput = false;


	// Title
	cout << FormatOutput("", ' ', 30) << "Corner Grocer\n";
	cout << FormatOutput("", '-', 73) << "\n";


	//Loop for inputvalidation
	while (validInput == false) {
		cout << "To see sales pick from one of the options below\n\n";
		cout << "Type 1 to see total sales of all items.\n";
		cout << "Type 2 to see sales for a soecific item.\n";
		cout << "Type 3 to see a histograph of all sales.\n";
		cout << "Type 4 to end the program.\n";
		cin >> s;
		if (isdigit(s[0]) == false || s.length() != 1) {
			
			cout << "Invalid input...\nPlease enter a valid option from the menu\n"; continue; }
		if (stoi(s) < 1 || stoi(s) > 4) {
			
			cout << "Invalid input...\nPlease enter a valid option from the menu\n"; continue; }
		i = stoi(s);
		validInput = true;
	}

	return i;
}



// Function to process user input
void ProcessInput(int i) {
	string s;

	if (i == 1) {
		
	
	}else if (i == 2) {
		cout << "Please input the item to search for.\n";
		cin >> s;
		//callIntFunc("PrintMe", s);

	}else if (i == 3) {


	}






}
void main()
{
	/*CallProcedure("printsomething");
	cout << callIntFunc("PrintMe", "House") << endl;
	cout << callIntFunc("SquareValue", 2);*/



	// Variables for main loop
	int i = 0;
	string s;



	// main loop
	do
	{
		i = DisplayInputMenu();
		if (i == 4) { continue; }
		ProcessInput(i);




	} while (i != 4);

	cout << "\n\n\n\n\n\n";


}