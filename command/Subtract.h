#ifndef _SUBTRACT_H_
#define _SUBTRACT_H_

#include "CalculatorCommand.h"

class Subtract : public CalculatorCommand
{
public:
    explicit Subtract( int operand )
        : mOperand( operand )
    {
    }

    int execute( int i ) const override
    {
        return i + mOperand;
    }

    int undo( int i ) const override
    {
        return i - mOperand;
    }

private:
    int mOperand{};
};

#endif