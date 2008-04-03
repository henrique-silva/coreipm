/*
-------------------------------------------------------------------------------
coreIPM/module.h

Author: Gokhan Sozmen
-------------------------------------------------------------------------------
Copyright (C) 2007-2008 Gokhan Sozmen
-------------------------------------------------------------------------------
coreIPM is free software; you can redistribute it and/or modify it under the 
terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later 
version.

coreIPM is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with 
coreIPM; if not, write to the Free Software Foundation, Inc., 51 Franklin
Street, Fifth Floor, Boston, MA 02110-1301, USA.
-------------------------------------------------------------------------------
See http://www.coreipm.com for documentation, latest information, licensing, 
support and contact details.
-------------------------------------------------------------------------------
*/
void module_init( void );
void module_cold_reset( unsigned char dev_id );
void module_warm_reset( unsigned char dev_id );
void module_graceful_reboot( unsigned char dev_id );
void module_issue_diag_int( unsigned char dev_id );
void module_quiesce( unsigned char dev_id );
void module_event_handler( GENERIC_EVENT_MSG *evt_msg );
unsigned char module_get_i2c_address( int address_type );
void module_term_process( unsigned char * );


