/*
 * Filename: packet-diameter-defs.h
 * WARNING:  This file was automatically generated by dict2h.pl.  Modifications
 *           will be erased by next invocation of dictionary parser.
 */

#ifndef _PACKET_DIAMETER_DEFS_H
#define _PACKET_DIAMETER_DEFS_H

/* Attributes */
#define DIAMETER_ATT_USER_NAME 1
#define DIAMETER_ATT_USER_PASSWORD 2
#define DIAMETER_ATT_CHAP_PASSWORD 3
#define DIAMETER_ATT_NAS_IP_ADDRESS 4
#define DIAMETER_ATT_NAS_PORT 5
#define DIAMETER_ATT_SERVICE_TYPE 6
#define DIAMETER_ATT_FRAMED_PROTOCOL 7
#define DIAMETER_ATT_FRAMED_IP_ADDRESS 8
#define DIAMETER_ATT_FRAMED_IP_NETMASK 9
#define DIAMETER_ATT_FRAMED_ROUTING 10
#define DIAMETER_ATT_FILTER_ID 11
#define DIAMETER_ATT_FRAMED_MTU 12
#define DIAMETER_ATT_FRAMED_COMPRESSION 13
#define DIAMETER_ATT_LOGIN_IP_HOST 14
#define DIAMETER_ATT_LOGIN_SERVICE 15
#define DIAMETER_ATT_LOGIN_TCP_PORT 16
#define DIAMETER_ATT_OLD_PASSWORD 17
#define DIAMETER_ATT_REPLY_MESSAGE 18
#define DIAMETER_ATT_CALLBACK_NUMBER 19
#define DIAMETER_ATT_CALLBACK_ID 20
#define DIAMETER_ATT_FRAMED_ROUTE 22
#define DIAMETER_ATT_FRAMED_IPX_NETWORK 23
#define DIAMETER_ATT_STATE 24
#define DIAMETER_ATT_CLASS 25
#define DIAMETER_ATT_SESSION_TIMEOUT 27
#define DIAMETER_ATT_IDLE_TIMEOUT 28
#define DIAMETER_ATT_TERMINATION_ACTION 29
#define DIAMETER_ATT_CALLED_STATION_ID 30
#define DIAMETER_ATT_CALLING_STATION_ID 31
#define DIAMETER_ATT_NAS_IDENTIFIER 32
#define DIAMETER_ATT_PROXY_STATE 33
#define DIAMETER_ATT_LOGIN_LAT_SERVICE 34
#define DIAMETER_ATT_LOGIN_LAT_NODE 35
#define DIAMETER_ATT_LOGIN_LAT_GROUP 36
#define DIAMETER_ATT_FRAMED_APPLETALK_LINK 37
#define DIAMETER_ATT_FRAMED_APPLETALK_NETWORK 38
#define DIAMETER_ATT_FRAMED_APPLETALK_ZONE 39
#define DIAMETER_ATT_CHAP_CHALLENGE 60
#define DIAMETER_ATT_NAS_PORT_TYPE 61
#define DIAMETER_ATT_PORT_LIMIT 62
#define DIAMETER_ATT_LOGIN_LAT_PORT 63
#define DIAMETER_ATT_TUNNEL_TYPE 64
#define DIAMETER_ATT_TUNNEL_MEDIUM_TYPE 65
#define DIAMETER_ATT_ACCT_TUNNEL_CLIENT_ENDPOINT 66
#define DIAMETER_ATT_TUNNEL_SERVER_ENDPOINT 67
#define DIAMETER_ATT_ACCT_TUNNEL_CONNECTION_ID 68
#define DIAMETER_ATT_TUNNEL_PASSWORD 69
#define DIAMETER_ATT_ARAP_PASSWORD 70
#define DIAMETER_ATT_ARAP_FEATURES 71
#define DIAMETER_ATT_ARAP_ZONE_ACCESS 72
#define DIAMETER_ATT_ARAP_SECURITY 73
#define DIAMETER_ATT_ARAP_SECURITY_DATA 74
#define DIAMETER_ATT_PASSWORD_RETRY 75
#define DIAMETER_ATT_PROMPT 76
#define DIAMETER_ATT_CONNECT_INFO 77
#define DIAMETER_ATT_CONFIGURATION_TOKEN 78
#define DIAMETER_ATT_EAP_MESSAGE 79
#define DIAMETER_ATT_SIGNATURE 80
#define DIAMETER_ATT_ACCT_STATUS_TYPE 40
#define DIAMETER_ATT_ACCT_DELAY_TIME 41
#define DIAMETER_ATT_ACCT_INPUT_OCTETS 42
#define DIAMETER_ATT_ACCT_OUTPUT_OCTETS 43
#define DIAMETER_ATT_ACCT_SESSION_ID 44
#define DIAMETER_ATT_ACCT_AUTHENTIC 45
#define DIAMETER_ATT_ACCT_SESSION_TIME 46
#define DIAMETER_ATT_ACCT_INPUT_PACKETS 47
#define DIAMETER_ATT_ACCT_OUTPUT_PACKETS 48
#define DIAMETER_ATT_ACCT_TERMINATE_CAUSE 49
#define DIAMETER_ATT_ACCT_MULTI_SESSION_ID 50
#define DIAMETER_ATT_ACCT_LINK_COUNT 51
#define DIAMETER_ATT_MERIT_ENCAPSULATED 141
#define DIAMETER_ATT_MERIT_REPLY_IF_ACK_MESSAGE 144
#define DIAMETER_ATT_MERIT_LAS_START_TIME 145
#define DIAMETER_ATT_MERIT_LAS_CODE 146
#define DIAMETER_ATT_MERIT_LAS_DURATION 147
#define DIAMETER_ATT_MERIT_LOCAL_DURATION 148
#define DIAMETER_ATT_MERIT_HUNTGROUP_SERVICE 149
#define DIAMETER_ATT_MERIT_PORT_ENTRY 150
#define DIAMETER_ATT_MERIT_PROXY_ACTION 211
#define DIAMETER_ATT_MERIT_TOKEN 213
#define DIAMETER_ATT_MERIT_OWNERSHIP 219
#define DIAMETER_ATT_MERIT_SUBGROUP 220
#define DIAMETER_ATT_MERIT_HUNTGROUP_NAME 221
#define DIAMETER_ATT_MERIT_USER_ID 222
#define DIAMETER_ATT_MERIT_USER_REALM 223
#define DIAMETER_ATT_COMMAND_CODE 256
#define DIAMETER_ATT_EXTENSION_ID 258
#define DIAMETER_ATT_INTEGRITY_CHECK_VALUE 259
#define DIAMETER_ATT_ENCRYPTED_PAYLOAD 260
#define DIAMETER_ATT_NONCE 261
#define DIAMETER_ATT_TIMESTAMP 262
#define DIAMETER_ATT_SESSION_ID 263
#define DIAMETER_ATT_VENDOR_NAME 266
#define DIAMETER_ATT_FIRMWARE_REVISION 267
#define DIAMETER_ATT_RESULT_CODE 268
#define DIAMETER_ATT_DESTINATION_NAI 269
#define DIAMETER_ATT_REBOOT_TYPE 271
#define DIAMETER_ATT_REBOOT_TIME 272
#define DIAMETER_ATT_FAILED_AVP 279
#define DIAMETER_ATT_RECEIVE_WINDOW 277
#define DIAMETER_ATT_REDIRECT_HOST 278
#define DIAMETER_ATT_IP_PORT 281
#define DIAMETER_ATT_ACCOUNTING_RECORD_TYPE 480
#define DIAMETER_ATT_ADIF_RECORD 481
#define DIAMETER_ATT_ACCOUNTING_INTERIM_INTERVAL 482
#define DIAMETER_ATT_ACCOUNTING_DELIVERY_MAX_BATCH 483
#define DIAMETER_ATT_ACCOUNTING_DELIVERY_MAX_DELAY 484
#define DIAMETER_ATT_ACCOUNTING_RECORD_NUMBER 485
#define DIAMETER_ATT_MIP_REGISTRATION_REQUEST 320
#define DIAMETER_ATT_MIP_REGISTRATION_REPLY 321
#define DIAMETER_ATT_MN_FA_CHALLENGE_LENGTH 322
#define DIAMETER_ATT_MN_FA_RESPONSE 323
#define DIAMETER_ATT_MOBILE_NODE_ADDRESS 333
#define DIAMETER_ATT_HOME_AGENT_ADDRESS 334
#define DIAMETER_ATT_PREVIOUS_FA_NAI 335
#define DIAMETER_ATT_MN_AAA_SPI 336
#define DIAMETER_ATT_FOREIGN_HA_AVAIL 337
#define DIAMETER_ATT_MN_TO_FA_KEY 325
#define DIAMETER_ATT_MN_TO_HA_KEY 331
#define DIAMETER_ATT_FA_TO_MN_KEY 326
#define DIAMETER_ATT_FA_TO_HA_KEY 328
#define DIAMETER_ATT_HA_TO_MN_KEY 332
#define DIAMETER_ATT_HA_TO_FA_KEY 329
#define DIAMETER_ATT_FA_MN_PREFERRED_SPI 324
#define DIAMETER_ATT_FA_HA_PREFERRED_SPI 327
#define DIAMETER_ATT_FILTER_RULE 400
#define DIAMETER_ATT_REQUEST_TYPE 401
#define DIAMETER_ATT_EAP_PAYLOAD 402
#define DIAMETER_ATT_CMS_DATA 310
#define DIAMETER_ATT_RES_MGMT_INDEX 573
#define DIAMETER_ATT_RES_MGMT_TOKEN 574
#define DIAMETER_ATT_SOURCE_HOST 600
#define DIAMETER_ATT_DESTINATION_HOST 601
#define DIAMETER_ATT_SOURCE_PORT 602
#define DIAMETER_ATT_DESTINATION_PORT 603
#define DIAMETER_ATT_PROTOCOL 604
#define DIAMETER_ATT_RSVP_SERVICE_TYPE 605
#define DIAMETER_ATT_TOKEN_BUCKET_RATE 606
#define DIAMETER_ATT_TOKEN_BUCKET_SIZE 607
#define DIAMETER_ATT_PEAK_DATA_RATE 608
#define DIAMETER_ATT_MINIMUM_POLICED_UNIT 609
#define DIAMETER_ATT_MAXIMUM_PACKET_SIZE 610
#define DIAMETER_ATT_QOS_RATE 611
#define DIAMETER_ATT_SLACK_TERM 612
#define DIAMETER_ATT_TOS_DS_VALUE 613
#define DIAMETER_ATT_INTERFACE_ADDRESS 614
#define DIAMETER_ATT_QOS_SERVICE_TYPE 615
#define DIAMETER_ATT_VOIP_CALLER 686
#define DIAMETER_ATT_VOIP_CALLEE 687
#define DIAMETER_ATT_VOIP_CHALLENGE 688
#define DIAMETER_ATT_VOIP_RESPONSE 689
#define DIAMETER_ATT_VOIP_SESSION_LENGTH 690
#define DIAMETER_ATT_COMMENT 1024
#define DIAMETER_ATT_XVALUE 1025
#define DIAMETER_ATT_XSTRING 1026
#define DIAMETER_ATT_AUTHENTICATION_TYPE 1027
#define DIAMETER_ATT_PROHIBIT 1028
#define DIAMETER_ATT_USER_CATEGORY 1029
#define DIAMETER_ATT_GROUP_NAME 1030
#define DIAMETER_ATT_ENCRYPTED_PASSWORD 1031
#define DIAMETER_ATT_EXPIRATION 1032
#define DIAMETER_ATT_PASSWORD 1033
#define DIAMETER_ATT_SIMULTANEOUS_USE 1034
#define DIAMETER_ATT_SESSION_LIMIT 1034
#define DIAMETER_ATT_SERVER_NAME 1035
#define DIAMETER_ATT_FRAMED_IP_ADDRESS_POOL_NAME 1036
#define DIAMETER_ATT_SERVICE_CLASS 1037
#define DIAMETER_ATT_DENY_MESSAGE 1038
#define DIAMETER_ATT_SOURCE_SUBNET 1039
#define DIAMETER_ATT_DESTINATION_SUBNET 1040
#define DIAMETER_ATT_MAX_QOS_RATE 1041
#define DIAMETER_ATT_ACCOUNTING_ADIF_RECORD 2000


            /* Attribute to String table */

