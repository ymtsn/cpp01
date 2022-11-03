#include <iostream>
#define FUNCPTR_NUM_MAX 4
#define FUNCPTR_NUM_MAX 4
#define INDEX_DEBUG 0
#define INDEX_INFO 1
#define INDEX_WARNING 2
#define INDEX_ERROR 3

class Harl{
private:
	void (*func[FUNCPTR_NUM_MAX])(void);
	std::string StrFuncArray[FUNCPTR_NUM_MAX];
	static void debug(void);
	static void info(void);
	static void warning(void);
	static void error(void);
public:
	Harl();
	void complain(std::string level);
};
