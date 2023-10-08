#ifndef _DRAW_STRATEGY_H_
#define _DRAW_STRATEGY_H_

template<typename T>
class DrawStrategy
{
public:
	virtual ~DrawStrategy() = default;

	virtual void draw( T const& circle ) const = 0;
};
#endif
