#ifndef PRJ_PAPERGAMES_H_
#define PRJ_PAPERGAMES_H_

#include "games.h"

namespace project
{
	class PaperGame :public Game
	{
		char* m_title;
	protected:
		char* title() const;
	public:
		PaperGame();
		PaperGame(const char* cstr = nullptr);
		~PaperGame();
		PaperGame(const PaperGame& src) = delete;
		PaperGame& operator=(const PaperGame& src) = delete;
		virtual void drawBoard(std::ostream&) const = 0;

	};
	std::ostream& operator<<(std::ostream& os, const PaperGame& game);
}
#endif // !PRJ_PAPERGAMES_H_