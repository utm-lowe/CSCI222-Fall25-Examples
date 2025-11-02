	.file	"boxTest.cpp"
	.text
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.text._ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEED2Ev,"axG",@progbits,_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEED5Ev,comdat
	.align 2
	.weak	_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEED2Ev
	.type	_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEED2Ev, @function
_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEED2Ev:
.LFB1527:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1527:
	.size	_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEED2Ev, .-_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEED2Ev
	.weak	_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEED1Ev
	.set	_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEED1Ev,_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEED2Ev
	.section	.rodata
.LC0:
	.string	"hello, world"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1525:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1525
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$104, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movl	$1, -100(%rbp)
	leaq	-100(%rbp), %rdx
	leaq	-104(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN3BoxIiEC1ERKi
	leaq	-100(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcEC1Ev@PLT
	leaq	-100(%rbp), %rdx
	leaq	-64(%rbp), %rax
	leaq	.LC0(%rip), %rsi
	movq	%rax, %rdi
.LEHB0:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE0:
	leaq	-64(%rbp), %rdx
	leaq	-96(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB1:
	call	_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC1ERKS5_
.LEHE1:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	leaq	-100(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev@PLT
	leaq	-104(%rbp), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rdi
.LEHB2:
	call	_ZlsIiERSoS0_RK3BoxIT_E
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	%rax, %rdx
	leaq	-96(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RK3BoxIT_E
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
.LEHE2:
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEED1Ev
	movl	$0, %eax
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L7
	jmp	.L11
.L9:
	endbr64
	movq	%rax, %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L5
.L8:
	endbr64
	movq	%rax, %rbx
.L5:
	leaq	-100(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev@PLT
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB3:
	call	_Unwind_Resume@PLT
.L10:
	endbr64
	movq	%rax, %rbx
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
	call	_Unwind_Resume@PLT
.LEHE3:
.L11:
	call	__stack_chk_fail@PLT
.L7:
	addq	$104, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1525:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA1525:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1525-.LLSDACSB1525
.LLSDACSB1525:
	.uleb128 .LEHB0-.LFB1525
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L8-.LFB1525
	.uleb128 0
	.uleb128 .LEHB1-.LFB1525
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L9-.LFB1525
	.uleb128 0
	.uleb128 .LEHB2-.LFB1525
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L10-.LFB1525
	.uleb128 0
	.uleb128 .LEHB3-.LFB1525
	.uleb128 .LEHE3-.LEHB3
	.uleb128 0
	.uleb128 0
.LLSDACSE1525:
	.text
	.size	main, .-main
	.section	.text._ZN3BoxIiEC2ERKi,"axG",@progbits,_ZN3BoxIiEC5ERKi,comdat
	.align 2
	.weak	_ZN3BoxIiEC2ERKi
	.type	_ZN3BoxIiEC2ERKi, @function
_ZN3BoxIiEC2ERKi:
.LFB1766:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1766:
	.size	_ZN3BoxIiEC2ERKi, .-_ZN3BoxIiEC2ERKi
	.weak	_ZN3BoxIiEC1ERKi
	.set	_ZN3BoxIiEC1ERKi,_ZN3BoxIiEC2ERKi
	.section	.text._ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2ERKS5_,"axG",@progbits,_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC5ERKS5_,comdat
	.align 2
	.weak	_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2ERKS5_
	.type	_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2ERKS5_, @function
_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2ERKS5_:
.LFB1772:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1772
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev@PLT
	movq	-24(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB4:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_@PLT
.LEHE4:
	jmp	.L16
.L15:
	endbr64
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB5:
	call	_Unwind_Resume@PLT
.LEHE5:
.L16:
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1772:
	.section	.gcc_except_table
.LLSDA1772:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1772-.LLSDACSB1772
.LLSDACSB1772:
	.uleb128 .LEHB4-.LFB1772
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L15-.LFB1772
	.uleb128 0
	.uleb128 .LEHB5-.LFB1772
	.uleb128 .LEHE5-.LEHB5
	.uleb128 0
	.uleb128 0
.LLSDACSE1772:
	.section	.text._ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2ERKS5_,"axG",@progbits,_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC5ERKS5_,comdat
	.size	_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2ERKS5_, .-_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2ERKS5_
	.weak	_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC1ERKS5_
	.set	_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC1ERKS5_,_ZN3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEC2ERKS5_
	.section	.text._ZlsIiERSoS0_RK3BoxIT_E,"axG",@progbits,_ZlsIiERSoS0_RK3BoxIT_E,comdat
	.weak	_ZlsIiERSoS0_RK3BoxIT_E
	.type	_ZlsIiERSoS0_RK3BoxIT_E, @function
_ZlsIiERSoS0_RK3BoxIT_E:
.LFB1774:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK3BoxIiE3getEv
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1774:
	.size	_ZlsIiERSoS0_RK3BoxIT_E, .-_ZlsIiERSoS0_RK3BoxIT_E
	.section	.text._ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RK3BoxIT_E,"axG",@progbits,_ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RK3BoxIT_E,comdat
	.weak	_ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RK3BoxIT_E
	.type	_ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RK3BoxIT_E, @function
_ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RK3BoxIT_E:
.LFB1777:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1777
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$72, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -72(%rbp)
	movq	%rsi, -80(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	-64(%rbp), %rax
	movq	-80(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB6:
	call	_ZNK3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE3getEv
.LEHE6:
	leaq	-64(%rbp), %rdx
	movq	-72(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB7:
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE@PLT
.LEHE7:
	movq	%rax, %rbx
	nop
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	movq	%rbx, %rax
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L22
	jmp	.L24
.L23:
	endbr64
	movq	%rax, %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB8:
	call	_Unwind_Resume@PLT
.LEHE8:
.L24:
	call	__stack_chk_fail@PLT
.L22:
	addq	$72, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1777:
	.section	.gcc_except_table
.LLSDA1777:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1777-.LLSDACSB1777
.LLSDACSB1777:
	.uleb128 .LEHB6-.LFB1777
	.uleb128 .LEHE6-.LEHB6
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB7-.LFB1777
	.uleb128 .LEHE7-.LEHB7
	.uleb128 .L23-.LFB1777
	.uleb128 0
	.uleb128 .LEHB8-.LFB1777
	.uleb128 .LEHE8-.LEHB8
	.uleb128 0
	.uleb128 0
.LLSDACSE1777:
	.section	.text._ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RK3BoxIT_E,"axG",@progbits,_ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RK3BoxIT_E,comdat
	.size	_ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RK3BoxIT_E, .-_ZlsINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEERSoS6_RK3BoxIT_E
	.section	.text._ZNK3BoxIiE3getEv,"axG",@progbits,_ZNK3BoxIiE3getEv,comdat
	.align 2
	.weak	_ZNK3BoxIiE3getEv
	.type	_ZNK3BoxIiE3getEv, @function
_ZNK3BoxIiE3getEv:
.LFB1892:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1892:
	.size	_ZNK3BoxIiE3getEv, .-_ZNK3BoxIiE3getEv
	.section	.text._ZNK3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE3getEv,"axG",@progbits,_ZNK3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE3getEv,comdat
	.align 2
	.weak	_ZNK3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE3getEv
	.type	_ZNK3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE3getEv, @function
_ZNK3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE3getEv:
.LFB1895:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_@PLT
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1895:
	.size	_ZNK3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE3getEv, .-_ZNK3BoxINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE3getEv
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2040:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L31
	cmpl	$65535, -8(%rbp)
	jne	.L31
	leaq	_ZStL8__ioinit(%rip), %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
.L31:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2040:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB2041:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2041:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.2) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
