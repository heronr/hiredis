#ifndef HIREDIS_FD_H
#define HIREDIS_FD_H 1

#include "common.h"
#include "address.h"

int redis_fd_error(int fd);
int redis_fd_connect_address(const redis_address addr);
int redis_fd_connect_gai(int family, const char *host, int port, redis_address *addr);

#endif
