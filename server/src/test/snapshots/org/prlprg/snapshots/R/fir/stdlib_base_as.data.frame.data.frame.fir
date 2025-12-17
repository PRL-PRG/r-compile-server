fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3618692254;
    st `as.data.frame.data.frame` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner3618692254(x, `row.names`, `...`) {
  (reg x:*, reg row_names:*, reg ddd:dots) -+> V { var x:*, var `row.names`:*, reg row_names_isMissing:L, reg row_names_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg oldClass:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg cl:*, reg cl1:V, reg match:cls, reg r5:V, reg i:*, reg i1:V, reg r6:V, reg c:L, reg cl2:*, reg cl3:V, reg c1:L, reg cl5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i2:*, reg i3:V, reg r7:V, reg r8:V, reg r9:V, reg __:cls, reg r10:V, reg l:*, reg class__:cls, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg row_names1:*, reg row_names2:V, reg c2:V, reg r14:V, reg c3:L, reg _row_names_info:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg row_names3:*, reg row_names4:V, reg length:cls, reg r19:V, reg nr:*, reg nr1:V, reg r20:V, reg c4:L, reg row_names5:*, reg row_names6:V, reg l1:*, reg attr__:cls, reg r21:V, reg row_names7:V, reg stop:cls, reg sprintf:cls, reg ngettext:cls, reg nr2:*, reg nr3:V, reg p1:p(V +), reg r23:V, reg p2:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg row_names8:*, reg row_names9:V, reg length1:cls, reg r27:V, reg p3:p(V +), reg nr4:*, reg nr5:V, reg p4:p(V +), reg r30:V, reg p5:p(V +), reg r32:V, reg x5:*, reg x6:V |
    mkenv;
    st x = x;
    row_names_isMissing = missing.0(row_names);
    if row_names_isMissing then L0(NULL) else L0(row_names);
  L0(row_names_orDefault):
    st `row.names` = row_names_orDefault;
    st `...` = ddd;
    sym = ldf oldClass;
    base = ldf oldClass in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L1(r1):
    st cl = r1;
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L12():
    x1 = ld x;
    check L14() else D0();
  L13():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2(r4):
    st i = r4;
    i = ld i;
    check L20() else D4();
  L14():
    x2 = force? x1;
    checkMissing(x2);
    oldClass = ldf oldClass in base;
    r2 = dyn oldClass(x2);
    check L15() else D1();
  L16():
    cl = ld cl;
    check L18() else D2();
  L17():
    r3 = dyn base1("data.frame", <sym cl>);
    goto L2(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 10 [cl];
  D4():
    deopt 17 [i];
  L15():
    goto L1(r2);
  L18():
    cl1 = force? cl;
    checkMissing(cl1);
    match = ldf match in base;
    r5 = dyn match("data.frame", cl1, NA_INT, NULL);
    check L19() else D3();
  L20():
    i1 = force? i;
    checkMissing(i1);
    r6 = `>`(i1, 1);
    c = `as.logical`(r6);
    if c then L21() else L3();
  D3():
    deopt 15 [r5];
  L3():
    goto L5();
  L5():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L19():
    goto L2(r5);
  L21():
    cl2 = ld cl;
    check L22() else D5();
  D5():
    deopt 21 [cl2];
  L6(r13):
    r14 = `!`(r13);
    c3 = `as.logical`(r14);
    if c3 then L33() else L7();
  L22():
    cl3 = force? cl2;
    checkMissing(cl3);
    c1 = `is.object`(cl3);
    if c1 then L23() else L24(cl3);
  L30():
    row_names1 = ld `row.names`;
    check L32() else D9();
  L31():
    r12 = dyn base2(<sym row.names>);
    goto L6(r12);
  D9():
    deopt 39 [row_names1];
  L4(dx1):
    l = ld x;
    class__ = ldf `class<-`;
    check L27() else D7();
  L7():
    goto L11();
  L11():
    x5 = ld x;
    check L49() else D20();
  L23():
    dr = tryDispatchBuiltin.1("[", cl3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(cl5):
    i2 = ld i;
    check L26() else D6();
  L32():
    row_names2 = force? row_names1;
    checkMissing(row_names2);
    c2 = `==`(row_names2, NULL);
    goto L6(c2);
  L33():
    _row_names_info = ldf `.row_names_info`;
    check L34() else D10();
  D6():
    deopt 24 [cl5, 1, i2];
  D7():
    deopt 32 [dx1, l, dx1];
  D10():
    deopt 44 [];
  D20():
    deopt 73 [x5];
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L26():
    i3 = force? i2;
    checkMissing(i3);
    r7 = `-`(i3, 1);
    r8 = `:`(1, r7);
    r9 = `-`(<missing>, r8);
    __ = ldf `[` in base;
    r10 = dyn __(cl5, r9);
    goto L4(r10);
  L27():
    r11 = dyn class__(l, NULL, dx1);
    check L28() else D8();
  L34():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r16 = dyn _row_names_info(p, 2);
    check L35() else D11();
  L49():
    x6 = force? x5;
    checkMissing(x6);
    popenv;
    return x6;
  D8():
    deopt 34 [dx1, r11];
  D11():
    deopt 47 [r16];
  L28():
    st x = r11;
    goto L5();
  L35():
    st nr = r16;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  L8(r18):
    nr = ld nr;
    check L40() else D14();
  L36():
    row_names3 = ld `row.names`;
    check L38() else D12();
  L37():
    r17 = dyn base3(<sym row.names>);
    goto L8(r17);
  D12():
    deopt 51 [row_names3];
  D14():
    deopt 54 [r18, nr];
  L38():
    row_names4 = force? row_names3;
    checkMissing(row_names4);
    length = ldf length in base;
    r19 = dyn length(row_names4);
    check L39() else D13();
  L40():
    nr1 = force? nr;
    checkMissing(nr1);
    r20 = `==`(r18, nr1);
    c4 = `as.logical`(r20);
    if c4 then L41() else L9();
  D13():
    deopt 54 [r19];
  L9():
    stop = ldf stop;
    check L46() else D18();
  L10(row_names7):
    goto L11();
  L39():
    goto L8(r19);
  L41():
    row_names5 = ld `row.names`;
    check L42() else D15();
  D15():
    deopt 57 [row_names5];
  D18():
    deopt 66 [];
  L42():
    row_names6 = force? row_names5;
    checkMissing(row_names6);
    l1 = ld x;
    attr__ = ldf `attr<-`;
    check L43() else D16();
  L46():
    p5 = prom<V +>{
      sprintf = ldf sprintf;
      p2 = prom<V +>{
        ngettext = ldf ngettext;
        p1 = prom<V +>{
          nr2 = ld nr;
          nr3 = force? nr2;
          checkMissing(nr3);
          return nr3;
        };
        r23 = dyn ngettext(p1, "invalid 'row.names', length %d for a data frame with %d row", "invalid 'row.names', length %d for a data frame with %d rows");
        return r23;
      };
      p3 = prom<V +>{
        sym4 = ldf length;
        base4 = ldf length in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r26):
        return r26;
      L1():
        row_names8 = ld `row.names`;
        row_names9 = force? row_names8;
        checkMissing(row_names9);
        length1 = ldf length in base;
        r27 = dyn length1(row_names9);
        goto L0(r27);
      L2():
        r25 = dyn base4(<sym row.names>);
        goto L0(r25);
      };
      p4 = prom<V +>{
        nr4 = ld nr;
        nr5 = force? nr4;
        checkMissing(nr5);
        return nr5;
      };
      r30 = dyn sprintf(p2, p3, p4);
      return r30;
    };
    r32 = dyn stop[, domain](p5, NA_LGL);
    check L47() else D19();
  D16():
    deopt 60 [row_names6, l1, row_names6];
  D19():
    deopt 70 [r32];
  L43():
    r21 = dyn attr__(l1, NULL, "row.names", row_names6);
    check L44() else D17();
  L47():
    goto L10(r32);
  D17():
    deopt 63 [row_names6, r21];
  L44():
    st x = r21;
    goto L10(row_names6);
  }
}