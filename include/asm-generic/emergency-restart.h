#ifndef _ASM_GENERIC_EMERGENCY_RESTART_H
#define _ASM_GENERIC_EMERGENCY_RESTART_H

static inline __noreturn void machine_emergency_restart(void)
{
	machine_restart(NULL);
}

#endif /* _ASM_GENERIC_EMERGENCY_RESTART_H */
