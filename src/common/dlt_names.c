/* $Id$ */

/*
 * Copyright (c) 2006-2010 Aaron Turner
 * All rights reserved.
 *
 * This file is generated by scripts/dlt2name.pl which converts your pcap-bpf.h
 * header file which comes with libpcap into a header file
 * which translates DLT values to their string names as well as a list of all
 * of the available DLT types.
 *
 * Hence DO NOT EDIT THIS FILE!
 * If your DLT type is not listed here, edit the %known hash in
 * scripts/dlt2name.pl
 * 
 * This file contains data which was taken from libpcap's pcap-bpf.h.  
 * The copyright/license is included below:
 */
 
 /*-
  * Copyright (c) 1990, 1991, 1992, 1993, 1994, 1995, 1996, 1997
  *      The Regents of the University of California.  All rights reserved.
  *
  * This code is derived from the Stanford/CMU enet packet filter,
  * (net/enet.c) distributed as part of 4.3BSD, and code contributed
  * to Berkeley by Steven McCanne and Van Jacobson both of Lawrence 
  * Berkeley Laboratory.
  *
  * Redistribution and use in source and binary forms, with or without
  * modification, are permitted provided that the following conditions
  * are met:
  * 1. Redistributions of source code must retain the above copyright
  *    notice, this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright
  *    notice, this list of conditions and the following disclaimer in the
  *    documentation and/or other materials provided with the distribution.
  * 3. All advertising materials mentioning features or use of this software
  *    must display the following acknowledgement:
  *      This product includes software developed by the University of
  *      California, Berkeley and its contributors.
  * 4. Neither the name of the University nor the names of its contributors
  *    may be used to endorse or promote products derived from this software
  *    without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
  * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
  * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
  * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
  * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
  * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
  * SUCH DAMAGE.
  *
  *      @(#)bpf.h       7.1 (Berkeley) 5/7/91
  *
  * @(#) $Header: /tcpdump/master/libpcap/pcap-bpf.h,v 1.34.2.6 2005/08/13 22:29:47 hannes Exp $ (LBL)
  */


#include <stdlib.h>

/* DLT to descriptions */
char *dlt2desc[] = {
        "BSD loopback encapsulation",
        "Ethernet (10Mb)",
        "Experimental Ethernet (3Mb)",
        "Amateur Radio AX.25",
        "Proteon ProNET Token Ring",
        "Chaos",
        "IEEE 802 Networks",
        "ARCNET, with BSD-style header",
        "Serial Line IP",
        "Point-to-point Protocol",
        "FDDI",
        "LLC-encapsulated ATM",
        "raw IP",
        "BSD/OS Serial Line IP",
        "BSD/OS Point-to-point Protocol",
        "BSD/OS Serial Line IP",
        "BSD/OS Point-to-point Protocol",
        "",
        "",
        "Linux Classical-IP over ATM",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "PPP over serial with HDLC encapsulation",
        "PPP over Ethernet",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Cisco HDLC",
        "IEEE 802.11 wireless",
        "Unknown",
        "BSD/OS Frame Relay",
        "OpenBSD Loopback",
        "",
        "Unknown",
        "Unknown",
        "Unknown",
        "Linux Cooked Sockets",
        "Apple LocalTalk",
        "Acorn Econet",
        "OpenBSD IPFilter",
        "OpenBSD PF Log/SuSE 6.3 LANE 802.3",
        "Cisco IOS",
        "802.11 Prism Header",
        "802.11 Aironet Header",
        "Siemens HiPath HDLC",
        "IP over Fibre Channel",
        "Solaris+SunATM",
        "RapidIO",
        "PCI Express",
        "Xilinx Aurora link layer",
        "802.11 plus radiotap radio header",
        "Tazmen Sniffer Protocol",
        "ARCNET",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "pseudo-header with various info, followed by MTP2",
        "MTP2, without pseudo-header",
        "MTP3, without pseudo-header or MTP2",
        "SCCP, without pseudo-header or MTP2 or MTP3",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "802.11 plus AVS radio header",
        "",
        "",
        "",
        "",
        "",
        "GPRS LLC",
        "GPF-T (ITU-T G.7041/Y.1303)",
        "GPF-F (ITU-T G.7041/Y.1303)",
        "",
        "",
        "",
        "Ethernet",
        "Packet-over-SONET",
        "",
        "",
        "",
        "",
        NULL
};


