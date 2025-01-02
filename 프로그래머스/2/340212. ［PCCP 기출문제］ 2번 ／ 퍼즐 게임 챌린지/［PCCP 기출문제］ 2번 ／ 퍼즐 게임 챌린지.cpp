#include <string>
#include <vector>

using namespace std;

int solution(vector<int> diffs, vector<int> times, long long limit) {
    int answer = 0;

	int Lowlevel = 1;
	int MaxLevel = INT32_MAX;
	

	int n = diffs.size();
	bool minSuceess = false;
	while (Lowlevel <= MaxLevel)
	{
		long long mylimit = 0LL;	
		bool end = true;

		int testLevel = Lowlevel + (MaxLevel - Lowlevel) / 2;
		

		for (int i = 0; i < n; i++)
		{
			int diff_cur = diffs[i];
			int time_cur = times[i];
			
		
			long long time_cur_prev = 0LL;
		

			if (diff_cur <= testLevel)
			{
				time_cur_prev = time_cur;
			}
			else if (diff_cur > testLevel)
			{
				time_cur_prev = (time_cur + times[i-1]) * (diff_cur - testLevel) + time_cur;
			}

			
			mylimit += time_cur_prev;
			
			
			if (mylimit >  limit)
			{
				end = false;
				break;
			}

		}

		if (!end)
		{
			Lowlevel = testLevel + 1;
		}
		else
		{
			answer = testLevel;
			MaxLevel = testLevel - 1;
		}


	}




    return answer;
}