static value_string diameter_attrib_type_vals[] = {
   {DIAMETER_ATT_USER_NAME, "User-Name"},
   {DIAMETER_ATT_USER_PASSWORD, "User-Password"},
   {DIAMETER_ATT_CHAP_PASSWORD, "CHAP-Password"},
   {DIAMETER_ATT_NAS_IP_ADDRESS, "NAS-IP-Address"},
   {DIAMETER_ATT_NAS_PORT, "NAS-Port"},
   {DIAMETER_ATT_SERVICE_TYPE, "Service-Type"},
   {DIAMETER_ATT_FRAMED_PROTOCOL, "Framed-Protocol"},
   {DIAMETER_ATT_FRAMED_IP_ADDRESS, "Framed-IP-Address"},
   {DIAMETER_ATT_FRAMED_IP_NETMASK, "Framed-IP-Netmask"},
   {DIAMETER_ATT_FRAMED_ROUTING, "Framed-Routing"},
   {DIAMETER_ATT_FILTER_ID, "Filter-Id"},
   {DIAMETER_ATT_FRAMED_MTU, "Framed-MTU"},
   {DIAMETER_ATT_FRAMED_COMPRESSION, "Framed-Compression"},
   {DIAMETER_ATT_LOGIN_IP_HOST, "Login-IP-Host"},
   {DIAMETER_ATT_LOGIN_SERVICE, "Login-Service"},
   {DIAMETER_ATT_LOGIN_TCP_PORT, "Login-TCP-Port"},
   {DIAMETER_ATT_OLD_PASSWORD, "Old-Password"},
   {DIAMETER_ATT_REPLY_MESSAGE, "Reply-Message"},
   {DIAMETER_ATT_CALLBACK_NUMBER, "Callback-Number"},
   {DIAMETER_ATT_CALLBACK_ID, "Callback-Id"},
   {DIAMETER_ATT_FRAMED_ROUTE, "Framed-Route"},
   {DIAMETER_ATT_FRAMED_IPX_NETWORK, "Framed-IPX-Network"},
   {DIAMETER_ATT_STATE, "State"},
   {DIAMETER_ATT_CLASS, "Class"},
   {DIAMETER_ATT_SESSION_TIMEOUT, "Session-Timeout"},
   {DIAMETER_ATT_IDLE_TIMEOUT, "Idle-Timeout"},
   {DIAMETER_ATT_TERMINATION_ACTION, "Termination-Action"},
   {DIAMETER_ATT_CALLED_STATION_ID, "Called-Station-Id"},
   {DIAMETER_ATT_CALLING_STATION_ID, "Calling-Station-Id"},
   {DIAMETER_ATT_NAS_IDENTIFIER, "NAS-Identifier"},
   {DIAMETER_ATT_PROXY_STATE, "Proxy-State"},
   {DIAMETER_ATT_LOGIN_LAT_SERVICE, "Login-LAT-Service"},
   {DIAMETER_ATT_LOGIN_LAT_NODE, "Login-LAT-Node"},
   {DIAMETER_ATT_LOGIN_LAT_GROUP, "Login-LAT-Group"},
   {DIAMETER_ATT_FRAMED_APPLETALK_LINK, "Framed-AppleTalk-Link"},
   {DIAMETER_ATT_FRAMED_APPLETALK_NETWORK, "Framed-AppleTalk-Network"},
   {DIAMETER_ATT_FRAMED_APPLETALK_ZONE, "Framed-AppleTalk-Zone"},
   {DIAMETER_ATT_CHAP_CHALLENGE, "CHAP-Challenge"},
   {DIAMETER_ATT_NAS_PORT_TYPE, "NAS-Port-Type"},
   {DIAMETER_ATT_PORT_LIMIT, "Port-Limit"},
   {DIAMETER_ATT_LOGIN_LAT_PORT, "Login-LAT-Port"},
   {DIAMETER_ATT_TUNNEL_TYPE, "Tunnel-Type"},
   {DIAMETER_ATT_TUNNEL_MEDIUM_TYPE, "Tunnel-Medium-Type"},
   {DIAMETER_ATT_ACCT_TUNNEL_CLIENT_ENDPOINT, "Acct-Tunnel-Client-Endpoint"},
   {DIAMETER_ATT_TUNNEL_SERVER_ENDPOINT, "Tunnel-Server-Endpoint"},
   {DIAMETER_ATT_ACCT_TUNNEL_CONNECTION_ID, "Acct-Tunnel-Connection-ID"},
   {DIAMETER_ATT_TUNNEL_PASSWORD, "Tunnel-Password"},
   {DIAMETER_ATT_ARAP_PASSWORD, "ARAP-Password"},
   {DIAMETER_ATT_ARAP_FEATURES, "ARAP-Features"},
   {DIAMETER_ATT_ARAP_ZONE_ACCESS, "ARAP-Zone-Access"},
   {DIAMETER_ATT_ARAP_SECURITY, "ARAP-Security"},
   {DIAMETER_ATT_ARAP_SECURITY_DATA, "ARAP-Security-Data"},
   {DIAMETER_ATT_PASSWORD_RETRY, "Password-Retry"},
   {DIAMETER_ATT_PROMPT, "Prompt"},
   {DIAMETER_ATT_CONNECT_INFO, "Connect-Info"},
   {DIAMETER_ATT_CONFIGURATION_TOKEN, "Configuration-Token"},
   {DIAMETER_ATT_EAP_MESSAGE, "EAP-Message"},
   {DIAMETER_ATT_SIGNATURE, "Signature"},
   {DIAMETER_ATT_ACCT_STATUS_TYPE, "Acct-Status-Type"},
   {DIAMETER_ATT_ACCT_DELAY_TIME, "Acct-Delay-Time"},
   {DIAMETER_ATT_ACCT_INPUT_OCTETS, "Acct-Input-Octets"},
   {DIAMETER_ATT_ACCT_OUTPUT_OCTETS, "Acct-Output-Octets"},
   {DIAMETER_ATT_ACCT_SESSION_ID, "Acct-Session-Id"},
   {DIAMETER_ATT_ACCT_AUTHENTIC, "Acct-Authentic"},
   {DIAMETER_ATT_ACCT_SESSION_TIME, "Acct-Session-Time"},
   {DIAMETER_ATT_ACCT_INPUT_PACKETS, "Acct-Input-Packets"},
   {DIAMETER_ATT_ACCT_OUTPUT_PACKETS, "Acct-Output-Packets"},
   {DIAMETER_ATT_ACCT_TERMINATE_CAUSE, "Acct-Terminate-Cause"},
   {DIAMETER_ATT_ACCT_MULTI_SESSION_ID, "Acct-Multi-Session-Id"},
   {DIAMETER_ATT_ACCT_LINK_COUNT, "Acct-Link-Count"},
   {DIAMETER_ATT_MERIT_ENCAPSULATED, "Merit.Encapsulated"},
   {DIAMETER_ATT_MERIT_REPLY_IF_ACK_MESSAGE, "Merit.Reply-If-Ack-Message"},
   {DIAMETER_ATT_MERIT_LAS_START_TIME, "Merit.LAS-Start-Time"},
   {DIAMETER_ATT_MERIT_LAS_CODE, "Merit.LAS-Code"},
   {DIAMETER_ATT_MERIT_LAS_DURATION, "Merit.LAS-Duration"},
   {DIAMETER_ATT_MERIT_LOCAL_DURATION, "Merit.Local-Duration"},
   {DIAMETER_ATT_MERIT_HUNTGROUP_SERVICE, "Merit.Huntgroup-Service"},
   {DIAMETER_ATT_MERIT_PORT_ENTRY, "Merit.Port-Entry"},
   {DIAMETER_ATT_MERIT_PROXY_ACTION, "Merit.Proxy-Action"},
   {DIAMETER_ATT_MERIT_TOKEN, "Merit.Token"},
   {DIAMETER_ATT_MERIT_OWNERSHIP, "Merit.Ownership"},
   {DIAMETER_ATT_MERIT_SUBGROUP, "Merit.Subgroup"},
   {DIAMETER_ATT_MERIT_HUNTGROUP_NAME, "Merit.Huntgroup-Name"},
   {DIAMETER_ATT_MERIT_USER_ID, "Merit.User-Id"},
   {DIAMETER_ATT_MERIT_USER_REALM, "Merit.User-Realm"},
   {DIAMETER_ATT_COMMAND_CODE, "Command-Code"},
   {DIAMETER_ATT_EXTENSION_ID, "Extension-Id"},
   {DIAMETER_ATT_INTEGRITY_CHECK_VALUE, "Integrity-Check-Value"},
   {DIAMETER_ATT_ENCRYPTED_PAYLOAD, "Encrypted-Payload"},
   {DIAMETER_ATT_NONCE, "Nonce"},
   {DIAMETER_ATT_TIMESTAMP, "Timestamp"},
   {DIAMETER_ATT_SESSION_ID, "Session-Id"},
   {DIAMETER_ATT_VENDOR_NAME, "Vendor-Name"},
   {DIAMETER_ATT_FIRMWARE_REVISION, "Firmware-Revision"},
   {DIAMETER_ATT_RESULT_CODE, "Result-Code"},
   {DIAMETER_ATT_DESTINATION_NAI, "Destination-NAI"},
   {DIAMETER_ATT_REBOOT_TYPE, "Reboot-Type"},
   {DIAMETER_ATT_REBOOT_TIME, "Reboot-Time"},
   {DIAMETER_ATT_FAILED_AVP, "Failed-AVP"},
   {DIAMETER_ATT_RECEIVE_WINDOW, "Receive-Window"},
   {DIAMETER_ATT_REDIRECT_HOST, "Redirect-Host"},
   {DIAMETER_ATT_IP_PORT, "IP-Port"},
   {DIAMETER_ATT_ACCOUNTING_RECORD_TYPE, "Accounting-Record-Type"},
   {DIAMETER_ATT_ADIF_RECORD, "ADIF-Record"},
   {DIAMETER_ATT_ACCOUNTING_INTERIM_INTERVAL, "Accounting-Interim-Interval"},
   {DIAMETER_ATT_ACCOUNTING_DELIVERY_MAX_BATCH, "Accounting-Delivery-Max-Batch"},
   {DIAMETER_ATT_ACCOUNTING_DELIVERY_MAX_DELAY, "Accounting-Delivery-Max-Delay"},
   {DIAMETER_ATT_ACCOUNTING_RECORD_NUMBER, "Accounting-Record-Number"},
   {DIAMETER_ATT_MIP_REGISTRATION_REQUEST, "MIP-Registration-Request"},
   {DIAMETER_ATT_MIP_REGISTRATION_REPLY, "MIP-Registration-Reply"},
   {DIAMETER_ATT_MN_FA_CHALLENGE_LENGTH, "MN-FA-Challenge-Length"},
   {DIAMETER_ATT_MN_FA_RESPONSE, "MN-FA-Response"},
   {DIAMETER_ATT_MOBILE_NODE_ADDRESS, "Mobile-Node-Address"},
   {DIAMETER_ATT_HOME_AGENT_ADDRESS, "Home-Agent-Address"},
   {DIAMETER_ATT_PREVIOUS_FA_NAI, "Previous-FA-NAI"},
   {DIAMETER_ATT_MN_AAA_SPI, "MN-AAA-SPI"},
   {DIAMETER_ATT_FOREIGN_HA_AVAIL, "Foreign-HA-Avail"},
   {DIAMETER_ATT_MN_TO_FA_KEY, "MN-to-FA-Key"},
   {DIAMETER_ATT_MN_TO_HA_KEY, "MN-to-HA-Key"},
   {DIAMETER_ATT_FA_TO_MN_KEY, "FA-to-MN-Key"},
   {DIAMETER_ATT_FA_TO_HA_KEY, "FA-to-HA-Key"},
   {DIAMETER_ATT_HA_TO_MN_KEY, "HA-to-MN-Key"},
   {DIAMETER_ATT_HA_TO_FA_KEY, "HA-to-FA-Key"},
   {DIAMETER_ATT_FA_MN_PREFERRED_SPI, "FA-MN-Preferred-SPI"},
   {DIAMETER_ATT_FA_HA_PREFERRED_SPI, "FA-HA-Preferred-SPI"},
   {DIAMETER_ATT_FILTER_RULE, "Filter-Rule"},
   {DIAMETER_ATT_REQUEST_TYPE, "Request-Type"},
   {DIAMETER_ATT_EAP_PAYLOAD, "EAP-Payload"},
   {DIAMETER_ATT_CMS_DATA, "CMS-Data"},
   {DIAMETER_ATT_RES_MGMT_INDEX, "Res-Mgmt-Index"},
   {DIAMETER_ATT_RES_MGMT_TOKEN, "Res-Mgmt-Token"},
   {DIAMETER_ATT_SOURCE_HOST, "Source-Host"},
   {DIAMETER_ATT_DESTINATION_HOST, "Destination-Host"},
   {DIAMETER_ATT_SOURCE_PORT, "Source-Port"},
   {DIAMETER_ATT_DESTINATION_PORT, "Destination-Port"},
   {DIAMETER_ATT_PROTOCOL, "Protocol"},
   {DIAMETER_ATT_RSVP_SERVICE_TYPE, "RSVP-Service-Type"},
   {DIAMETER_ATT_TOKEN_BUCKET_RATE, "Token-Bucket-Rate"},
   {DIAMETER_ATT_TOKEN_BUCKET_SIZE, "Token-Bucket-Size"},
   {DIAMETER_ATT_PEAK_DATA_RATE, "Peak-Data-Rate"},
   {DIAMETER_ATT_MINIMUM_POLICED_UNIT, "Minimum-Policed-Unit"},
   {DIAMETER_ATT_MAXIMUM_PACKET_SIZE, "Maximum-Packet-Size"},
   {DIAMETER_ATT_QOS_RATE, "QOS-Rate"},
   {DIAMETER_ATT_SLACK_TERM, "Slack-Term"},
   {DIAMETER_ATT_TOS_DS_VALUE, "TOS-DS-Value"},
   {DIAMETER_ATT_INTERFACE_ADDRESS, "Interface-Address"},
   {DIAMETER_ATT_QOS_SERVICE_TYPE, "QOS-Service-Type"},
   {DIAMETER_ATT_VOIP_CALLER, "Voip-Caller"},
   {DIAMETER_ATT_VOIP_CALLEE, "Voip-Callee"},
   {DIAMETER_ATT_VOIP_CHALLENGE, "Voip-Challenge"},
   {DIAMETER_ATT_VOIP_RESPONSE, "Voip-Response"},
   {DIAMETER_ATT_VOIP_SESSION_LENGTH, "Voip-Session-Length"},
   {DIAMETER_ATT_COMMENT, "Comment"},
   {DIAMETER_ATT_XVALUE, "Xvalue"},
   {DIAMETER_ATT_XSTRING, "Xstring"},
   {DIAMETER_ATT_AUTHENTICATION_TYPE, "Authentication-Type"},
   {DIAMETER_ATT_PROHIBIT, "Prohibit"},
   {DIAMETER_ATT_USER_CATEGORY, "User-Category"},
   {DIAMETER_ATT_GROUP_NAME, "Group-Name"},
   {DIAMETER_ATT_ENCRYPTED_PASSWORD, "Encrypted-Password"},
   {DIAMETER_ATT_EXPIRATION, "Expiration"},
   {DIAMETER_ATT_PASSWORD, "Password"},
   {DIAMETER_ATT_SIMULTANEOUS_USE, "Simultaneous-Use"},
   {DIAMETER_ATT_SESSION_LIMIT, "Session-Limit"},
   {DIAMETER_ATT_SERVER_NAME, "Server-Name"},
   {DIAMETER_ATT_FRAMED_IP_ADDRESS_POOL_NAME, "Framed-IP-Address-Pool-Name"},
   {DIAMETER_ATT_SERVICE_CLASS, "Service-Class"},
   {DIAMETER_ATT_DENY_MESSAGE, "Deny-Message"},
   {DIAMETER_ATT_SOURCE_SUBNET, "Source-Subnet"},
   {DIAMETER_ATT_DESTINATION_SUBNET, "Destination-Subnet"},
   {DIAMETER_ATT_MAX_QOS_RATE, "Max-QOS-Rate"},
   {DIAMETER_ATT_ACCOUNTING_ADIF_RECORD, "Accounting-Adif-Record"},
   {0, (char *)NULL}
};


           /* Attribute to Type Table */

