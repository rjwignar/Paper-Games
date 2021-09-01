#ifndef PRJ_COMMONHELPERS_H_
#define PRJ_COMMONHELPERS_H_

namespace project
{
	int getInt(const char* prompt = nullptr);
	int getInt(int min, int max, const char* prompt, const char* errorMessage, bool showRangeAtError);
}

#endif // !PRJ_COMMONHELPERS_H_
