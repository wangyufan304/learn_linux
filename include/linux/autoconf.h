/*
 * Automatically generated C config: don't edit
 */

/*
 * General setup
 */
#undef  CONFIG_MATH_EMULATION
#define CONFIG_BLK_DEV_FD 1
#define CONFIG_ST506 1

/*
 * Please see drivers/block/README.ide for help/info on IDE drives
 */
#undef  CONFIG_BLK_DEV_HD
#define CONFIG_BLK_DEV_IDE 1
#undef  CONFIG_BLK_DEV_IDECD
#undef  CONFIG_BLK_DEV_XD
#define CONFIG_NET 1
#undef  CONFIG_MAX_16M
#undef  CONFIG_PCI
#define CONFIG_SYSVIPC 1
#define CONFIG_BINFMT_ELF 1
#define CONFIG_M486 1

/*
 * Loadable module support
 */
#undef  CONFIG_MODVERSIONS

/*
 * Networking options
 */
#define CONFIG_INET 1
#undef  CONFIG_IP_FORWARD
#undef  CONFIG_IP_MULTICAST
#undef  CONFIG_IP_FIREWALL
#undef  CONFIG_IP_ACCT

/*
 * (it is safe to leave these untouched)
 */
#undef  CONFIG_INET_PCTCP
#undef  CONFIG_INET_RARP
#define CONFIG_INET_SNARL 1
#undef  CONFIG_TCP_NAGLE_OFF
#undef  CONFIG_IPX

/*
 * SCSI support
 */
#undef  CONFIG_SCSI

/*
 * Skipping SCSI configuration options...
 */

/*
 * Network device support
 */
#define CONFIG_NETDEVICES 1
#define CONFIG_DUMMY 1
#undef  CONFIG_SLIP
#undef  CONFIG_PPP
#undef  CONFIG_PLIP
#undef  CONFIG_NET_ALPHA
#undef  CONFIG_NET_VENDOR_SMC
#undef  CONFIG_LANCE
#define CONFIG_NET_VENDOR_3COM 1
#undef  CONFIG_EL1
#undef  CONFIG_EL2
#define CONFIG_EL3 1
#undef  CONFIG_NET_ISA
#undef  CONFIG_NET_EISA
#undef  CONFIG_NET_POCKET

/*
 * CD-ROM drivers (not for SCSI or IDE/ATAPI drives)
 */
#undef  CONFIG_CDU31A
#undef  CONFIG_MCD
#undef  CONFIG_SBPCD
#undef  CONFIG_AZTCD
#undef  CONFIG_CDU535

/*
 * Filesystems
 */
#define CONFIG_MINIX_FS 1
#undef  CONFIG_EXT_FS
#define CONFIG_EXT2_FS 1
#undef  CONFIG_XIA_FS
#define CONFIG_MSDOS_FS 1
#undef  CONFIG_UMSDOS_FS
#define CONFIG_PROC_FS 1
#define CONFIG_NFS_FS 1
#undef  CONFIG_ISO9660_FS
#undef  CONFIG_HPFS_FS
#undef  CONFIG_SYSV_FS

/*
 * character devices
 */
#undef  CONFIG_CYCLADES
#undef  CONFIG_PRINTER
#undef  CONFIG_BUSMOUSE
#undef  CONFIG_PSMOUSE
#undef  CONFIG_MS_BUSMOUSE
#undef  CONFIG_ATIXL_BUSMOUSE
#undef  CONFIG_QIC02_TAPE
#undef  CONFIG_FTAPE

/*
 * Sound
 */
#undef  CONFIG_SOUND

/*
 * Kernel hacking
 */
#undef  CONFIG_PROFILE
