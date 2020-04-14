/*
 * StringParserClass.cpp
 *
 *  Created on: Oct 8, 2017
 *      Author: keith
 */

#include <string>
#include <string.h>
#include "../327_proj3_test/includes/StringParserClass.h"
#include "../327_proj3_test/includes/constants.h"

//TODO Fill in

using namespace std;
using namespace KP_StringParserClass;

StringParserClass::StringParserClass() {

}

StringParserClass::~StringParserClass() {
	cleanup();
}

int StringParserClass::setTags(const char *pStart, const char *pEnd) {
	if (pStart && pEnd != NULL) {
		delete pStart;
		delete pEnd;

		pStartTag = new char[strlen(pStart)];
		pEndTag = new char[strlen(pEnd)];

		for (int i = 0; i < strlen(pEnd); i++) {
			*(pStartTag + 1) = pStart[i];
		}
		return SUCCESS;
	}
	return ERROR_TAGS_NULL;
}

int StringParserClass::getDataBetweenTags(char *pDataToSearchThru,
		std::vector<std::string> &myVector) {

}

void StringParserClass::cleanup() {

}

int StringParserClass::findTag(char *pTagToLookFor, char *&pStart,
		char *&pEnd) {

}