static value_value_pair diameter_printinfo[] = {
   { DIAMETER_ATT_USER_NAME, DIAMETER_STRING },
   { DIAMETER_ATT_USER_PASSWORD, DIAMETER_STRING },
   { DIAMETER_ATT_CHAP_PASSWORD, DIAMETER_STRING },
   { DIAMETER_ATT_NAS_IP_ADDRESS, DIAMETER_ADDRESS },
   { DIAMETER_ATT_NAS_PORT, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_SERVICE_TYPE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_FRAMED_PROTOCOL, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_FRAMED_IP_ADDRESS, DIAMETER_ADDRESS },
   { DIAMETER_ATT_FRAMED_IP_NETMASK, DIAMETER_ADDRESS },
   { DIAMETER_ATT_FRAMED_ROUTING, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_FILTER_ID, DIAMETER_STRING },
   { DIAMETER_ATT_FRAMED_MTU, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_FRAMED_COMPRESSION, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_LOGIN_IP_HOST, DIAMETER_ADDRESS },
   { DIAMETER_ATT_LOGIN_SERVICE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_LOGIN_TCP_PORT, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_OLD_PASSWORD, DIAMETER_STRING },
   { DIAMETER_ATT_REPLY_MESSAGE, DIAMETER_STRING },
   { DIAMETER_ATT_CALLBACK_NUMBER, DIAMETER_STRING },
   { DIAMETER_ATT_CALLBACK_ID, DIAMETER_STRING },
   { DIAMETER_ATT_FRAMED_ROUTE, DIAMETER_STRING },
   { DIAMETER_ATT_FRAMED_IPX_NETWORK, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_STATE, DIAMETER_STRING },
   { DIAMETER_ATT_CLASS, DIAMETER_STRING },
   { DIAMETER_ATT_SESSION_TIMEOUT, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_IDLE_TIMEOUT, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_TERMINATION_ACTION, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_CALLED_STATION_ID, DIAMETER_STRING },
   { DIAMETER_ATT_CALLING_STATION_ID, DIAMETER_STRING },
   { DIAMETER_ATT_NAS_IDENTIFIER, DIAMETER_STRING },
   { DIAMETER_ATT_PROXY_STATE, DIAMETER_DATA },
   { DIAMETER_ATT_LOGIN_LAT_SERVICE, DIAMETER_STRING },
   { DIAMETER_ATT_LOGIN_LAT_NODE, DIAMETER_STRING },
   { DIAMETER_ATT_LOGIN_LAT_GROUP, DIAMETER_STRING },
   { DIAMETER_ATT_FRAMED_APPLETALK_LINK, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_FRAMED_APPLETALK_NETWORK, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_FRAMED_APPLETALK_ZONE, DIAMETER_STRING },
   { DIAMETER_ATT_CHAP_CHALLENGE, DIAMETER_STRING },
   { DIAMETER_ATT_NAS_PORT_TYPE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_PORT_LIMIT, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_LOGIN_LAT_PORT, DIAMETER_STRING },
   { DIAMETER_ATT_TUNNEL_TYPE, DIAMETER_STRING },
   { DIAMETER_ATT_TUNNEL_MEDIUM_TYPE, DIAMETER_STRING },
   { DIAMETER_ATT_ACCT_TUNNEL_CLIENT_ENDPOINT, DIAMETER_STRING },
   { DIAMETER_ATT_TUNNEL_SERVER_ENDPOINT, DIAMETER_STRING },
   { DIAMETER_ATT_ACCT_TUNNEL_CONNECTION_ID, DIAMETER_STRING },
   { DIAMETER_ATT_TUNNEL_PASSWORD, DIAMETER_STRING },
   { DIAMETER_ATT_ARAP_PASSWORD, DIAMETER_STRING },
   { DIAMETER_ATT_ARAP_FEATURES, DIAMETER_STRING },
   { DIAMETER_ATT_ARAP_ZONE_ACCESS, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_ARAP_SECURITY, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_ARAP_SECURITY_DATA, DIAMETER_STRING },
   { DIAMETER_ATT_PASSWORD_RETRY, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_PROMPT, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_CONNECT_INFO, DIAMETER_STRING },
   { DIAMETER_ATT_CONFIGURATION_TOKEN, DIAMETER_STRING },
   { DIAMETER_ATT_EAP_MESSAGE, DIAMETER_STRING },
   { DIAMETER_ATT_SIGNATURE, DIAMETER_STRING },
   { DIAMETER_ATT_ACCT_STATUS_TYPE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_ACCT_DELAY_TIME, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_ACCT_INPUT_OCTETS, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_ACCT_OUTPUT_OCTETS, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_ACCT_SESSION_ID, DIAMETER_STRING },
   { DIAMETER_ATT_ACCT_AUTHENTIC, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_ACCT_SESSION_TIME, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_ACCT_INPUT_PACKETS, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_ACCT_OUTPUT_PACKETS, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_ACCT_TERMINATE_CAUSE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_ACCT_MULTI_SESSION_ID, DIAMETER_STRING },
   { DIAMETER_ATT_ACCT_LINK_COUNT, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_MERIT_ENCAPSULATED, DIAMETER_DATA },
   { DIAMETER_ATT_MERIT_REPLY_IF_ACK_MESSAGE, DIAMETER_STRING },
   { DIAMETER_ATT_MERIT_LAS_START_TIME, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_MERIT_LAS_CODE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_MERIT_LAS_DURATION, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_MERIT_LOCAL_DURATION, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_MERIT_HUNTGROUP_SERVICE, DIAMETER_STRING },
   { DIAMETER_ATT_MERIT_PORT_ENTRY, DIAMETER_DATA },
   { DIAMETER_ATT_MERIT_PROXY_ACTION, DIAMETER_STRING },
   { DIAMETER_ATT_MERIT_TOKEN, DIAMETER_STRING },
   { DIAMETER_ATT_MERIT_OWNERSHIP, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_MERIT_SUBGROUP, DIAMETER_STRING },
   { DIAMETER_ATT_MERIT_HUNTGROUP_NAME, DIAMETER_STRING },
   { DIAMETER_ATT_MERIT_USER_ID, DIAMETER_STRING },
   { DIAMETER_ATT_MERIT_USER_REALM, DIAMETER_STRING },
   { DIAMETER_ATT_COMMAND_CODE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_EXTENSION_ID, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_INTEGRITY_CHECK_VALUE, DIAMETER_COMPLEX },
   { DIAMETER_ATT_ENCRYPTED_PAYLOAD, DIAMETER_DATA },
   { DIAMETER_ATT_NONCE, DIAMETER_DATA },
   { DIAMETER_ATT_TIMESTAMP, DIAMETER_TIME },
   { DIAMETER_ATT_SESSION_ID, DIAMETER_DATA },
   { DIAMETER_ATT_VENDOR_NAME, DIAMETER_STRING },
   { DIAMETER_ATT_FIRMWARE_REVISION, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_RESULT_CODE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_DESTINATION_NAI, DIAMETER_STRING },
   { DIAMETER_ATT_REBOOT_TYPE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_REBOOT_TIME, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_FAILED_AVP, DIAMETER_DATA },
   { DIAMETER_ATT_RECEIVE_WINDOW, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_REDIRECT_HOST, DIAMETER_ADDRESS },
   { DIAMETER_ATT_IP_PORT, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_ACCOUNTING_RECORD_TYPE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_ADIF_RECORD, DIAMETER_DATA },
   { DIAMETER_ATT_ACCOUNTING_INTERIM_INTERVAL, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_ACCOUNTING_DELIVERY_MAX_BATCH, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_ACCOUNTING_DELIVERY_MAX_DELAY, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_ACCOUNTING_RECORD_NUMBER, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_MIP_REGISTRATION_REQUEST, DIAMETER_DATA },
   { DIAMETER_ATT_MIP_REGISTRATION_REPLY, DIAMETER_DATA },
   { DIAMETER_ATT_MN_FA_CHALLENGE_LENGTH, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_MN_FA_RESPONSE, DIAMETER_DATA },
   { DIAMETER_ATT_MOBILE_NODE_ADDRESS, DIAMETER_ADDRESS },
   { DIAMETER_ATT_HOME_AGENT_ADDRESS, DIAMETER_ADDRESS },
   { DIAMETER_ATT_PREVIOUS_FA_NAI, DIAMETER_STRING },
   { DIAMETER_ATT_MN_AAA_SPI, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_FOREIGN_HA_AVAIL, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_MN_TO_FA_KEY, DIAMETER_DATA },
   { DIAMETER_ATT_MN_TO_HA_KEY, DIAMETER_DATA },
   { DIAMETER_ATT_FA_TO_MN_KEY, DIAMETER_DATA },
   { DIAMETER_ATT_FA_TO_HA_KEY, DIAMETER_DATA },
   { DIAMETER_ATT_HA_TO_MN_KEY, DIAMETER_DATA },
   { DIAMETER_ATT_HA_TO_FA_KEY, DIAMETER_DATA },
   { DIAMETER_ATT_FA_MN_PREFERRED_SPI, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_FA_HA_PREFERRED_SPI, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_FILTER_RULE, DIAMETER_STRING },
   { DIAMETER_ATT_REQUEST_TYPE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_EAP_PAYLOAD, DIAMETER_DATA },
   { DIAMETER_ATT_CMS_DATA, DIAMETER_DATA },
   { DIAMETER_ATT_RES_MGMT_INDEX, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_RES_MGMT_TOKEN, DIAMETER_DATA },
   { DIAMETER_ATT_SOURCE_HOST, DIAMETER_ADDRESS },
   { DIAMETER_ATT_DESTINATION_HOST, DIAMETER_ADDRESS },
   { DIAMETER_ATT_SOURCE_PORT, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_DESTINATION_PORT, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_PROTOCOL, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_RSVP_SERVICE_TYPE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_TOKEN_BUCKET_RATE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_TOKEN_BUCKET_SIZE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_PEAK_DATA_RATE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_MINIMUM_POLICED_UNIT, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_MAXIMUM_PACKET_SIZE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_QOS_RATE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_SLACK_TERM, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_TOS_DS_VALUE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_INTERFACE_ADDRESS, DIAMETER_ADDRESS },
   { DIAMETER_ATT_QOS_SERVICE_TYPE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_VOIP_CALLER, DIAMETER_STRING },
   { DIAMETER_ATT_VOIP_CALLEE, DIAMETER_STRING },
   { DIAMETER_ATT_VOIP_CHALLENGE, DIAMETER_DATA },
   { DIAMETER_ATT_VOIP_RESPONSE, DIAMETER_DATA },
   { DIAMETER_ATT_VOIP_SESSION_LENGTH, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_COMMENT, DIAMETER_STRING },
   { DIAMETER_ATT_XVALUE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_XSTRING, DIAMETER_STRING },
   { DIAMETER_ATT_AUTHENTICATION_TYPE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_PROHIBIT, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_USER_CATEGORY, DIAMETER_STRING },
   { DIAMETER_ATT_GROUP_NAME, DIAMETER_STRING },
   { DIAMETER_ATT_ENCRYPTED_PASSWORD, DIAMETER_STRING },
   { DIAMETER_ATT_EXPIRATION, DIAMETER_TIME },
   { DIAMETER_ATT_PASSWORD, DIAMETER_STRING },
   { DIAMETER_ATT_SIMULTANEOUS_USE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_SESSION_LIMIT, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_SERVER_NAME, DIAMETER_STRING },
   { DIAMETER_ATT_FRAMED_IP_ADDRESS_POOL_NAME, DIAMETER_STRING },
   { DIAMETER_ATT_SERVICE_CLASS, DIAMETER_STRING },
   { DIAMETER_ATT_DENY_MESSAGE, DIAMETER_STRING },
   { DIAMETER_ATT_SOURCE_SUBNET, DIAMETER_ADDRESS },
   { DIAMETER_ATT_DESTINATION_SUBNET, DIAMETER_ADDRESS },
   { DIAMETER_ATT_MAX_QOS_RATE, DIAMETER_INTEGER32 },
   { DIAMETER_ATT_ACCOUNTING_ADIF_RECORD, DIAMETER_DATA },
   {0, 0}
};




        /* Values Structures */

