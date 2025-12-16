fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1309132550`;
    st `file.link` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1309132550`(from, to) {
  (reg from:*, reg to:*) -+> V { var from:*, var to:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg from1:*, reg from2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg to1:*, reg to2:V, reg length1:cls, reg r8:V, reg r9:V, reg c1:L, reg stop1:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg from3:*, reg from4:V, reg to3:*, reg to4:V, reg file_link:cls, reg r14:V |
    mkenv;
    st from = from;
    st to = to;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L11() else L1();
  L7():
    from1 = ld from;
    check L9() else D0();
  L8():
    r = dyn base(<sym from>);
    goto L0(r);
  D0():
    deopt 2 [from1];
  L1():
    goto L2();
  L2():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L9():
    from2 = force? from1;
    checkMissing(from2);
    length = ldf length in base;
    r2 = dyn length(from2);
    check L10() else D1();
  L11():
    stop = ldf stop;
    check L12() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  L3(r7):
    r9 = `!`(r7);
    c1 = `as.logical`(r9);
    if c1 then L19() else L4();
  L10():
    goto L0(r2);
  L12():
    r4 = dyn stop("no files to link from");
    check L13() else D3();
  L15():
    to1 = ld to;
    check L17() else D4();
  L16():
    r6 = dyn base1(<sym to>);
    goto L3(r6);
  D3():
    deopt 10 [r4];
  D4():
    deopt 15 [to1];
  L4():
    goto L5();
  L5():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L13():
    goto L2();
  L17():
    to2 = force? to1;
    checkMissing(to2);
    length1 = ldf length in base;
    r8 = dyn length1(to2);
    check L18() else D5();
  L19():
    stop1 = ldf stop;
    check L20() else D6();
  D5():
    deopt 18 [r8];
  D6():
    deopt 21 [];
  L6(r13):
    popenv;
    return r13;
  L18():
    goto L3(r8);
  L20():
    r10 = dyn stop1("no files to link to");
    check L21() else D7();
  L23():
    from3 = ld from;
    check L25() else D8();
  L24():
    r12 = dyn base2(<lang file.link(from, to)>);
    goto L6(r12);
  D7():
    deopt 23 [r10];
  D8():
    deopt 28 [from3];
  L21():
    goto L5();
  L25():
    from4 = force? from3;
    checkMissing(from4);
    to3 = ld to;
    check L26() else D9();
  D9():
    deopt 30 [to3];
  L26():
    to4 = force? to3;
    checkMissing(to4);
    file_link = ldf `file.link` in base;
    r14 = dyn file_link(from4, to4);
    check L27() else D10();
  D10():
    deopt 33 [r14];
  L27():
    goto L6(r14);
  }
}