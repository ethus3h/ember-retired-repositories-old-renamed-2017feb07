	.file	"asm-offsets.c"
# GNU C (Debian 4.6.3-8) version 4.6.3 (i486-linux-gnu)
#	compiled by GNU C version 4.6.3, GMP version 5.0.5, MPFR version 3.1.0-p10, MPC version 0.9
# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed:  -nostdinc
# -I /home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/include
# -I arch/x86/include/generated -I include
# -I /home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/include
# -I /home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/.
# -I . -imultilib . -imultiarch i386-linux-gnu -D __KERNEL__
# -D CONFIG_AS_CFI=1 -D CONFIG_AS_CFI_SIGNAL_FRAME=1
# -D CONFIG_AS_CFI_SECTIONS=1 -D CC_HAVE_ASM_GOTO -D KBUILD_STR(s)=#s
# -D KBUILD_BASENAME=KBUILD_STR(asm_offsets)
# -D KBUILD_MODNAME=KBUILD_STR(asm_offsets)
# -isystem /usr/lib/gcc/i486-linux-gnu/4.6/include
# -include /home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/include/linux/kconfig.h
# -MD arch/x86/kernel/.asm-offsets.s.d
# /home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c
# -m32 -msoft-float -mregparm=3 -mpreferred-stack-boundary=2 -march=i686
# -mtune=generic -maccumulate-outgoing-args -mno-sse -mno-mmx -mno-sse2
# -mno-3dnow -mno-avx -auxbase-strip arch/x86/kernel/asm-offsets.s -O2
# -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs
# -Werror=implicit-function-declaration -Wno-format-security
# -Wno-sign-compare -Wframe-larger-than=1024 -Wno-unused-but-set-variable
# -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-aliasing
# -fno-common -fno-delete-null-pointer-checks -freg-struct-return
# -ffreestanding -fstack-protector -fno-asynchronous-unwind-tables
# -fomit-frame-pointer -fno-strict-overflow -fconserve-stack -fverbose-asm
# options enabled:  -fauto-inc-dec -fbranch-count-reg -fcaller-saves
# -fcombine-stack-adjustments -fcompare-elim -fcprop-registers
# -fcrossjumping -fcse-follow-jumps -fdefer-pop -fdevirtualize
# -fdwarf2-cfi-asm -fearly-inlining -feliminate-unused-debug-types
# -fexpensive-optimizations -fforward-propagate -ffunction-cse -fgcse
# -fgcse-lm -fguess-branch-probability -fident -fif-conversion
# -fif-conversion2 -findirect-inlining -finline
# -finline-functions-called-once -finline-small-functions -fipa-cp
# -fipa-profile -fipa-pure-const -fipa-reference -fipa-sra
# -fira-share-save-slots -fira-share-spill-slots -fivopts
# -fkeep-static-consts -fleading-underscore -fmath-errno -fmerge-constants
# -fmerge-debug-strings -fmove-loop-invariants -fomit-frame-pointer
# -foptimize-register-move -foptimize-sibling-calls -fpartial-inlining
# -fpeephole -fpeephole2 -fprefetch-loop-arrays -freg-struct-return
# -fregmove -freorder-blocks -freorder-functions -frerun-cse-after-loop
# -fsched-critical-path-heuristic -fsched-dep-count-heuristic
# -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
# -fsched-rank-heuristic -fsched-spec -fsched-spec-insn-heuristic
# -fsched-stalled-insns-dep -fschedule-insns2 -fshow-column -fsigned-zeros
# -fsplit-ivs-in-unroller -fsplit-wide-types -fstack-protector
# -fstrict-volatile-bitfields -fthread-jumps -ftoplevel-reorder
# -ftrapping-math -ftree-bit-ccp -ftree-builtin-call-dce -ftree-ccp
# -ftree-ch -ftree-copy-prop -ftree-copyrename -ftree-cselim -ftree-dce
# -ftree-dominator-opts -ftree-dse -ftree-forwprop -ftree-fre
# -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
# -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop -ftree-pre
# -ftree-pta -ftree-reassoc -ftree-scev-cprop -ftree-sink
# -ftree-slp-vectorize -ftree-sra -ftree-switch-conversion -ftree-ter
# -ftree-vect-loop-version -ftree-vrp -funit-at-a-time -fvect-cost-model
# -fverbose-asm -fzero-initialized-in-bss -m32 -m96bit-long-double
# -maccumulate-outgoing-args -malign-stringops -mglibc -mieee-fp
# -mno-fancy-math-387 -mno-red-zone -mno-sse4 -mpush-args -msahf
# -mtls-direct-seg-refs