static value_string diameter_qos_service_type_vals[]={
   {3, "Labels"},
   {1, "RSVP"},
   {2, "TOS"},
   {0, (char *)NULL}
};

static value_string diameter_service_type_vals[]={
   {5, "Outbound"},
   {7, "NAS-Prompt"},
   {3, "Callback-Login"},
   {6, "Administrative"},
   {1, "Login"},
   {4, "Callback-Framed"},
   {9, "Callback-NAS-Prompt"},
   {8, "Authenticate-Only"},
   {2, "Framed"},
   {0, (char *)NULL}
};

static value_string diameter_prohibit_vals[]={
   {0, "Dumb"},
   {2, "SLIP"},
   {1, "PPP"},
   {3, "Auth-Only"},
   {255, "All"},
   {0, (char *)NULL}
};

static value_string diameter_prompt_vals[]={
   {0, "No-Echo"},
   {1, "Echo"},
   {0, (char *)NULL}
};

static value_string diameter_source_port_vals[]={
   {23, "ftp"},
   {0, "*"},
   {21, "telnet"},
   {0, (char *)NULL}
};

static value_string diameter_nas_port_type_vals[]={
   {6, "PIAFS"},
   {9, "X75"},
   {7, "HDLC-Clear-Channel"},
   {5, "Virtual"},
   {2, "ISDN-Sync"},
   {1, "Sync"},
   {0, "Async"},
   {4, "ISDN-Async-v110"},
   {3, "ISDN-Async-v120"},
   {8, "X25"},
   {0, (char *)NULL}
};

