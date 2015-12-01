#include "mooseAction.h"

MooseAction::MooseAction() {
	this->title = "Moose";
	this->action = "This card rotates the goals of all players from 1 to 2, 2 to 3, etc.";
}

QueryResult MooseAction::query() {
	QueryResult result = QueryResult();
	return result;
}

void MooseAction::perform(Table &, Player *, QueryResult) {

}