#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include "git_actions.h"
using namespace std;

	// Used to clone a repository
	void git_actions::clone_repo(string url)
	{
		string first = "git clone ";
		string command_str = first + url;

        const char *command = command_str.c_str();
		system(command);
	}

	// Used to stage all files
	void git_actions::add()
	{
		string first = "git add .";
		
		const char *command = first.c_str();
		system(command);
	}

	// Used to commit changes to a repository
	void git_actions::commit(string message)
	{
		string first = "git commit -m";
		string command_str = first + "\"" + message + "\"";

		const char *command = command_str.c_str();
		system(command);
	}

	// Used to push changes to the cloud
	void git_actions::push(string branchName)
	{
		string first = "git push origin ";
		string command_str = first + branchName;

		const char *command = command_str.c_str();
		system(command);
	}

	// Used to pull changes made in the cloud onto local machine
	void git_actions::pull()
	{
		string first = "git pull";

		const char *command = first.c_str();
		system(command);
	}

	// Used to create a branch in the repository 
	void git_actions::create_branch(string branchName)
	{
		string first = "git branch ";
		string command_str = first + branchName;

		const char *command = command_str.c_str();
		system(command);
	}

	// Used to switch branches
	void git_actions::checkout(string branchName)
	{
		string first = "git checkout ";
		string command_str = first + branchName;

		const char *command = command_str.c_str();
		system(command);
	}

	// Used to revert changes (delete the previous commit)
	void git_actions::revert()
	{
		string first = "git revert";

		const char *command = first.c_str();
		system(command);
	}