static value_string diameter_interface_address_vals[]={
   {0, "Any-Interface"},
   {0, (char *)NULL}
};

static value_string diameter_framed_routing_vals[]={
   {0, "None"},
   {1, "Broadcast"},
   {3, "Broadcast-Listen"},
   {2, "Listen"},
   {0, (char *)NULL}
};

static value_string diameter_command_code_vals[]={
   {257, "Device-Reboot-Ind"},
   {258, "Device-Watchdog-Ind"},
   {259, "Message-Reject-Ind"},
   {260, "AA-Mobile-Node-Request"},
   {261, "AA-Mobile-Node-Answer"},
   {262, "Home-Agent-MIP-Request"},
   {263, "Home-Agent-MIP-Answer"},
   {264, "Mobile-Node-Terminate-Ind"},
   {265, "AA-Request"},
   {266, "AA-Answer"},
   {267, "AA-Challenge-Ind"},
   {268, "DIAMETER-EAP-Request"},
   {269, "DIAMETER-EAP-Answer"},
   {270, "DIAMETER-EAP-Ind"},
   {271, "Accounting-Request"},
   {272, "Accounting-Answer"},
   {273, "Accounting-Poll"},
   {483, "Accounting-Start-Answer"},
   {511, "Ping-Req"},
   {484, "Accounting-Interim-Req"},
   {480, "Voip-Stop-Req"},
   {512, "Ping-Answer"},
   {513, "EAP-Req"},
   {485, "Accounting-Interim-Answer"},
   {481, "Voip-Stop-Answer"},
   {478, "Voip-Start-Req"},
   {486, "Accounting-Stop-Req"},
   {514, "EAP-Answer"},
   {515, "Domain-Discovery-Request"},
   {479, "Voip-Start-Answer"},
   {516, "Domain-Discovery-Answer"},
   {487, "Accounting-Stop-Answer"},
   {482, "Accounting-Start-Req"},
   {0, (char *)NULL}
};

