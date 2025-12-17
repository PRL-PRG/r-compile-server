fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1448629668;
    st srcref = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1448629668(srcfile, lloc) {
  (reg srcfile:*, reg lloc:*) -+> V { var srcfile:*, var lloc:*, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg srcfile1:*, reg srcfile2:V, reg inherits:cls, reg r2:V, reg p:p(V +), reg _in_:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg lloc1:*, reg lloc2:V, reg length:cls, reg r6:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg c:cls, reg r10:V, reg p2:p(V +), reg r12:V, reg p3:p(V +), reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg lloc3:*, reg lloc4:V, reg length1:cls, reg r17:V, reg r18:V, reg c1:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg lloc5:*, reg lloc6:V, reg lloc7:*, reg lloc8:V, reg c2:L, reg lloc10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg lloc13:V, reg r22:V, reg c3:cls, reg r23:V, reg __:cls, reg r24:V, reg c4:cls, reg r25:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg r28:V, reg lloc14:*, reg lloc15:V, reg length2:cls, reg r29:V, reg r30:V, reg c5:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r31:V, reg r32:V, reg lloc16:*, reg lloc17:V, reg lloc18:*, reg lloc19:V, reg c6:L, reg lloc21:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r33:V, reg lloc24:V, reg r34:V, reg c7:cls, reg r35:V, reg __1:cls, reg r36:V, reg c8:cls, reg r37:V, reg structure:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r39:V, reg r40:V, reg lloc25:*, reg lloc26:V, reg as_integer:cls, reg r41:V, reg p4:p(V +), reg srcfile3:*, reg srcfile4:V, reg p5:p(V +), reg r44:V |
    mkenv;
    st srcfile = srcfile;
    st lloc = lloc;
    stopifnot = ldf stopifnot;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    p = prom<V +>{
      sym = ldf inherits;
      base = ldf inherits in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      srcfile1 = ld srcfile;
      srcfile2 = force? srcfile1;
      checkMissing(srcfile2);
      inherits = ldf inherits in base;
      r2 = dyn inherits(srcfile2, "srcfile", FALSE);
      goto L0(r2);
    L2():
      r = dyn base(<sym srcfile>, "srcfile");
      goto L0(r);
    };
    p3 = prom<V +>{
      _in_ = ldf `%in%`;
      p1 = prom<V +>{
        sym1 = ldf length;
        base1 = ldf length in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r5):
        return r5;
      L1():
        lloc1 = ld lloc;
        lloc2 = force? lloc1;
        checkMissing(lloc2);
        length = ldf length in base;
        r6 = dyn length(lloc2);
        goto L0(r6);
      L2():
        r4 = dyn base1(<sym lloc>);
        goto L0(r4);
      };
      p2 = prom<V +>{
        sym2 = ldf c;
        base2 = ldf c in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r9):
        return r9;
      L1():
        c = ldf c in base;
        r10 = dyn c(4, 6, 8);
        goto L0(r10);
      L2():
        r8 = dyn base2(4, 6, 8);
        goto L0(r8);
      };
      r12 = dyn _in_(p1, p2);
      return r12;
    };
    r14 = dyn stopifnot(p, p3);
    check L13() else D1();
  D1():
    deopt 4 [r14];
  L13():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L14() else L15();
  L0(r16):
    r18 = `==`(r16, 4);
    c1 = `as.logical`(r18);
    if c1 then L18() else L1();
  L14():
    lloc3 = ld lloc;
    check L16() else D2();
  L15():
    r15 = dyn base3(<sym lloc>);
    goto L0(r15);
  D2():
    deopt 7 [lloc3];
  L1():
    goto L5();
  L5():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L31() else L32();
  L16():
    lloc4 = force? lloc3;
    checkMissing(lloc4);
    length1 = ldf length in base;
    r17 = dyn length1(lloc4);
    check L17() else D3();
  L18():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L19() else L20();
  D3():
    deopt 10 [r17];
  L2(r20):
    st lloc = r20;
    goto L5();
  L6(r28):
    r30 = `==`(r28, 6);
    c5 = `as.logical`(r30);
    if c5 then L35() else L7();
  L17():
    goto L0(r17);
  L19():
    lloc5 = ld lloc;
    check L21() else D4();
  L20():
    r19 = dyn base4(<sym lloc>, <lang `[`(lloc, c(2, 4))>);
    goto L2(r19);
  L31():
    lloc14 = ld lloc;
    check L33() else D8();
  L32():
    r27 = dyn base6(<sym lloc>);
    goto L6(r27);
  D4():
    deopt 15 [lloc5];
  D8():
    deopt 33 [lloc14];
  L7():
    goto L11();
  L11():
    structure = ldf structure;
    check L48() else D14();
  L21():
    lloc6 = force? lloc5;
    checkMissing(lloc6);
    lloc7 = ld lloc;
    check L22() else D5();
  L33():
    lloc15 = force? lloc14;
    checkMissing(lloc15);
    length2 = ldf length in base;
    r29 = dyn length2(lloc15);
    check L34() else D9();
  L35():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L36() else L37();
  D5():
    deopt 17 [lloc7];
  D9():
    deopt 36 [r29];
  D14():
    deopt 58 [];
  L8(r32):
    st lloc = r32;
    goto L11();
  L22():
    lloc8 = force? lloc7;
    checkMissing(lloc8);
    c2 = `is.object`(lloc8);
    if c2 then L23() else L24(lloc8);
  L34():
    goto L6(r29);
  L36():
    lloc16 = ld lloc;
    check L38() else D10();
  L37():
    r31 = dyn base7(<sym lloc>, <lang `[`(lloc, c(1, 3))>);
    goto L8(r31);
  L48():
    p4 = prom<V +>{
      sym9 = ldf `as.integer`;
      base9 = ldf `as.integer` in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      lloc25 = ld lloc;
      lloc26 = force? lloc25;
      checkMissing(lloc26);
      as_integer = ldf `as.integer` in base;
      r41 = dyn as_integer(lloc26);
      goto L0(r41);
    L2():
      r39 = dyn base9(<sym lloc>);
      goto L0(r39);
    };
    p5 = prom<V +>{
      srcfile3 = ld srcfile;
      srcfile4 = force? srcfile3;
      checkMissing(srcfile4);
      return srcfile4;
    };
    r44 = dyn structure[, srcfile, class](p4, p5, "srcref");
    check L49() else D15();
  D10():
    deopt 41 [lloc16];
  D15():
    deopt 64 [r44];
  L3(dx1):
    c4 = ldf c in base;
    r25 = dyn c4(lloc6, dx1);
    check L29() else D7();
  L23():
    dr = tryDispatchBuiltin.1("[", lloc8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(lloc10):
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L26() else L27();
  L38():
    lloc17 = force? lloc16;
    checkMissing(lloc17);
    lloc18 = ld lloc;
    check L39() else D11();
  L49():
    popenv;
    return r44;
  D7():
    deopt 27 [r25];
  D11():
    deopt 43 [lloc18];
  L4(lloc13, r22):
    __ = ldf `[` in base;
    r24 = dyn __(lloc13, r22);
    goto L3(r24);
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L26():
    c3 = ldf c in base;
    r23 = dyn c3(2, 4);
    check L28() else D6();
  L27():
    r21 = dyn base5(2, 4);
    goto L4(lloc10, r21);
  L29():
    goto L2(r25);
  L39():
    lloc19 = force? lloc18;
    checkMissing(lloc19);
    c6 = `is.object`(lloc19);
    if c6 then L40() else L41(lloc19);
  D6():
    deopt 24 [lloc10, r23];
  L9(dx3):
    c8 = ldf c in base;
    r37 = dyn c8(lloc17, dx3);
    check L46() else D13();
  L28():
    goto L4(lloc10, r23);
  L40():
    dr2 = tryDispatchBuiltin.1("[", lloc19);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L42() else L41(dr2);
  L41(lloc21):
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L43() else L44();
  D13():
    deopt 53 [r37];
  L10(lloc24, r34):
    __1 = ldf `[` in base;
    r36 = dyn __1(lloc24, r34);
    goto L9(r36);
  L42():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L43():
    c7 = ldf c in base;
    r35 = dyn c7(1, 3);
    check L45() else D12();
  L44():
    r33 = dyn base8(1, 3);
    goto L10(lloc21, r33);
  L46():
    goto L8(r37);
  D12():
    deopt 50 [lloc21, r35];
  L45():
    goto L10(lloc21, r35);
  }
}