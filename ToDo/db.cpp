#include "db.hpp"
#include <algorithm>

void Database::addItem(std::string description) {
	emplace_back(std::move(description), false);
}

void Database::eraseCompleted() {
	auto p = std::copy_if(
		begin(), 
		end(), 
		begin(), 
		[](Item& item) { return !item.completed; }
	);
	erase(p, end());
}
