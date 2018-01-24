/*
 * ltmemory.h
 *
 *  Created on: 2017年6月11日
 *      Author: litao
 */

#ifndef MEMORY_LTMEMORY_H_
#define MEMORY_LTMEMORY_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/malloc.h>

#define ARRAY_SIZE	200

static size_t heap_malloc_total = 0, heap_free_total = 0,
	mmap_total = 0, mmap_count = 0;

void printMemoryInfo() {
    struct mallinfo mi = mallinfo();
    printf("count by itself:\n");
    printf("\theap_malloc_total=%lu heap_free_total=%lu heap_in_use=%lu\n\tmmap_total=%lu mmap_count=%lu\n",
              heap_malloc_total*1024, heap_free_total*1024, heap_malloc_total*1024-heap_free_total*1024,
              mmap_total*1024, mmap_count);
    printf("count by mallinfo:\n");
    printf("\theap_malloc_total=%lu heap_free_total=%lu heap_in_use=%lu\n\tmmap_total=%lu mmap_count=%lu\n",
             mi.arena, mi.fordblks, mi.uordblks,
             mi.hblkhd, mi.hblks);
    printf("from malloc_stats:\n");
    malloc_stats();
}

void testMemory() {
	char* arrayPtr[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; ++i) {
		arrayPtr[i] = malloc(i * 1024);
		if (i < 128)
			heap_malloc_total += i;
		else {
			mmap_total += i;
			++mmap_count;
		}
	}

	printMemoryInfo();
	for (int i = 0; i < ARRAY_SIZE; ++i) {
		if (i % 2 == 0)
			continue;

		free(arrayPtr[i]);
		if (i < 128)
		    heap_free_total += i;
		else
			mmap_total -= i;
			--mmap_count;
	}

	printf("\n -------------- After free --------------------");
	printMemoryInfo();
}

#endif /* MEMORY_LTMEMORY_H_ */








