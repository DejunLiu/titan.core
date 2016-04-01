/******************************************************************************
 * Copyright (c) 2000-2016 Ericsson Telecom AB
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *   Balasko, Jeno
 *   Delic, Adam
 *   Forstner, Matyas
 *   Koppany, Csaba
 *   Lovassy, Arpad
 *   Raduly, Csaba
 *   Szabo, Janos Zoltan – initial implementation
 *
 ******************************************************************************/
// This Test Port skeleton source file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version 1.3.pl0
// for Matyas Forstner (tmpmfr@saussure) on Thu Apr 10 16:06:07 2003


// You may modify this file. Complete the body of empty functions and
// add your member functions here.

#include "MyPort1.hh"

#ifndef OLD_NAMES
using namespace X682;

namespace X {
#endif

MyPort1::MyPort1(const char *par_port_name)
	: MyPort1_BASE(par_port_name)
{

}

MyPort1::~MyPort1()
{

}

void MyPort1::set_parameter(const char *parameter_name,
	const char *parameter_value)
{

}

void MyPort1::Event_Handler(const fd_set *read_fds,
	const fd_set *write_fds, const fd_set *error_fds,
	double time_since_last_call)
{

}

void MyPort1::user_map(const char *system_port)
{

}

void MyPort1::user_unmap(const char *system_port)
{

}

void MyPort1::user_start()
{

}

void MyPort1::user_stop()
{

}

void MyPort1::outgoing_send(const ErrorReturn& send_par)
{
  TTCN_Buffer buf;
  send_par.encode(ErrorReturn_descr_, buf,
                  TTCN_EncDec::CT_BER, BER_ENCODE_DER);
  OCTETSTRING os;
  buf.get_string(os);
  incoming_message(os);
}

#ifndef OLD_NAMES
}
#endif
