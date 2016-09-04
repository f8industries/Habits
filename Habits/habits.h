#ifndef HABITS_H
#define HABITS_H

#include "habits_global.h"
#include <string>

#define USE_QT 0
#define USE_BOOST 1

class HABITS_EXPORT Habits
{
public:
	Habits();
	~Habits();

	void memorize(const std::string &filename);///argument taki jak w boost xml
	void remind(const std::string &filename);

private:

};

#endif // HABITS_H
