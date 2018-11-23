#ifndef PARSINGTREEVARIABEREAD_HPP
#define PARSINGTREEVARIABEREAD_HPP

#include "ParsingTreeValue.hpp"
#include "ParsingTreeAccessor.hpp"
#include "MemoryManagement.hpp"

struct ParsingTreeVariabeRead: public ParsingTreeValue
{

    ParsingTreeAccessor *id;

    ParsingTreeValue *execute(MemoryManagement *pMemory)
    {
//        qDebug() << "READ";
        executeNext(pMemory);
        return pMemory->readValue(id);
    }
};

#endif // PARSINGTREEVARIABEREAD_HPP