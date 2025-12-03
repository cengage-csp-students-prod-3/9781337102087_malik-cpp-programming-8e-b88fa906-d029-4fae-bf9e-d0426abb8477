// This programs displays each candidate’s name (Candidate), the number of votes received (Votes Received), 
// and the percentage of the total votes received by the candidate (% of Total Votes).
// Date: 12/3/2025

#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

const int NUM_OF_CANDIDATES = 5;

int calculateSumOfVotes(int votesReceived[]);
void outputWinnerOfElection(string candidate[], int votes[], double percentOfVotes[], int totalVotes);

int main() {
    // Write your main here

    string candidateLastName[NUM_OF_CANDIDATES];
    int votesReceived[NUM_OF_CANDIDATES];
    double percentOfTotalVotes[NUM_OF_CANDIDATES];
    int totalVotes = 0;

    //cout << fixed << showpoint;

    // Prompt user to enter the input the last name of the five candidates 
    // and the number of votes received by each candidate.

    for (int i = 0; i < NUM_OF_CANDIDATES; i++) {
        cout << "Enter the last name of the candidate." << endl;
        cin >> candidateLastName[i];

        cout << "Enter the number of votes received by the candidate." << endl;
        cin >> votesReceived[i];
    }

    totalVotes = calculateSumOfVotes(votesReceived);

    // Calculate the percentage of the total votes received by the candidate

    for (int i = 0; i < NUM_OF_CANDIDATES; i++) {
        cout << "Number in double is "<< static_cast<double>(totalVotes);
        percentOfTotalVotes[i] = votesReceived[i] / static_cast<double>(totalVotes);
        percentOfTotalVotes[i] = percentOfTotalVotes[i] * 100;
        cout << "percentage of total votes is " << percentOfTotalVotes[i] << endl;
    }

    /*for(int x = 0; x < 5; x++) {
        cout << "Elements in votesReceived array is " << votesReceived[x] << endl;
    }

    cout << "The sum of votes is " << totalVotes << endl;*/

    outputWinnerOfElection(candidateLastName, votesReceived, percentOfTotalVotes, totalVotes);

    return 0;
}

int calculateSumOfVotes(int votesReceived[])
{
    int sumOfVotes = 0;

    for(int i = 0; i < NUM_OF_CANDIDATES; i++) {
        sumOfVotes = sumOfVotes + votesReceived[i];
        //cout << "Elements in votesReceived array is " << votesReceived[i] << endl;
        //cout << "The sum of votes is " << sumOfVotes << endl;
    }

    return sumOfVotes;
}

void outputWinnerOfElection(string candidate[], int votes[], double percentOfVotes[], int totalVotes)
{
    string winner;
    int largest_element_index = 0;
    
    cout << setprecision(4);

    // Find the largest element in the votes array

    int largest_element = votes[0];

    for (int i = 1; i < NUM_OF_CANDIDATES; ++i) {
        if (votes[i] > largest_element) {
            largest_element = votes[i];
            largest_element_index = i;
        }
    }

    winner = candidate[largest_element_index];

    cout << std::setw(30) << "Candidate" << std::setw(30) << "Votes Received" << std::setw(30) << "& of Total Votes" << endl;

    for(int i = 0; i < NUM_OF_CANDIDATES; i++) {
        cout << std::setw(30) << candidate[i] << std::setw(30) << votes[i] << std::setw(30) << percentOfVotes[i] << endl;
    }

    cout << std::setw(30) << "Total Votes:" << std::setw(30) << totalVotes << endl;
    cout << "The Winner of the Election is " << winner << endl;
}