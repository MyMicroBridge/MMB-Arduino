/*
	MMBParameter Library
*/

#ifndef MMBPARAMETER_H
#define MMBPARAMETER_H

#include "Arduino.h"

//tipi di parametri (gli altri sono mantenuti all'interno del portale e quindi non hanno accesso verso l'esterno)
#define QUERY_STRING 1
#define X_WWW_FORM_URLENCODED 2
#define URI_TEMPLATE 3


//debug
#define DEBUG 1


//MMB class
class MMBParameter {

	public:
		MMBParameter(const int type, const char *offset); //constructor
		MMBParameter(const int type, const char *offset, const char *value); //constructor
		MMBParameter(const int type, const int position); //constructor
		MMBParameter(const int type, const int position, const char *value); //constructor
		~MMBParameter(); //destroyer

		void setValue(const char *value);


	private:

		MMBParameter(const int type, const char *offset, const int position, const char *value);

		int _type; //tipo di parametro
		const char *_offset; //offset

		int _position; //position se usato (URI_TEMPLATE)
		const char *_value; //value se usato (QUERY_STRING o X_WWW_FORM_URLENCODED)



};

#endif