fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1309132550`;
    st `file.symlink` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1309132550`(from, to) {
  (reg from:*, reg to:*) -+> V { var from:*, var to:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg from1:*, reg from2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg to1:*, reg to2:V, reg length1:cls, reg r8:V, reg r9:V, reg c1:L, reg stop1:cls, reg r10:V, reg nt:*, reg nt1:V, reg r12:V, reg c2:L, reg c4:V, reg file_exists:cls, reg to3:*, reg to4:V, reg p:p(V +), reg r14:V, reg c5:L, reg c6:V, reg c8:L, reg c10:V, reg file_info:cls, reg to5:*, reg to6:V, reg p1:p(V +), reg r16:V, reg c11:L, reg c13:L, reg r18:V, reg dr:V, reg dc:L, reg dx:V, reg c15:L, reg dx1:V, reg r19:V, reg c16:L, reg c17:V, reg c19:L, reg file_path:cls, reg to7:*, reg to8:V, reg p2:p(V +), reg basename:cls, reg from3:*, reg from4:V, reg p3:p(V +), reg r22:V, reg p4:p(V +), reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg from5:*, reg from6:V, reg to9:*, reg to10:V, reg file_symlink:cls, reg r28:V |
    mkenv;
    st from = from;
    st to = to;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L15() else L1();
  L11():
    from1 = ld from;
    check L13() else D0();
  L12():
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
    if guard1 then L19() else L20();
  L13():
    from2 = force? from1;
    checkMissing(from2);
    length = ldf length in base;
    r2 = dyn length(from2);
    check L14() else D1();
  L15():
    stop = ldf stop;
    check L16() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  L3(r7):
    st nt = r7;
    r9 = `!`(r7);
    c1 = `as.logical`(r9);
    if c1 then L23() else L4();
  L14():
    goto L0(r2);
  L16():
    r4 = dyn stop("no files to link from");
    check L17() else D3();
  L19():
    to1 = ld to;
    check L21() else D4();
  L20():
    r6 = dyn base1(<sym to>);
    goto L3(r6);
  D3():
    deopt 10 [r4];
  D4():
    deopt 15 [to1];
  L4():
    goto L5();
  L5():
    nt = ld nt;
    check L27() else D8();
  L17():
    goto L2();
  L21():
    to2 = force? to1;
    checkMissing(to2);
    length1 = ldf length in base;
    r8 = dyn length1(to2);
    check L22() else D5();
  L23():
    stop1 = ldf stop;
    check L24() else D6();
  D5():
    deopt 18 [r8];
  D6():
    deopt 22 [];
  D8():
    deopt 27 [nt];
  L22():
    goto L3(r8);
  L24():
    r10 = dyn stop1("no files/directory to link to");
    check L25() else D7();
  L27():
    nt1 = force? nt;
    checkMissing(nt1);
    r12 = `==`(nt1, 1.0);
    c2 = `as.logical`(r12);
    if c2 then L28() else L6(c2);
  D7():
    deopt 24 [r10];
  L6(c4):
    c8 = `as.logical`(c4);
    if c8 then L32() else L7(c8);
  L25():
    goto L5();
  L28():
    file_exists = ldf `file.exists`;
    check L29() else D9();
  D9():
    deopt 32 [c2];
  L7(c10):
    c19 = `as.logical`(c10);
    if c19 then L40() else L8();
  L29():
    p = prom<V +>{
      to3 = ld to;
      to4 = force? to3;
      checkMissing(to4);
      return to4;
    };
    r14 = dyn file_exists(p);
    check L30() else D10();
  L32():
    file_info = ldf `file.info`;
    check L33() else D11();
  D10():
    deopt 34 [c2, r14];
  D11():
    deopt 37 [c8];
  L8():
    goto L9();
  L9():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L44() else L45();
  L30():
    c5 = `as.logical`(r14);
    c6 = `&&`(c2, c5);
    goto L6(c6);
  L33():
    p1 = prom<V +>{
      to5 = ld to;
      to6 = force? to5;
      checkMissing(to6);
      return to6;
    };
    r16 = dyn file_info[, extra_cols](p1, FALSE);
    check L34() else D12();
  L40():
    file_path = ldf `file.path`;
    check L41() else D13();
  D12():
    deopt 41 [c8, r16];
  D13():
    deopt 45 [];
  L10(r27):
    popenv;
    return r27;
  L34():
    c11 = `is.object`(r16);
    if c11 then L36() else L37(c8, r16);
  L41():
    p2 = prom<V +>{
      to7 = ld to;
      to8 = force? to7;
      checkMissing(to8);
      return to8;
    };
    p4 = prom<V +>{
      basename = ldf basename;
      p3 = prom<V +>{
        from3 = ld from;
        from4 = force? from3;
        checkMissing(from4);
        return from4;
      };
      r22 = dyn basename(p3);
      return r22;
    };
    r24 = dyn file_path(p2, p4);
    check L42() else D14();
  L44():
    from5 = ld from;
    check L46() else D15();
  L45():
    r26 = dyn base2(<lang file.symlink(from, to)>);
    goto L10(r26);
  D14():
    deopt 48 [r24];
  D15():
    deopt 54 [from5];
  L35(c15, dx1):
    c16 = `as.logical`(dx1);
    c17 = `&&`(c15, c16);
    goto L7(c17);
  L36():
    dr = tryDispatchBuiltin.1("$", r16);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L38() else L37(c8, dr);
  L37(c13, r18):
    r19 = `$`(r18, <sym isdir>);
    goto L35(c13, r19);
  L42():
    st to = r24;
    goto L9();
  L46():
    from6 = force? from5;
    checkMissing(from6);
    to9 = ld to;
    check L47() else D16();
  D16():
    deopt 56 [to9];
  L38():
    dx = getTryDispatchBuiltinValue(dr);
    goto L35(c8, dx);
  L47():
    to10 = force? to9;
    checkMissing(to10);
    file_symlink = ldf `file.symlink` in base;
    r28 = dyn file_symlink(from6, to10);
    check L48() else D17();
  D17():
    deopt 59 [r28];
  L48():
    goto L10(r28);
  }
}