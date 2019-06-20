// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2018 Sultan Alsawaf <sultan@kerneltoast.com>.
 */
#ifndef _CPU_INPUT_BOOST_H_
#define _CPU_INPUT_BOOST_H_

#ifdef CONFIG_CPU_INPUT_BOOST
void lmk_boost_kick(void);
#else
static inline void lmk_boost_kick(void)
{
}
#endif

#endif /* _CPU_INPUT_BOOST_H_ */
