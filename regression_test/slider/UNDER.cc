/******************************************************************************
 * Copyright (c) 2000-2016 Ericsson Telecom AB
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *   Balasko, Jeno
 *   Lovassy, Arpad
 *   Raduly, Csaba
 *
 ******************************************************************************/
// This Test Port skeleton source file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version 1.8.pre3 build 3
// for  (ecsardu@tcclab2) on Fri May 21 19:22:39 2010


// You may modify this file. Complete the body of empty functions and
// add your member functions here.

#include "UNDER.hh"
#include "dual2.hh"

#ifndef OLD_NAMES
namespace dual2 {
#endif

UNDER_PROVIDER::UNDER_PROVIDER(const char *par_port_name)
	: PORT(par_port_name)
{

}

UNDER_PROVIDER::~UNDER_PROVIDER()
{

}

void UNDER_PROVIDER::set_parameter(const char * /*parameter_name*/,
	const char * /*parameter_value*/)
{

}

/*void UNDER_PROVIDER::Handle_Fd_Event(int fd, boolean is_readable,
	boolean is_writable, boolean is_error) {}*/

void UNDER_PROVIDER::Handle_Fd_Event_Error(int /*fd*/)
{

}

void UNDER_PROVIDER::Handle_Fd_Event_Writable(int /*fd*/)
{

}

void UNDER_PROVIDER::Handle_Fd_Event_Readable(int /*fd*/)
{

}

/*void UNDER_PROVIDER::Handle_Timeout(double time_since_last_call) {}*/

void UNDER_PROVIDER::user_map(const char * /*system_port*/)
{

}

void UNDER_PROVIDER::user_unmap(const char * /*system_port*/)
{

}

void UNDER_PROVIDER::user_start()
{

}

void UNDER_PROVIDER::user_stop()
{

}

void UNDER_PROVIDER::outgoing_send(const OCTETSTRING& send_par)
{
  incoming_message(send_par);
}

#ifndef OLD_NAMES
} /* end of namespace */
#endif
