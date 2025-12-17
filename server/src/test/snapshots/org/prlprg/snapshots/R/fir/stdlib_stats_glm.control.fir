fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1918427804;
    st `glm.control` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1918427804(epsilon, maxit, trace) {
  (reg epsilon:*, reg maxit:*, reg trace:*) -+> V { var epsilon:*, reg epsilon_isMissing:L, reg epsilon_orDefault:*, var maxit:*, reg maxit_isMissing:L, reg maxit_orDefault:*, var trace:*, reg trace_isMissing:L, reg trace_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg epsilon1:*, reg epsilon2:V, reg is_numeric:cls, reg r2:V, reg r3:V, reg c:L, reg c1:V, reg epsilon3:*, reg epsilon4:V, reg r4:V, reg c3:L, reg c4:V, reg c6:L, reg stop:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg maxit1:*, reg maxit2:V, reg is_numeric1:cls, reg r9:V, reg r10:V, reg c7:L, reg c8:V, reg maxit3:*, reg maxit4:V, reg r11:V, reg c10:L, reg c11:V, reg c13:L, reg stop1:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg epsilon5:*, reg epsilon6:V, reg maxit5:*, reg maxit6:V, reg trace1:*, reg trace2:V, reg list:cls, reg r16:V |
    mkenv;
    epsilon_isMissing = missing.0(epsilon);
    if epsilon_isMissing then L0(1.0E-8) else L0(epsilon);
  L0(epsilon_orDefault):
    st epsilon = epsilon_orDefault;
    maxit_isMissing = missing.0(maxit);
    if maxit_isMissing then L1(25.0) else L1(maxit);
  L1(maxit_orDefault):
    st maxit = maxit_orDefault;
    trace_isMissing = missing.0(trace);
    if trace_isMissing then L2(FALSE) else L2(trace);
  L2(trace_orDefault):
    st trace = trace_orDefault;
    sym = ldf `is.numeric`;
    base = ldf `is.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L3(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L4(c) else L16();
  L12():
    epsilon1 = ld epsilon;
    check L14() else D0();
  L13():
    r = dyn base(<sym epsilon>);
    goto L3(r);
  D0():
    deopt 2 [epsilon1];
  L4(c1):
    c6 = `as.logical`(c1);
    if c6 then L19() else L5();
  L14():
    epsilon2 = force? epsilon1;
    checkMissing(epsilon2);
    is_numeric = ldf `is.numeric` in base;
    r2 = dyn is_numeric(epsilon2);
    check L15() else D1();
  L16():
    epsilon3 = ld epsilon;
    check L17() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [c, epsilon3];
  L5():
    goto L6();
  L6():
    sym1 = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L15():
    goto L3(r2);
  L17():
    epsilon4 = force? epsilon3;
    checkMissing(epsilon4);
    r4 = `<=`(epsilon4, 0.0);
    c3 = `as.logical`(r4);
    c4 = `||`(c, c3);
    goto L4(c4);
  L19():
    stop = ldf stop;
    check L20() else D3();
  D3():
    deopt 13 [];
  L7(r8):
    r10 = `!`(r8);
    c7 = `as.logical`(r10);
    if c7 then L8(c7) else L27();
  L20():
    r5 = dyn stop("value of 'epsilon' must be > 0");
    check L21() else D4();
  L23():
    maxit1 = ld maxit;
    check L25() else D5();
  L24():
    r7 = dyn base1(<sym maxit>);
    goto L7(r7);
  D4():
    deopt 15 [r5];
  D5():
    deopt 20 [maxit1];
  L8(c8):
    c13 = `as.logical`(c8);
    if c13 then L30() else L9();
  L21():
    goto L6();
  L25():
    maxit2 = force? maxit1;
    checkMissing(maxit2);
    is_numeric1 = ldf `is.numeric` in base;
    r9 = dyn is_numeric1(maxit2);
    check L26() else D6();
  L27():
    maxit3 = ld maxit;
    check L28() else D7();
  D6():
    deopt 23 [r9];
  D7():
    deopt 25 [c7, maxit3];
  L9():
    goto L10();
  L10():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L26():
    goto L7(r9);
  L28():
    maxit4 = force? maxit3;
    checkMissing(maxit4);
    r11 = `<=`(maxit4, 0.0);
    c10 = `as.logical`(r11);
    c11 = `||`(c7, c10);
    goto L8(c11);
  L30():
    stop1 = ldf stop;
    check L31() else D8();
  D8():
    deopt 31 [];
  L11(r15):
    popenv;
    return r15;
  L31():
    r12 = dyn stop1("maximum number of iterations must be > 0");
    check L32() else D9();
  L34():
    epsilon5 = ld epsilon;
    check L36() else D10();
  L35():
    r14 = dyn base2[epsilon, maxit, trace](<sym epsilon>, <sym maxit>, <sym trace>);
    goto L11(r14);
  D9():
    deopt 33 [r12];
  D10():
    deopt 38 [epsilon5];
  L32():
    goto L10();
  L36():
    epsilon6 = force? epsilon5;
    checkMissing(epsilon6);
    maxit5 = ld maxit;
    check L37() else D11();
  D11():
    deopt 41 [maxit5];
  L37():
    maxit6 = force? maxit5;
    checkMissing(maxit6);
    trace1 = ld trace;
    check L38() else D12();
  D12():
    deopt 44 [trace1];
  L38():
    trace2 = force? trace1;
    checkMissing(trace2);
    list = ldf list in base;
    r16 = dyn list(epsilon6, maxit6, trace2);
    check L39() else D13();
  D13():
    deopt 48 [r16];
  L39():
    goto L11(r16);
  }
}