#pragma once
#include <string>
using namespace std;

class PrefixTrie
{
	private:
		char* genomeArray;
		long long int totalGenomeLength = 0;

	public:
		PrefixTrie();
		~PrefixTrie();
		void readHumanGenomes(string genomeFilePath);
};

