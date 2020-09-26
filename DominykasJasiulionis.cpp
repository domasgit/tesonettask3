#include <iostream>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

enum string_code {
	list,
	enter,
	leave,
	copy,
	del,
	create,
	stop

};

string_code hashit(std::string const& inString) {
	if (inString == "list") return list;
	if (inString == "enter") return enter;
	if (inString == "leave") return leave;
	if (inString == "copy") return copy;
	if (inString == "delete") return del;
	if (inString == "create") return create;
	if (inString == "stop") return stop;
}

void displayList()
{

}

void MVP(const fs::path& pathToShow)
{
	while (true)
	{
		std::string choice;
		std::cout << pathToShow << ">";
		std::cin >> choice;

		switch (hashit(choice))
		{
		case list:
			displayList();
			break;

		case enter:
			std::string enterValue;
			cin >> enterValue;
			enterDirectory(enterValue);
			break;

		case leave:
			leaveDir();
			break;

		case copy:
			std::string source;
			std::string destination;
			cin >> source >> destination;
			copyContents(source, destination);
			break;

		case del:
			std::string targetd
			cin >> targetd;
			deleteItem(targetd);
			break;

		case create:
			std::string targetc;
			std::string contents;
			cin >> targetc;


			


		}


	}
	
}


int main(int argc, char* argv[])
{
	const fs::path myPath{ argc >= 2 ? argv[1] : fs::current_path() };
	MVP(myPath);
}


/*First time i'm working with <filesystem> :((( would do better if given a chance to learn concepts and methods of this library ;) */