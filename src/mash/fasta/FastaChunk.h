/*
  This file is a part of DSRC software distributed under GNU GPL 2 licence.
  The homepage of the DSRC project is http://sun.aei.polsl.pl/dsrc
  
  Authors: Lucas Roguski and Sebastian Deorowicz
  
  Version: 2.00
*/

#ifndef H_FASTA_CHUNK
#define H_FASTA_CHUNK

#include "Globals.h"
#include "Common.h"
#include "Buffer.h"
#include "utils.h"
#include "DataQueue.h"
#include "DataPool.h"

#include <vector>
#include <iostream>

namespace mash
{

namespace fa
{

typedef core::DataChunk FastaDataChunk;

typedef core::TDataQueue<FastaDataChunk> FastaDataQueue;
typedef core::TDataPool<FastaDataChunk> FastaDataPool;

struct FastaChunk{

	FastaDataChunk * chunk;
	uint64 start;
	uint64 end;
	uint64 nseqs;
	//bool startSplit;
	//bool endSplit;

	void print(){
		std::cout << "chunk start: " << this->start << std::endl;	
		std::cout << "chunk end: "   << this->end   << std::endl;	
		std::cout << "chunk nseqs: " << this->nseqs << std::endl;	
		return;
	}
};


} // namespace fa

} // namespace mash

#endif
