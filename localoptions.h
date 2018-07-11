#ifndef LOCALOPTIONS_H
#define LOCALOPTIONS_H

#define DROPBEAR_DEFPORT "41414"

//Should be changed
#define DSS_PRIV_FILENAME "/etc/dropbear/dropbear_dss_host_key"
#define RSA_PRIV_FILENAME "/etc/dropbear/dropbear_rsa_host_key"
#define ECDSA_PRIV_FILENAME "/etc/dropbear/dropbear_ecdsa_host_key"


/* Set NON_INETD_MODE if you require daemon functionality (ie Dropbear listens
 * on chosen ports and keeps accepting connections. This is the default.
 *
 * Set INETD_MODE if you want to be able to run Dropbear with inetd (or
 * similar), where it will use stdin/stdout for connections, and each process
 * lasts for a single connection. Dropbear should be invoked with the -i flag
 * for inetd, and can only accept IPv4 connections.
 *
 * Both of these flags can be defined at once, don't compile without at least
 * one of them. */
#define NON_INETD_MODE 1
#define INETD_MODE 1

/* Include verbose debug output, enabled with -v at runtime. 
 * This will add a reasonable amount to your executable size. */
#define DEBUG_TRACE 1

#define DROPBEAR_CLI_LOCALTCPFWD 0
#define DROPBEAR_CLI_REMOTETCPFWD 0

#define DROPBEAR_SVR_LOCALTCPFWD 0
#define DROPBEAR_SVR_REMOTETCPFWD 0

/* Enable Authentication Agent Forwarding */
#define DROPBEAR_SVR_AGENTFWD 0
#define DROPBEAR_CLI_AGENTFWD 0

#define MAX_UNAUTH_PER_IP 2
#define MAX_UNAUTH_CLIENTS 4
#define MAX_AUTH_TRIES 3

#define DROPBEAR_SFTPSERVER 0

#define DROPBEAR_X11FWD 0 

#define LOG_COMMANDS 1

#define DROPBEAR_TERMINAL 0

#define MAX_TOTAL_CONNECTIONS 1

#endif /* LOCALOPTIONS_H */