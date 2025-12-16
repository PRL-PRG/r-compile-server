fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2017258659;
    st socketSelect = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2017258659(socklist, write, timeout) {
  (reg socklist:*, reg write:*, reg timeout:*) -+> V { var socklist:*, var write:*, reg write_isMissing:L, reg write_orDefault:*, var timeout:*, reg timeout_isMissing:L, reg timeout_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg timeout1:*, reg timeout2:V, reg c:V, reg c1:L, reg timeout3:*, reg timeout4:V, reg r3:V, reg c2:L, reg stop:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg write1:*, reg write2:V, reg length:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg r12:V, reg socklist1:*, reg socklist2:V, reg length1:cls, reg r13:V, reg r14:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg write3:*, reg write4:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg socklist3:*, reg socklist4:V, reg length2:cls, reg r19:V, reg rep_len:cls, reg r20:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg socklist5:*, reg socklist6:V, reg write5:*, reg write6:V, reg timeout5:*, reg timeout6:V, reg sockSelect:cls, reg r24:V |
    mkenv;
    st socklist = socklist;
    write_isMissing = missing.0(write);
    if write_isMissing then L0(FALSE) else L0(write);
  L0(write_orDefault):
    st write = write_orDefault;
    timeout_isMissing = missing.0(timeout);
    if timeout_isMissing then L1(NULL) else L1(timeout);
  L1(timeout_orDefault):
    st timeout = timeout_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L2(r1):
    c1 = `as.logical`(r1);
    if c1 then L16() else L3();
  L13():
    timeout1 = ld timeout;
    check L15() else D0();
  L14():
    r = dyn base(<sym timeout>);
    goto L2(r);
  D0():
    deopt 1 [timeout1];
  L3():
    timeout3 = ld timeout;
    check L18() else D1();
  L4():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L15():
    timeout2 = force? timeout1;
    checkMissing(timeout2);
    c = `==`(timeout2, NULL);
    goto L2(c);
  L16():
    st timeout = -1.0;
    goto L4();
  D1():
    deopt 7 [timeout3];
  L6(r6):
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L18():
    timeout4 = force? timeout3;
    checkMissing(timeout4);
    r3 = `<`(timeout4, 0.0);
    c2 = `as.logical`(r3);
    if c2 then L19() else L5();
  L23():
    write1 = ld write;
    check L25() else D4();
  L24():
    r5 = dyn base1(<sym write>);
    goto L6(r5);
  D4():
    deopt 19 [write1];
  L5():
    goto L4();
  L7(r11, r12):
    r14 = `<`(r11, r12);
    c3 = `as.logical`(r14);
    if c3 then L31() else L8();
  L19():
    stop = ldf stop;
    check L20() else D2();
  L25():
    write2 = force? write1;
    checkMissing(write2);
    length = ldf length in base;
    r7 = dyn length(write2);
    check L26() else D5();
  L27():
    socklist1 = ld socklist;
    check L29() else D6();
  L28():
    r10 = dyn base2(<sym socklist>);
    goto L7(r6, r10);
  D2():
    deopt 12 [];
  D5():
    deopt 22 [r7];
  D6():
    deopt 24 [r6, socklist1];
  L8():
    goto L11();
  L11():
    sym5 = ldf `.Internal`;
    base5 = ldf `.Internal` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L41() else L42();
  L20():
    r4 = dyn stop("'timeout' must be NULL or a non-negative number");
    check L21() else D3();
  L26():
    goto L6(r7);
  L29():
    socklist2 = force? socklist1;
    checkMissing(socklist2);
    length1 = ldf length in base;
    r13 = dyn length1(socklist2);
    check L30() else D7();
  L31():
    sym3 = ldf rep_len;
    base3 = ldf rep_len in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  D3():
    deopt 14 [r4];
  D7():
    deopt 27 [r6, r13];
  L9(r16):
    st write = r16;
    goto L11();
  L12(r23):
    popenv;
    return r23;
  L21():
    goto L4();
  L30():
    goto L7(r6, r13);
  L32():
    write3 = ld write;
    check L34() else D8();
  L33():
    r15 = dyn base3(<sym write>, <lang length(socklist)>);
    goto L9(r15);
  L41():
    socklist5 = ld socklist;
    check L43() else D12();
  L42():
    r22 = dyn base5(<lang sockSelect(socklist, write, timeout)>);
    goto L12(r22);
  D8():
    deopt 31 [write3];
  D12():
    deopt 46 [socklist5];
  L34():
    write4 = force? write3;
    checkMissing(write4);
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L35() else L36();
  L43():
    socklist6 = force? socklist5;
    checkMissing(socklist6);
    write5 = ld write;
    check L44() else D13();
  D13():
    deopt 48 [write5];
  L10(r18):
    rep_len = ldf rep_len in base;
    r20 = dyn rep_len(write4, r18);
    check L39() else D11();
  L35():
    socklist3 = ld socklist;
    check L37() else D9();
  L36():
    r17 = dyn base4(<sym socklist>);
    goto L10(r17);
  L44():
    write6 = force? write5;
    checkMissing(write6);
    timeout5 = ld timeout;
    check L45() else D14();
  D9():
    deopt 35 [socklist3];
  D11():
    deopt 40 [r20];
  D14():
    deopt 50 [timeout5];
  L37():
    socklist4 = force? socklist3;
    checkMissing(socklist4);
    length2 = ldf length in base;
    r19 = dyn length2(socklist4);
    check L38() else D10();
  L39():
    goto L9(r20);
  L45():
    timeout6 = force? timeout5;
    checkMissing(timeout6);
    sockSelect = ldf sockSelect in base;
    r24 = dyn sockSelect(socklist6, write6, timeout6);
    check L46() else D15();
  D10():
    deopt 38 [r19];
  D15():
    deopt 53 [r24];
  L38():
    goto L10(r19);
  L46():
    goto L12(r24);
  }
}