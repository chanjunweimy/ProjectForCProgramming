/* Given distinct and valid birthdays of n people as (DD, MM, YYYY), order them by ascending birth months, then ascending birthday dates then ascending age (descending year)
 */

#include <cstdio>
#include <cstdlib>
#include <utility>
#include <vector>

using namespace std;

// Use natural sort order of primitive data types 
typedef pair<int, int> dayMth;
typedef pair<dayMth, int> dayMthYear;

int main() {
    dayMthYear A = make_pair(dayMth(5, 24), -1982); // Use negative year for descending
    dayMthYear B = make_pair(dayMth(5, 24), -1980);
    dayMthYear C = make_pair(dayMth(11, 13), -1983);

    vector<dayMthYear> birthdays;
    birthdays.push_back(A);
    birthdays.push_back(B);
    birthdays.push_back(C);
    sort(birthdays.begin(), birthdays.end());

    for (int i=0; i<(int)birthdays.size(); i++)
    {
        dayMthYear bd = birthdays[i];
        dayMth dayMth = get<0>(bd);
        int day = get<0>(dayMth);
        int mth = get<1>(dayMth);
        int year = abs(get<1>(bd));

        printf("%d %d %d\n", day, mth, year);
    }
}

