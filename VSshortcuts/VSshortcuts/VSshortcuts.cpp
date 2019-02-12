#include "pch.h"

// Creating a macro for std::cout
#define LOG(x)  std::cout << x << std::endl

void Shortcuts()
{
	//Putting this in a while loop, which is a lot better than calling a system pause for the program
	do {
		LOG("Here a few helpful windows commands to use in Visual Studio Community 2017!");
		LOG("Some commands may or may not require Shift as a part of their combination to use." << "\n");
		LOG("---------------------------------------------------------------------------------");
		LOG("Use f12 at your cursor to go to that definition.");
		LOG("Ctrl + q = Quick Launch.");
		LOG("Ctrl + Shift + enter = Toggle on/off full screen.");
		LOG("Ctrl + Shift + a = Add new item.");
		LOG("f9 = Toggle a breakpoint.");
		LOG("Type ''for'', then hit tab twice to quickly assemble a for loop.");
		LOG("Ctrl + kx = A list of all the snippets.");
		LOG("Ctrl + Tab (holding down still on ctrl) = Cycle through a list of all your open tabs.");
		LOG("f12 with cursor at a definition will go to that definition's origin.");
		LOG("Ctrl + -  = Return to previous location in project.");
		LOG("Ctrl + Shift + -  = Go forwards to next location in project.");
		LOG("Ctrl + c (with cursor on a line & no selection) = Copy entire line via intellisense.");
		LOG("Ctrl + kc = Comment an entire line.");
		LOG("Ctrl + ku = Uncomment an entire line.");
		LOG("Ctrl + Shift + b = Compile project.");
		LOG("Ctrl + Space = Show intellisense.");
		LOG("Ctrl + t = Type search box for any item in your project's code.");
		LOG("\n" << "Please press enter to end the program...");
	} while (std::cin.get() != '\n');
}

int main()
{
	Shortcuts();
	return 0;
}