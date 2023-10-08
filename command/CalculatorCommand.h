#ifndef _CALCULATOR_COMMAND_H_
#define _CALCULATOR_COMMAND_H_

class CalculatorCommand
{
public:
    virtual ~CalculatorCommand() = default;

    virtual int execute( int i ) const = 0;

    virtual int undo( int i ) const = 0;
};

#endif