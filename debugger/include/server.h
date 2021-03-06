// golden
// 6/12/2018
//

#ifndef _SERVER_H
#define _SERVER_H

#include <ps4.h>
#include "protocol.h"
#include "net.h"

#include "proc.h"
#include "debug.h"
#include "kern.h"
#include "console.h"

#define SERVER_IN               IN_ADDR_ANY
#define SERVER_PORT             733

struct debug_server {
    struct sockaddr_in server;
    int servsock;
};

extern struct debug_server dbgsrv;

// this will block
void start_server();

#endif
