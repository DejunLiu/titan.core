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
 *   Lovassy, Arpad
 *   Szabados, Kristof
 *
 ******************************************************************************/
// This Test Port skeleton header file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version 1.6.pl3
// for Kristof Szabados (ekrisza@balisea) on Tue Nov  8 10:14:04 2005


// You may modify this file. Add your attributes and prototypes of your
// member functions here.

#ifndef base__PT_HH
#define base__PT_HH

#include "base_ttcn.hh"

namespace base__ttcn {

class base__PT : public base__PT_BASE {
public:
	base__PT(const char *par_port_name = NULL);
	~base__PT();

	void set_parameter(const char *parameter_name,
		const char *parameter_value);

	void Event_Handler(const fd_set *read_fds,
		const fd_set *write_fds, const fd_set *error_fds,
		double time_since_last_call);

protected:
	void user_map(const char *system_port);
	void user_unmap(const char *system_port);

	void user_start();
	void user_stop();

	void outgoing_send(const INTEGER& send_par);
};

}

#endif
