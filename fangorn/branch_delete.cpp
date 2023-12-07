#include <iostream>

namespace function3at
{
	void branch_delete()
	{
		std::cout <<
			R"(
********************
*	Usuwanie lokalnych galezi;
*		git branch -d <name_of_branch>
*	
	Usuwanie zdalnych galezi moze odbyc sie na 2 SPOSOBY:
		git push <skrot> -d <name_of_branch>
		git push --delete <skrot> <name_of_branch>

)";
	}
}