static value_string diameter_framed_ip_address_vals[]={
   {-1, "Assigned"},
   {0, (char *)NULL}
};

static value_string diameter_arap_zone_access_vals[]={
   {4, "Exclusive-Filter"},
   {2, "Inclusive-Filter"},
   {1, "Default-Zone"},
   {0, (char *)NULL}
};

static value_string diameter_acct_authentic_vals[]={
   {1, "RADIUS"},
   {0, "None"},
   {2, "Local"},
   {0, (char *)NULL}
};

static value_string diameter_framed_protocol_vals[]={
   {1, "PPP"},
   {260, "COMB"},
   {5, "Xylogics"},
   {257, "EURAW"},
   {3, "ARA"},
   {261, "FR"},
   {2, "SLIP"},
   {258, "EUUI"},
   {4, "Gandalf"},
   {256, "MPP"},
   {255, "Ascend-ARA"},
   {259, "X25"},
   {0, (char *)NULL}
};

static value_string diameter_framed_compression_vals[]={
   {0, "None"},
   {1, "Van-Jacobson-TCP-IP"},
   {2, "IPX-Header-Compression"},
   {0, (char *)NULL}
};

static value_string diameter_authentication_type_vals[]={
   {10, "File"},
   {22, "LDAP"},
   {21, "Slow"},
   {20, "Blackhole"},
   {2, "AFS-Krb"},
   {6, "KCHAP"},
   {4, "RADIUS"},
   {13, "ACE"},
   {9, "Local"},
   {7, "TACACS"},
   {0, "None"},
   {19, "Deny"},
   {23, "Unassigned"},
   {8, "Realm"},
   {1, "Passwd"},
   {5, "MNET"},
   {3, "MIT-Krb"},
   {17, "Oracle"},
   {1, "Unix-PW"},
   {16, "ODBC"},
   {11, "TACPLUS"},
   {15, "SKEY"},
   {12, "ARA-DES"},
   {14, "DEFENDER"},
   {18, "Allow"},
   {0, (char *)NULL}
};

