#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>

const int maxEntries = 6279;
int starRank;
double totalScore;
using std::string;

struct sss
{
	std::string word;
	double score;
};

sss sssArray[maxEntries];	//array of words and scores
void buildSocialSentScoresTable(string tableFileName);

double computeSSS(string reviewFileName);

double getStarRank(double finalScore);

/*main driver */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		//if arguments are passed with ./main
		std::string reviewFile = argv[1];
		std::string dataFile = "socialsent.csv";
		buildSocialSentScoresTable(dataFile);
		getStarRank(computeSSS(reviewFile));
		std::cout << "\n" << reviewFile << " score: " << totalScore << "\n" << reviewFile << " stars: " << starRank<<"\n";
	}
  else //default case if no arguments provided
  {
	double totalSentiment = 0.0;
	std::string reviewFile = "review.txt";
	std::string dataFile = "socialsent.csv";
	buildSocialSentScoresTable(dataFile);
	getStarRank(computeSSS(reviewFile));
	std::cout << "\n" << reviewFile << " score: " << totalScore << "\n" << reviewFile << " stars: " << starRank<<"\n";
  }
}

void buildSocialSentScoresTable(string tableFileName)
{

	std::ifstream ssTable;
	ssTable.open(tableFileName);
	if (ssTable.is_open())
	{

		int i = 0;
		std::string line;
		while (std::getline(ssTable, line))
		{
			std::string word;
			int commaPos = line.find(",", 0);
			word = line.substr(0, commaPos);
			//std::cout<<word<<"\n"; uncomment to see all words
			double score = std::stod(line.substr(commaPos + 1, string::npos));
			// std::cout<<score<<"\n"; uncomment to see all words' scores

			sssArray[i].word = word;
			sssArray[i].score = score;

			i++;	// go to the next word
		}
		ssTable.close();
	}
	else
	{
		std::cout << "Social sentiment file not found.";
	}
}

double computeSSS(string reviewFileName)
{
	std::ifstream rFile;
	rFile.open(reviewFileName);

	if (rFile.is_open())
	{

		//std::cout<<"works\n"; see if file opened
		std::string word;
		std::cout << "[word: current_score, accumulated_score]\n";

		while (rFile >> word)
		{
			char nonAlphaNum[] = "{}[]()-.,!?\"\'";
			for (int i = 0; i < strlen(nonAlphaNum); i++)
			{

				word.erase(std::remove(word.begin(), word.end(), nonAlphaNum[i]), word.end());
			}
			for (int x = 0; x < maxEntries; x++)
			{
				if (word == sssArray[x].word)
				{

					std::cout << word << ": ";
					totalScore += sssArray[x].score;
					std::cout << sssArray[x].score << ", " << totalScore << "\n";
				}
			}
		}	// end of while
		// return the total score
		return totalScore;
	}
	else
	{
		std::cout << "Review file not found";
		return 0;
	}
}
double getStarRank(double score)
{

	if (score < -5)
	{
		starRank = 1;
	}
	else if (score >= -5 && score < -1.0)
	{
		starRank = 2;
	}
	else if (score >= -1.0 && score < 1.0)
	{
		starRank = 3;
	}
	else if (score >= 1.0 && score < 5.0)
	{
		starRank = 4;
	}
	else
	{
		starRank = 5;
	}

	return starRank;
}