#ifndef _ADD_H_
#define _ADD_H_

#include "CalculatorCommand.h"

class Add : public CalculatorCommand
{
public:
    explicit Add( int operand )
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