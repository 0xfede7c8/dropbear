#ifndef LOCALOPTIONS_H
#define LOCALOPTIONS_H

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
#define INETD_MODE 0

/* Include verbose debug output, enabled with -v at runtime.
 * This will add a reasonable amount to your executable size. */
#define DEBUG_TRACE 1

#define DROPBEAR_CLI_LOCALTCPFWD 0
#define DROPBEAR_CLI_REMOTETCPFWD 0

#define DROPBEAR_SVR_LOCALTCPFWD 0
#define DROPBEAR_SVR_REMOTETCPFWD 0

#define MAX_UNAUTH_PER_IP 1
#define MAX_UNAUTH_CLIENTS 1
#define MAX_AUTH_TRIES 2

#define DROPBEAR_SFTPSERVER 0

#define LOG_COMMANDS 1

#define DROPBEAR_DH_GROUP1_CLIENTONLY 0

#define DROPBEAR_WINDOW_CHANGE_REQUEST 0
#define DROPBEAR_SHELL_REQUEST 0
#define DROPBEAT_PTY_REQUEST 0
// Just for clarity
#define DROPBEAR_EXEC_REQUEST 1
#define DROPBEAR_SUBSYSTEM_REQUEST 0
#define DROPBEAR_SIGNAL_REQUEST 0
#define DROPBEAR_X11FWD 0
#define DROPBEAR_SVR_AGENTFWD 0

#define DROPBEAR_CLI_AGENTFWD 0

#define DROPBEAR_FIXED_USRPW 1

#define DROPBEAR_ONLY_ALLOW_EXEC_SCP 1

#define DROPBEAR_SCP_FIXED_FILE_PATH_AND_SIZE 1

#define DROPBEAR_SINGLE_SYNCH_CONNECTION 1

#define DROPBEAR_RESTRICT_FIXED_HOST_IP 1

#endif /* LOCALOPTIONS_H */