# Compiler executable checksum: af509c251916516c61dd6cef9ad7a3d2

	.text
	.p2align 4,,15
	.globl	foo
	.type	foo, @function
foo:
#APP
# 16 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->IA32_SIGCONTEXT_ax $44 offsetof(struct sigcontext, ax)	#
# 0 "" 2
# 17 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->IA32_SIGCONTEXT_bx $32 offsetof(struct sigcontext, bx)	#
# 0 "" 2
# 18 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->IA32_SIGCONTEXT_cx $40 offsetof(struct sigcontext, cx)	#
# 0 "" 2
# 19 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->IA32_SIGCONTEXT_dx $36 offsetof(struct sigcontext, dx)	#
# 0 "" 2
# 20 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->IA32_SIGCONTEXT_si $20 offsetof(struct sigcontext, si)	#
# 0 "" 2
# 21 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->IA32_SIGCONTEXT_di $16 offsetof(struct sigcontext, di)	#
# 0 "" 2
# 22 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->IA32_SIGCONTEXT_bp $24 offsetof(struct sigcontext, bp)	#
# 0 "" 2
# 23 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->IA32_SIGCONTEXT_sp $28 offsetof(struct sigcontext, sp)	#
# 0 "" 2
# 24 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->IA32_SIGCONTEXT_ip $56 offsetof(struct sigcontext, ip)	#
# 0 "" 2
# 25 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->
# 0 "" 2
# 27 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->CPUINFO_x86 $0 offsetof(struct cpuinfo_x86, x86)	#
# 0 "" 2
# 28 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->CPUINFO_x86_vendor $1 offsetof(struct cpuinfo_x86, x86_vendor)	#
# 0 "" 2
# 29 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->CPUINFO_x86_model $2 offsetof(struct cpuinfo_x86, x86_model)	#
# 0 "" 2
# 30 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->CPUINFO_x86_mask $3 offsetof(struct cpuinfo_x86, x86_mask)	#
# 0 "" 2
# 31 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->CPUINFO_hard_math $6 offsetof(struct cpuinfo_x86, hard_math)	#
# 0 "" 2
# 32 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->CPUINFO_cpuid_level $20 offsetof(struct cpuinfo_x86, cpuid_level)	#
# 0 "" 2
# 33 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->CPUINFO_x86_capability $24 offsetof(struct cpuinfo_x86, x86_capability)	#
# 0 "" 2
# 34 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->CPUINFO_x86_vendor_id $64 offsetof(struct cpuinfo_x86, x86_vendor_id)	#
# 0 "" 2
# 35 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->
# 0 "" 2
# 37 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->TI_sysenter_return $60 offsetof(struct thread_info, sysenter_return)	#
# 0 "" 2
# 38 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->TI_cpu $16 offsetof(struct thread_info, cpu)	#
# 0 "" 2
# 39 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->
# 0 "" 2
# 41 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->PT_EBX $0 offsetof(struct pt_regs, bx)	#
# 0 "" 2
# 42 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->PT_ECX $4 offsetof(struct pt_regs, cx)	#
# 0 "" 2
# 43 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->PT_EDX $8 offsetof(struct pt_regs, dx)	#
# 0 "" 2
# 44 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->PT_ESI $12 offsetof(struct pt_regs, si)	#
# 0 "" 2
# 45 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->PT_EDI $16 offsetof(struct pt_regs, di)	#
# 0 "" 2
# 46 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->PT_EBP $20 offsetof(struct pt_regs, bp)	#
# 0 "" 2
# 47 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->PT_EAX $24 offsetof(struct pt_regs, ax)	#
# 0 "" 2
# 48 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->PT_DS $28 offsetof(struct pt_regs, ds)	#
# 0 "" 2
# 49 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->PT_ES $32 offsetof(struct pt_regs, es)	#
# 0 "" 2
# 50 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->PT_FS $36 offsetof(struct pt_regs, fs)	#
# 0 "" 2
# 51 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->PT_GS $40 offsetof(struct pt_regs, gs)	#
# 0 "" 2
# 52 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->PT_ORIG_EAX $44 offsetof(struct pt_regs, orig_ax)	#
# 0 "" 2
# 53 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->PT_EIP $48 offsetof(struct pt_regs, ip)	#
# 0 "" 2
# 54 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->PT_CS $52 offsetof(struct pt_regs, cs)	#
# 0 "" 2
# 55 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->PT_EFLAGS $56 offsetof(struct pt_regs, flags)	#
# 0 "" 2
# 56 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->PT_OLDESP $60 offsetof(struct pt_regs, sp)	#
# 0 "" 2
# 57 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->PT_OLDSS $64 offsetof(struct pt_regs, ss)	#
# 0 "" 2
# 58 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->
# 0 "" 2
# 60 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->IA32_RT_SIGFRAME_sigcontext $164 offsetof(struct rt_sigframe, uc.uc_mcontext)	#
# 0 "" 2
# 61 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->
# 0 "" 2
# 64 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->TSS_sysenter_sp0 $-8572 offsetof(struct tss_struct, x86_tss.sp0) - sizeof(struct tss_struct)	#
# 0 "" 2
# 68 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->
# 0 "" 2
# 69 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->LGUEST_DATA_irq_enabled $0 offsetof(struct lguest_data, irq_enabled)	#
# 0 "" 2
# 70 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->LGUEST_DATA_irq_pending $20 offsetof(struct lguest_data, irq_pending)	#
# 0 "" 2
# 72 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->
# 0 "" 2
# 73 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->LGUEST_PAGES_host_gdt_desc $4106 offsetof(struct lguest_pages, state.host_gdt_desc)	#
# 0 "" 2
# 74 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->LGUEST_PAGES_host_idt_desc $4100 offsetof(struct lguest_pages, state.host_idt_desc)	#
# 0 "" 2
# 75 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->LGUEST_PAGES_host_cr3 $4096 offsetof(struct lguest_pages, state.host_cr3)	#
# 0 "" 2
# 76 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->LGUEST_PAGES_host_sp $4112 offsetof(struct lguest_pages, state.host_sp)	#
# 0 "" 2
# 77 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->LGUEST_PAGES_guest_gdt_desc $4122 offsetof(struct lguest_pages, state.guest_gdt_desc)	#
# 0 "" 2
# 78 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->LGUEST_PAGES_guest_idt_desc $4116 offsetof(struct lguest_pages, state.guest_idt_desc)	#
# 0 "" 2
# 79 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->LGUEST_PAGES_guest_gdt $6280 offsetof(struct lguest_pages, state.guest_gdt)	#
# 0 "" 2
# 80 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->LGUEST_PAGES_regs_trapnum $4068 offsetof(struct lguest_pages, regs.trapnum)	#
# 0 "" 2
# 81 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->LGUEST_PAGES_regs_errcode $4072 offsetof(struct lguest_pages, regs.errcode)	#
# 0 "" 2
# 82 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->LGUEST_PAGES_regs $4024 offsetof(struct lguest_pages, regs)	#
# 0 "" 2
# 84 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->
# 0 "" 2
# 85 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->__NR_syscall_max $348 sizeof(syscalls) - 1	#
# 0 "" 2
# 86 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets_32.c" 1
	
