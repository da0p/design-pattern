#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

#include "CalculatorCommand.h"
#include <memory>
#include <stack>

class Calculator
{
public:
    void compute( std::unique_ptr<CalculatorCommand> command );
    void undoLast();

    int result() const;
    void clear();

private:
    using CommandStack = std::stack<std::unique_ptr<CalculatorCommand>>;

    int mCurrent{};
    CommandStack mStack;
};

inline void
Calculator::compute(std::unique_ptr<CalculatorCommand> command)
{
    mCurrent = command->execute( mCurrent );
    mStack.push( std::move(command) );
}

inline void
Calculator::undoLast()
{
    if ( mStack.empty() ) {
        return;
    }

    auto command = std::move( mStack.top() );
    mStack.pop();

    mCurrent = command->undo( mCurrent );
}

inline int
Calculator::result() const
{
    return mCurrent;
}

inline void
Calculator::clear()
{
    mCurrent = 0;
    CommandStack{}.swap( mStack );
}

#endif