/*
 * VolumeReader.h
 *
 *  Created on: 19/lug/2013
 *      Author: Stefano Ceccherini
 */

#ifndef VOLUMEREADER_H_
#define VOLUMEREADER_H_

#include "ItemsList.h"

#include <string>


struct volume_info {
	std::string name;
	std::string create_date;
	std::string filesystem;
	int free;
	std::string label;
	std::string serial;
	int total;
	std::string type;
};


class VolumeReader : public ItemsList<volume_info> {
public:
	VolumeReader(const char* options = "");
	~VolumeReader();
};

#endif /* VOLUMEREADER_H_ */
