#include "console.hpp"
#include "todo.hpp"
#include <variant>

int main() {
	ToDo todo;
	Console console;
	Command cmd;

	console.printInstructions();
	do {
		cmd = console.readCommand();
		auto result = std::visit(todo, cmd);
		std::visit(console, result);
	} while (!std::holds_alternative<QuitCommand>(cmd));
}