->NR_syscalls $349 sizeof(syscalls)	#
# 0 "" 2
#NO_APP
	ret
	.size	foo, .-foo
	.p2align 4,,15
	.globl	common
	.type	common, @function
common:
#APP
# 31 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->
# 0 "" 2
# 32 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->TI_flags $8 offsetof(struct thread_info, flags)	#
# 0 "" 2
# 33 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->TI_status $12 offsetof(struct thread_info, status)	#
# 0 "" 2
# 34 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->TI_addr_limit $24 offsetof(struct thread_info, addr_limit)	#
# 0 "" 2
# 35 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->TI_preempt_count $20 offsetof(struct thread_info, preempt_count)	#
# 0 "" 2
# 37 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->
# 0 "" 2
# 38 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->crypto_tfm_ctx_offset $48 offsetof(struct crypto_tfm, __crt_ctx)	#
# 0 "" 2
# 40 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->
# 0 "" 2
# 41 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->pbe_address $0 offsetof(struct pbe, address)	#
# 0 "" 2
# 42 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->pbe_orig_address $4 offsetof(struct pbe, orig_address)	#
# 0 "" 2
# 43 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->pbe_next $8 offsetof(struct pbe, next)	#
# 0 "" 2
# 46 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->
# 0 "" 2
# 47 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->PARAVIRT_enabled $8 offsetof(struct pv_info, paravirt_enabled)	#
# 0 "" 2
# 48 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->PARAVIRT_PATCH_pv_cpu_ops $16 offsetof(struct paravirt_patch_template, pv_cpu_ops)	#
# 0 "" 2
# 49 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->PARAVIRT_PATCH_pv_irq_ops $176 offsetof(struct paravirt_patch_template, pv_irq_ops)	#
# 0 "" 2
# 50 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->PV_IRQ_irq_disable $8 offsetof(struct pv_irq_ops, irq_disable)	#
# 0 "" 2
# 51 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->PV_IRQ_irq_enable $12 offsetof(struct pv_irq_ops, irq_enable)	#
# 0 "" 2
# 52 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->PV_CPU_iret $144 offsetof(struct pv_cpu_ops, iret)	#
# 0 "" 2
# 53 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->PV_CPU_irq_enable_sysexit $132 offsetof(struct pv_cpu_ops, irq_enable_sysexit)	#
# 0 "" 2
# 54 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->PV_CPU_read_cr0 $12 offsetof(struct pv_cpu_ops, read_cr0)	#
# 0 "" 2
# 55 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->PV_MMU_read_cr2 $0 offsetof(struct pv_mmu_ops, read_cr2)	#
# 0 "" 2
# 64 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->
# 0 "" 2
# 65 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->BP_scratch $484 offsetof(struct boot_params, scratch)	#
# 0 "" 2
# 66 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->BP_loadflags $529 offsetof(struct boot_params, hdr.loadflags)	#
# 0 "" 2
# 67 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->BP_hardware_subarch $572 offsetof(struct boot_params, hdr.hardware_subarch)	#
# 0 "" 2
# 68 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->BP_version $518 offsetof(struct boot_params, hdr.version)	#
# 0 "" 2
# 69 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->BP_kernel_alignment $560 offsetof(struct boot_params, hdr.kernel_alignment)	#
# 0 "" 2
# 70 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->BP_pref_address $600 offsetof(struct boot_params, hdr.pref_address)	#
# 0 "" 2
# 71 "/home/damentz/src/zen/main/linux-liquorix/debian/build/source_i386_none/arch/x86/kernel/asm-offsets.c" 1
	
->BP_code32_start $532 offsetof(struct boot_params, hdr.code32_start)	#
# 0 "" 2
#NO_APP
	ret
	.size	common, .-common
	.ident	"GCC: (Debian 4.6.3-8) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