static value_string diameter_acct_terminate_cause_vals[]={
   {1, "User-Request"},
   {2, "Lost-Carrier"},
   {3, "Lost-Service"},
   {4, "Idle-Timeout"},
   {5, "Session-Timeout"},
   {6, "Admin-Reset"},
   {7, "Admin-Reboot"},
   {8, "Port-Error"},
   {9, "NAS-Error"},
   {10, "NAS-Request"},
   {11, "NAS-Reboot"},
   {12, "Port-Unneeded"},
   {13, "Port-Preempted"},
   {14, "Port-Suspended"},
   {15, "Service-Unavailable"},
   {16, "Callback"},
   {17, "User-Error"},
   {18, "Host-Request"},
   {0, (char *)NULL}
};

static value_string diameter_protocol_vals[]={
   {65535, "Any"},
   {17, "UDP"},
   {1, "ICMP"},
   {0, "IP"},
   {6, "TCP"},
   {0, (char *)NULL}
};

static value_string diameter_destination_port_vals[]={
   {10000, "vic-rsvp"},
   {23, "ftp"},
   {0, "*"},
   {21, "telnet"},
   {0, (char *)NULL}
};

static value_string diameter_termination_action_vals[]={
   {0, "Default"},
   {1, "RADIUS-Request"},
   {0, (char *)NULL}
};

