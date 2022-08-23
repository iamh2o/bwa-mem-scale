/*************************************************************************************
                           The MIT License

   BWA-MEM-SCALE (Memory-Scalable Sequence alignment using Burrows-Wheeler Transform),
   Copyright (C) 2022 Electronics and Telecommunications Research Institute (ETRI), Changdae Kim.

   Permission is hereby granted, free of charge, to any person obtaining
   a copy of this software and associated documentation files (the
   "Software"), to deal in the Software without restriction, including
   without limitation the rights to use, copy, modify, merge, publish,
   distribute, sublicense, and/or sell copies of the Software, and to
   permit persons to whom the Software is furnished to do so, subject to
   the following conditions:

   The above copyright notice and this permission notice shall be
   included in all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
   NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
   BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
   ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
   CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
   SOFTWARE.

   Contacts: Changdae Kim <cdkim@etri.re.kr>

** This software builds upon BWA-MEM2, and includes several performance optimization techniques.
   For BWA-MEM2, refer to the follows.

   BWA-MEM2 (Sequence alignment using Burrows-Wheeler Transform)
   Copyright ⓒ 2019 Intel Corporation, Heng Li
   The MIT License
   Website: https://github.com/bwa-mem2/bwa-mem2

*****************************************************************************************/

#ifndef _PROFILE_HPP
#define _PROFILE_HPP

#define NUM_PPROF_ENTRY 6

int display_stats(int );
extern uint64_t proc_freq, tprof[LIM_R][LIM_C];
#ifdef PERFECT_MATCH
extern uint64_t pprof[LIM_C][NUM_PPROF_ENTRY];
extern uint64_t pprof2[LIM_C][2];
#endif
#endif
