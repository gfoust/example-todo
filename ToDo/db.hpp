#pragma once
#include <string>
#include <vector>
#include <utility>

struct Item {
	std::string description;
	bool completed;
};

class Database : private std::vector<Item> {
public:
	using std::vector<Item>::iterator;
	using std::vector<Item>::const_iterator;
	using std::vector<Item>::begin;
	using std::vector<Item>::end;
	using std::vector<Item>::size;
	using std::vector<Item>::operator[];

	void addItem(std::string description);
	void eraseCompleted();
};