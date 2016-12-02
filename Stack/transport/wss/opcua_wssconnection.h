/* Copyright (c) 1996-2016, OPC Foundation. All rights reserved.

   The source code in this file is covered under a dual-license scenario:
     - RCL: for OPC Foundation members in good-standing
     - GPL V2: everybody else

   RCL license terms accompanied with this source code. See http://opcfoundation.org/License/RCL/1.00/

   GNU General Public License as published by the Free Software Foundation;
   version 2 of the License are accompanied with this source code. See http://opcfoundation.org/License/GPLv2

   This source code is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*/

/* HINT: This implementation will become a opaque handle! */

#ifndef _OpcUa_WssConnection_H_
#define _OpcUa_WssConnection_H_ 1

#include <opcua_connection.h>

OPCUA_BEGIN_EXTERN_C

/*============================================================================
 * OpcUa_WssConnection_Create
 *===========================================================================*/
OpcUa_StatusCode OpcUa_WssConnection_Create(
    OpcUa_ByteString*                a_pClientCertificate,
    OpcUa_ByteString*                a_pClientPrivateKey,
    OpcUa_Void*                      a_pPKIConfig, 
    OpcUa_Socket_CertificateCallback a_pfnCertificateValidation,
    OpcUa_Void*                      a_pCertificateValidationCallbackData,
    OpcUa_Connection**               a_ppConnection);

OPCUA_END_EXTERN_C

#endif /* _OpcUa_WssConnection_H_ */