/* DLT to names */
char *dlt2name[] = {
        "DLT_NULL",
        "DLT_EN10MB",
        "DLT_EN3MB",
        "DLT_AX25",
        "DLT_PRONET",
        "DLT_CHAOS",
        "DLT_IEEE802",
        "DLT_ARCNET",
        "DLT_SLIP",
        "DLT_PPP",
        "DLT_FDDI",
        "DLT_ATM_RFC1483",
        "DLT_RAW",
        "DLT_ENC",
        "DLT_PPP_BSDOS",
        "DLT_SLIP_BSDOS",
        "DLT_PPP_BSDOS",
        "DLT_OLD_PFLOG",
        "DLT_PFSYNC",
        "DLT_ATM_CLIP",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "DLT_REDBACK_SMARTEDGE",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "DLT_PPP_SERIAL",
        "DLT_PPP_ETHER",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "DLT_SYMANTEC_FIREWALL",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "DLT_C_HDLC",
        "DLT_IEEE802_11",
        "Unknown",
        "DLT_FRELAY",
        "DLT_LOOP",
        "DLT_ENC",
        "Unknown",
        "Unknown",
        "Unknown",
        "DLT_LINUX_SLL",
        "DLT_LTALK",
        "DLT_ECONET",
        "DLT_IPFILTER",
        "DLT_PFLOG",
        "DLT_CISCO_IOS",
        "DLT_PRISM_HEADER",
        "DLT_AIRONET_HEADER",
        "DLT_HHDLC",
        "DLT_IP_OVER_FC",
        "DLT_SUNATM",
        "DLT_RIO",
        "DLT_PCI_EXP",
        "DLT_AURORA",
        "DLT_IEEE802_11_RADIO",
        "DLT_TZSP",
        "DLT_ARCNET_LINUX",
        "DLT_JUNIPER_MLPPP",
        "DLT_JUNIPER_MLFR",
        "DLT_JUNIPER_ES",
        "DLT_JUNIPER_GGSN",
        "DLT_JUNIPER_MFR",
        "DLT_JUNIPER_ATM2",
        "DLT_JUNIPER_SERVICES",
        "DLT_JUNIPER_ATM1",
        "DLT_APPLE_IP_OVER_IEEE1394",
        "DLT_MTP2_WITH_PHDR",
        "DLT_MTP2",
        "DLT_MTP3",
        "DLT_SCCP",
        "DLT_DOCSIS",
        "DLT_LINUX_IRDA",
        "DLT_IBM_SP",
        "DLT_IBM_SN",
        "DLT_USER0",
        "DLT_USER1",
        "DLT_USER2",
        "DLT_USER3",
        "DLT_USER4",
        "DLT_USER5",
        "DLT_USER6",
        "DLT_USER7",
        "DLT_USER8",
        "DLT_USER9",
        "DLT_USER10",
        "DLT_USER11",
        "DLT_USER12",
        "DLT_USER13",
        "DLT_USER14",
        "DLT_USER15",
        "DLT_IEEE802_11_RADIO_AVS",
        "DLT_JUNIPER_MONITOR",
        "DLT_BACNET_MS_TP",
        "DLT_PPP_PPPD",
        "DLT_JUNIPER_PPPOE",
        "DLT_JUNIPER_PPPOE_ATM",
        "DLT_GPRS_LLC",
        "DLT_GPF_T",
        "DLT_GPF_F",
        "DLT_GCOM_T1E1",
        "DLT_GCOM_SERIAL",
        "DLT_JUNIPER_PIC_PEER",
        "DLT_ERF_ETH",
        "DLT_ERF_POS",
        "DLT_LINUX_LAPD",
        "DLT_JUNIPER_ETHER",
        "DLT_JUNIPER_PPP",
        "DLT_JUNIPER_FRELAY",
        "DLT_JUNIPER_CHDLC",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "Unknown",
        "DLT_LINUX_SLL2",
        NULL
};

