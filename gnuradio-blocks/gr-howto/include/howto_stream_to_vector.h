/* -*- c++ -*- */
/*
 * Copyright 2004,2006 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_HOWTO_STREAM_TO_VECTOR_H
#define INCLUDED_HOWTO_STREAM_TO_VECTOR_H

#include <howto_api.h>
#include <gr_sync_decimator.h>

class howto_stream_to_vector;
typedef boost::shared_ptr<howto_stream_to_vector> howto_stream_to_vector_sptr;

HOWTO_API howto_stream_to_vector_sptr
howto_make_stream_to_vector (size_t item_size, size_t nitems_per_block);


/*!
 * \brief convert a stream of items into a stream of blocks containing nitems_per_block
 * \ingroup slicedice_blk
 */
class HOWTO_API howto_stream_to_vector : public gr_sync_decimator
{
  friend HOWTO_API howto_stream_to_vector_sptr
    howto_make_stream_to_vector (size_t item_size, size_t nitems_per_block);

 protected:
  howto_stream_to_vector (size_t item_size, size_t nitems_per_block);

 public:
  int work (int noutput_items,
	    gr_vector_const_void_star &input_items,
	    gr_vector_void_star &output_items);
};


#endif /* INCLUDED_HOWTO_STREAM_TO_VECTOR_H */