static value_string diameter_extension_id_vals[]={
   {1, "NASREQ"},
   {2, "Strong-Security"},
   {4, "Mobile-IP"},
   {5, "Accounting"},
   {7, "VOIP"},
   {8, "EAP"},
   {555, "Test"},
   {556, "AccountingV3"},
   {0, (char *)NULL}
};

static value_string diameter_merit_las_code_vals[]={
   {0, "LAS-Normal"},
   {1, "LAS-Reject"},
   {2, "LAS-Cancel"},
   {3, "LAS-Noconfirm"},
   {4, "LAS-Overtime"},
   {5, "LAS-Unknown"},
   {6, "LAS-Notoken"},
   {7, "LAS-Notlocal"},
   {8, "LAS-Suspend"},
   {9, "LAS-Failed"},
   {10, "LAS-Authorized"},
   {11, "LAS-NASreboot"},
   {12, "LAS-Remote"},
   {13, "LAS-Duplicate"},
   {14, "LAS-Collision"},
   {15, "LAS-Stop"},
   {0, (char *)NULL}
};

static value_string diameter_login_service_vals[]={
   {0, "Telnet"},
   {1, "Rlogin"},
   {2, "TCP-Clear"},
   {3, "PortMaster"},
   {4, "LAT"},
   {5, "X25-PAD"},
   {6, "X25-T3POS"},
   {0, (char *)NULL}
};

static value_string diameter_rsvp_service_type_vals[]={
   {1, "RSVP-Controlled-Load"},
   {2, "RSVP-Guaranteed"},
   {0, (char *)NULL}
};

static value_string diameter_reboot_type_vals[]={
   {1, "Reboot-Imminent"},
   {2, "Reboot-Complete"},
   {0, (char *)NULL}
};

static value_string diameter_acct_status_type_vals[]={
   {1, "Start"},
   {2, "Stop"},
   {3, "Alive"},
   {4, "Modem-Start"},
   {5, "Modem-Stop"},
   {6, "Cancel"},
   {7, "Accounting-On"},
   {8, "Accounting-Off"},
   {0, (char *)NULL}
};


#endif /* _PACKET_DIAMETER_DEFS_H */
