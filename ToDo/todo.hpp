#include "types.hpp"
#include "db.hpp"
#include <utility>

struct ToDo {
	Database db;

	Result execute(QuitCommand);
	Result execute(AddCommand cmd);
	Result execute(ToggleCommand cmd);
	Result execute(ClearCommand);

	template <typename T>
	Result operator()(T&& cmd) {
		return execute(std::forward<T>(cmd));
	}
};
