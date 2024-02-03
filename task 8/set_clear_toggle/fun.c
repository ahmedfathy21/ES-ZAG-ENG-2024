#include "fun.h"
unsigned int var ;
unsigned int BitNo;

unsigned int Set_Bit(unsigned int Var,unsigned int bitnum){
 return Var | (1 << bitnum);;
}
unsigned int Clear_Bit(unsigned int Var,unsigned int bitnum){
return Var &~(1 << bitnum);
}
unsigned int Toogle_Bit(unsigned int Var,unsigned int bitnum){
return Var ^(1<<bitnum);
}
