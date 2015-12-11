#include <stdio.h>
#include <math.h>

void printSummaryMessage(double sampleCountA, double sampleCountB);
double calculateSampleCount(int numVote, int numInvalidVote, int numVoterStation, int numVoterDivision); 

int main() {
    int selectedTickets = 100;
    int numStation, numVoterDivision, numVoteA, numVoteB, numVoterStation, numInvalidVote;
    double sampleCountA, sampleCountB, subsampleCountA, subsampleCountB;

    printf("Enter number of voters in the division: ");
    scanf("%d", &numVoterDivision);
    printf("Enter number of stations: ");
    scanf("%d", &numStation);
     
    while (numStation--) {
        printf("Enter number of voters in station %d: ", numStation);
        scanf("%d", &numVoterStation);
        printf("Enter number of votes for Team A: ");
        scanf("%d", &numVoteA);
        printf("Enter number of votes for Team B: ");
        scanf("%d", &numVoteB);

        numInvalidVote = selectedTickets - numVoteA - numVoteB;
        subsampleCountA = calculateSampleCount(numVoteA, numInvalidVote, numVoterStation, numVoterDivision);
        subsampleCountB = calculateSampleCount(numVoteB, numInvalidVote, numVoterStation, numVoterDivision);

        sampleCountA += subsampleCountA;
        sampleCountB += subsampleCountB;
    }

        printSummaryMessage(sampleCountA, sampleCountB);
    return 0;
}

double calculateSampleCount(int numVote, int numInvalidVote, int numVoterStation, int numVoterDivision)
{
    return (numVote*1.0/(100-numInvalidVote)) * (numVoterStation*1.0/numVoterDivision);
} 

void printSummaryMessage(double sampleCountA, double sampleCountB)
{
    printf("Sample count for Team A = %f%%\n", sampleCountA);
    printf("Sample count for Team B = %f%%\n", sampleCountB);

    double difference = (sampleCountA - sampleCountB)*100;
    char winner;
    if (difference == 0.0)
    {
        printf("There is no winner in this election.");
        return;
    }
    else if (difference < 0.0)
    {
       winner = 'B'; 
    }
    else if (difference > 0.0)
    {
        winner = 'A';
    }

    if (difference < 5.0)
    {
       printf("Team %c narrowly wins this election.", winner); 
    }
    else if (difference >= 5.0 && difference <= 30.0)
    {
        printf("Team %c wins by a significant margin", winner);
    }
    else
    {
        printf("Team %c wins by a landslide", winner);
    }
}
