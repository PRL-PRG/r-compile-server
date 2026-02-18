#include "perf_jit.h"

#ifdef PERF_SUPPORT

#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <time.h>
#include <unistd.h>

/*
 * Linux jitdump format implementation for perf/samply profilers.
 *
 * The jitdump format is documented in the Linux kernel sources:
 *   tools/perf/Documentation/jitdump-specification.txt
 *
 * perf detects jitdump files by scanning /proc/<pid>/maps for an mmap
 * of /tmp/jit-<pid>.dump. It then reads the file to map JIT'd code
 * addresses to function names.
 */

/* jitdump magic: "JiTD" in little-endian */
#define JITDUMP_MAGIC 0x4A695444

/* jitdump version */
#define JITDUMP_VERSION 1

/* Record types */
#define JIT_CODE_LOAD 0
#define JIT_CODE_CLOSE 3

/* jitdump file header */
struct jitdump_header
{
	uint32_t magic;
	uint32_t version;
	uint32_t total_size;
	uint32_t elf_mach;
	uint32_t pad1;
	uint32_t pid;
	uint64_t timestamp;
	uint64_t flags;
};

/* Record header (common to all record types) */
struct jitdump_record_header
{
	uint32_t id;
	uint32_t total_size;
	uint64_t timestamp;
};

/* JIT_CODE_LOAD record (follows record header) */
struct jitdump_code_load
{
	uint32_t pid;
	uint32_t tid;
	uint64_t vma;
	uint64_t code_addr;
	uint64_t code_size;
	uint64_t code_index;
	/* followed by: function name (null-terminated), then raw code bytes */
};

static int jitdump_fd = -1;
static void *jitdump_mmap_addr = MAP_FAILED;
static uint64_t code_index_counter = 0;

static uint64_t get_timestamp_ns(void)
{
	struct timespec ts;
	clock_gettime(CLOCK_MONOTONIC, &ts);
	return (uint64_t)ts.tv_sec * 1000000000ULL + (uint64_t)ts.tv_nsec;
}

void perf_jit_init(void)
{
	char filename[64];
	pid_t pid = getpid();

	snprintf(filename, sizeof(filename), "/tmp/jit-%d.dump", pid);

	jitdump_fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0666);
	if (jitdump_fd < 0)
	{
		perror("perf_jit_init: open");
		return;
	}

	/* Write file header */
	struct jitdump_header header = {
		.magic = JITDUMP_MAGIC,
		.version = JITDUMP_VERSION,
		.total_size = sizeof(struct jitdump_header),
		.elf_mach = EM_X86_64,
		.pad1 = 0,
		.pid = (uint32_t)pid,
		.timestamp = get_timestamp_ns(),
		.flags = 0,
	};

	if (write(jitdump_fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("perf_jit_init: write header");
		close(jitdump_fd);
		jitdump_fd = -1;
		return;
	}

	/* mmap the file so perf can find it via /proc/<pid>/maps */
	long page_size = sysconf(_SC_PAGESIZE);
	jitdump_mmap_addr =
		mmap(NULL, page_size, PROT_READ | PROT_EXEC, MAP_PRIVATE, jitdump_fd, 0);
	if (jitdump_mmap_addr == MAP_FAILED)
	{
		perror("perf_jit_init: mmap");
		/* Continue without mmap - perf won't detect it automatically
		 * but perf inject --jit can still process the file */
	}
}

void perf_jit_register(const char *func_name, void *code_addr, size_t code_size)
{
	if (jitdump_fd < 0 || !func_name || !code_addr || code_size == 0)
		return;

	size_t name_len = strlen(func_name) + 1; /* include null terminator */

	uint32_t total_size = (uint32_t)(sizeof(struct jitdump_record_header) +
									 sizeof(struct jitdump_code_load) + name_len +
									 code_size);

	struct jitdump_record_header rec_header = {
		.id = JIT_CODE_LOAD,
		.total_size = total_size,
		.timestamp = get_timestamp_ns(),
	};

	pid_t pid = getpid();

	struct jitdump_code_load load = {
		.pid = (uint32_t)pid,
		.tid = (uint32_t)pid, /* R is single-threaded */
		.vma = (uint64_t)code_addr,
		.code_addr = (uint64_t)code_addr,
		.code_size = (uint64_t)code_size,
		.code_index = code_index_counter++,
	};

	/* Write all parts of the record atomically (single writev would be ideal,
	 * but sequential writes are fine for single-threaded R) */
	ssize_t ret = 0;
	ret += write(jitdump_fd, &rec_header, sizeof(rec_header));
	ret += write(jitdump_fd, &load, sizeof(load));
	ret += write(jitdump_fd, func_name, name_len);
	ret += write(jitdump_fd, code_addr, code_size);
	(void)ret;
}

void perf_jit_close(void)
{
	if (jitdump_fd < 0)
		return;

	/* Write JIT_CODE_CLOSE record */
	struct jitdump_record_header close_rec = {
		.id = JIT_CODE_CLOSE,
		.total_size = (uint32_t)sizeof(struct jitdump_record_header),
		.timestamp = get_timestamp_ns(),
	};

	(void)write(jitdump_fd, &close_rec, sizeof(close_rec));

	/* Unmap and close */
	if (jitdump_mmap_addr != MAP_FAILED)
	{
		long page_size = sysconf(_SC_PAGESIZE);
		munmap(jitdump_mmap_addr, page_size);
		jitdump_mmap_addr = MAP_FAILED;
	}

	close(jitdump_fd);
	jitdump_fd = -1;
}

#endif /* PERF_SUPPORT */
