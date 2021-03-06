/*
 * cpu_resources.h
 *
 *  Created on: Mar 30, 2015
 *      Author: rferreira
 */

#ifndef CPU_RESOURCES_H_
#define CPU_RESOURCES_H_
#define THREAD_INIT_FAIL(THREAD_NAME) "\
	Failure in the " THREAD_NAME " thread Initialization \n"

#include "utils.h"

extern pthread_t memory_handle,
		ALU_handle,
		mux_memoryAdress_handle,
		mux_WriteRegIR_handle,
		mux_WriteDataIR_handle,
		signExtend_handle,
		shiftLeft2_handle,
		mux_ALUA_handle,
		mux_ALUB_handle,
		mux_PC_handle;

extern dataBlock *memoryBank;

//struct jobInstruction {syncMutexes, UCState, ALUCState}
//jobInstruction list pipeline[PIPELINE_SIZE]

void resourcesInit();


#endif /* CPU_RESOURCES_H_ */
