//
// Created by McRebel on 01.06.2022.
//

#ifndef EXERXISE_SHEET_1_BITOPERATIONS_H
#define EXERXISE_SHEET_1_BITOPERATIONS_H




//Macros

#define SB(VALUE, POSITION)  (VALUE |= 1 << POSITION)                             //: setzt das Bit (d.h. das Bit nimmt den Wert 1 an) an der Stelle POSITION.
#define CB(VALUE, POSITION)  (VALUE &= ~(1 << POSITION))                          //: löscht das Bit (d.h. das Bit nimmt den Wert 0 an) an der Stelle POSITION.
#define IBS(VALUE, POSITION) ((bool)(VALUE &= 1 << POSITION))                     //: prüft, ob das bit an der Stelle POSITION gesetzt ist (d.h. ob es den Wert 1 hat).
#define TB(VALUE, POSITION)  (VALUE ^=1 << POSITION)                              //: "toggelt" (hin- und herschalten) das Bit an der Stelle POSITION.




#endif //EXERXISE_SHEET_1_BITOPERATIONS_H
