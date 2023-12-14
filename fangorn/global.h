#pragma once
#include <string>

#include "info.h"
#include "init.h"
#include "clone.h"
#include "config.h"
#include "alias.h"
//#include "status.h"
#include "add.h"
//#include "commit.h"
//#include "diff.h"
#include "stash.h"
#include "ignore.h"
#include "clean.h"
//#include "revert.h"
#include "reset.h"
//#include "rm.h"
#include "rebase.h"
#include "reflog.h"
//#include "remote.h"
#include "fetch.h"
#include "push.h"
#include "pull.h"
#include "branch_create.h"
#include "branch_delete.h"
#include "checkout.h"
#include "merge.h"

namespace function3at
{
	enum class command : int;
	void print_page();
		void przypisujaca_do_zmiennej_polecenie(std::string choice, command& operacja_polecenia);
		void wybor_operacji(command operacja_polecenie);
}