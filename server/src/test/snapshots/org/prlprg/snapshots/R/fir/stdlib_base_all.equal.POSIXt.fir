fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner400318931;
    st `all.equal.POSIXt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner400318931(target, current, `...`, tolerance, scale, `check.tzone`) {
  (reg target:*, reg current:*, reg ddd:dots, reg tolerance:*, reg scale:*, reg check_tzone:*) -+> V { var target:*, var current:*, var `...`:dots?, var tolerance:*, reg tolerance_isMissing:L, reg tolerance_orDefault:*, var scale:*, var `check.tzone`:*, reg check_tzone_isMissing:L, reg check_tzone_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg target1:*, reg target2:V, reg inherits:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg current1:*, reg current2:V, reg inherits1:cls, reg r8:V, reg r9:V, reg c1:L, reg as_POSIXct:cls, reg target3:*, reg target4:V, reg p:p(V +), reg r13:V, reg as_POSIXct1:cls, reg current3:*, reg current4:V, reg p1:p(V +), reg r15:V, reg check_tzone1:*, reg check_tzone2:V, reg c2:L, reg r16:cls, reg tz:cls, reg target5:*, reg target6:V, reg p2:p(V +), reg r18:V, reg tz1:cls, reg current5:*, reg current6:V, reg p3:p(V +), reg r20:V, reg isTRUE:cls, reg tzt:*, reg tzt1:V, reg tzc:*, reg tzc1:V, reg r21:V, reg p4:p(V +), reg r23:V, reg r24:V, reg c3:L, reg sprintf:cls, reg tzt2:*, reg tzt3:V, reg p5:p(V +), reg tzc2:*, reg tzc3:V, reg p6:p(V +), reg r27:V, reg r28:V, reg l:*, reg attr__:cls, reg r30:V, reg l1:*, reg attr__1:cls, reg r31:V, reg all_equal_numeric:cls, reg target7:*, reg target8:V, reg p7:p(V +), reg current7:*, reg current8:V, reg p8:p(V +), reg ddd1:dots?, reg tolerance1:*, reg tolerance2:V, reg p9:p(V +), reg r35:V, reg isTRUE1:cls, reg val:*, reg val1:V, reg p10:p(V +), reg r37:V, reg r38:V, reg c4:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r39:V, reg r40:V, reg msg:*, reg msg1:V, reg val2:*, reg val3:V, reg c5:cls, reg r41:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r43:V, reg r44:V, reg msg2:*, reg msg3:V, reg c6:V, reg c7:L, reg msg4:*, reg msg5:V |
    mkenv;
    st target = target;
    st current = current;
    st `...` = ddd;
    tolerance_isMissing = missing.0(tolerance);
    if tolerance_isMissing then L0(0.001) else L0(tolerance);
  L0(tolerance_orDefault):
    st tolerance = tolerance_orDefault;
    st scale = scale;
    check_tzone_isMissing = missing.0(check_tzone);
    if check_tzone_isMissing then L1(TRUE) else L1(check_tzone);
  L1(check_tzone_orDefault):
    st `check.tzone` = check_tzone_orDefault;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L2(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L21() else L3();
  L17():
    target1 = ld target;
    check L19() else D0();
  L18():
    r = dyn base(<sym target>, "POSIXt");
    goto L2(r);
  D0():
    deopt 2 [target1];
  L3():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L19():
    target2 = force? target1;
    checkMissing(target2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(target2, "POSIXt", FALSE);
    check L20() else D1();
  L21():
    popenv;
    return "'target' is not a POSIXt";
  D1():
    deopt 7 [r2];
  L5(r7):
    r9 = `!`(r7);
    c1 = `as.logical`(r9);
    if c1 then L28() else L6();
  L20():
    goto L2(r2);
  L24():
    current1 = ld current;
    check L26() else D2();
  L25():
    r6 = dyn base1(<sym current>, "POSIXt");
    goto L5(r6);
  D2():
    deopt 16 [current1];
  L6():
    as_POSIXct = ldf `as.POSIXct`;
    check L31() else D4();
  L26():
    current2 = force? current1;
    checkMissing(current2);
    inherits1 = ldf inherits in base;
    r8 = dyn inherits1(current2, "POSIXt", FALSE);
    check L27() else D3();
  L28():
    popenv;
    return "'current' is not a POSIXt";
  D3():
    deopt 21 [r8];
  D4():
    deopt 29 [];
  L27():
    goto L5(r8);
  L31():
    p = prom<V +>{
      target3 = ld target;
      target4 = force? target3;
      checkMissing(target4);
      return target4;
    };
    r13 = dyn as_POSIXct(p);
    check L32() else D5();
  D5():
    deopt 31 [r13];
  L32():
    st target = r13;
    as_POSIXct1 = ldf `as.POSIXct`;
    check L33() else D6();
  D6():
    deopt 34 [];
  L33():
    p1 = prom<V +>{
      current3 = ld current;
      current4 = force? current3;
      checkMissing(current4);
      return current4;
    };
    r15 = dyn as_POSIXct1(p1);
    check L34() else D7();
  D7():
    deopt 36 [r15];
  L34():
    st current = r15;
    st msg = NULL;
    check_tzone1 = ld `check.tzone`;
    check L35() else D8();
  D8():
    deopt 41 [check_tzone1];
  L35():
    check_tzone2 = force? check_tzone1;
    checkMissing(check_tzone2);
    c2 = `as.logical`(check_tzone2);
    if c2 then L36() else L8();
  L8():
    goto L11();
  L11():
    l = ld current;
    attr__ = ldf `attr<-`;
    check L48() else D17();
  L36():
    r16 = clos inner1027862833;
    st tz = r16;
    tz = ldf tz;
    check L37() else D9();
  D9():
    deopt 47 [];
  D17():
    deopt 75 [NULL, l, NULL];
  L37():
    p2 = prom<V +>{
      target5 = ld target;
      target6 = force? target5;
      checkMissing(target6);
      return target6;
    };
    r18 = dyn tz(p2);
    check L38() else D10();
  L48():
    r30 = dyn attr__(l, NULL, "tzone", NULL);
    check L49() else D18();
  D10():
    deopt 49 [r18];
  D18():
    deopt 78 [NULL, r30];
  L38():
    st tzt = r18;
    tz1 = ldf tz;
    check L39() else D11();
  L49():
    st current = r30;
    l1 = ld target;
    attr__1 = ldf `attr<-`;
    check L50() else D19();
  D11():
    deopt 52 [];
  D19():
    deopt 81 [NULL, l1, NULL];
  L39():
    p3 = prom<V +>{
      current5 = ld current;
      current6 = force? current5;
      checkMissing(current6);
      return current6;
    };
    r20 = dyn tz1(p3);
    check L40() else D12();
  L50():
    r31 = dyn attr__1(l1, NULL, "tzone", NULL);
    check L51() else D20();
  D12():
    deopt 54 [r20];
  D20():
    deopt 84 [NULL, r31];
  L40():
    st tzc = r20;
    isTRUE = ldf isTRUE;
    check L41() else D13();
  L51():
    st target = r31;
    all_equal_numeric = ldf `all.equal.numeric`;
    check L52() else D21();
  D13():
    deopt 57 [];
  D21():
    deopt 87 [];
  L41():
    p4 = prom<V +>{
      tzt = ld tzt;
      tzt1 = force? tzt;
      checkMissing(tzt1);
      tzc = ld tzc;
      tzc1 = force? tzc;
      checkMissing(tzc1);
      r21 = `==`(tzt1, tzc1);
      return r21;
    };
    r23 = dyn isTRUE(p4);
    check L42() else D14();
  L52():
    p7 = prom<V +>{
      target7 = ld target;
      target8 = force? target7;
      checkMissing(target8);
      return target8;
    };
    p8 = prom<V +>{
      current7 = ld current;
      current8 = force? current7;
      checkMissing(current8);
      return current8;
    };
    ddd1 = ld `...`;
    p9 = prom<V +>{
      tolerance1 = ld tolerance;
      tolerance2 = force? tolerance1;
      checkMissing(tolerance2);
      return tolerance2;
    };
    r35 = dyn all_equal_numeric[, , `...`, tolerance, scale](p7, p8, ddd1, p9, 1.0);
    check L53() else D22();
  D14():
    deopt 59 [r23];
  D22():
    deopt 95 [r35];
  L42():
    r24 = `!`(r23);
    c3 = `as.logical`(r24);
    if c3 then L43() else L9();
  L53():
    st val = r35;
    isTRUE1 = ldf isTRUE;
    check L54() else D23();
  D23():
    deopt 98 [];
  L9():
    goto L10(NULL);
  L10(r28):
    goto L11();
  L43():
    sprintf = ldf sprintf;
    check L44() else D15();
  L54():
    p10 = prom<V +>{
      val = ld val;
      val1 = force? val;
      checkMissing(val1);
      return val1;
    };
    r37 = dyn isTRUE1(p10);
    check L55() else D24();
  D15():
    deopt 62 [];
  D24():
    deopt 100 [r37];
  L44():
    p5 = prom<V +>{
      tzt2 = ld tzt;
      tzt3 = force? tzt2;
      checkMissing(tzt3);
      return tzt3;
    };
    p6 = prom<V +>{
      tzc2 = ld tzc;
      tzc3 = force? tzc2;
      checkMissing(tzc3);
      return tzc3;
    };
    r27 = dyn sprintf("'tzone' attributes are inconsistent ('%s' and '%s')", p5, p6);
    check L45() else D16();
  L55():
    r38 = `!`(r37);
    c4 = `as.logical`(r38);
    if c4 then L56() else L12();
  D16():
    deopt 66 [r27];
  L12():
    goto L14();
  L14():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L63() else L64();
  L45():
    st msg = r27;
    goto L10(r27);
  L56():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L57() else L58();
  L13(r40):
    st msg = r40;
    goto L14();
  L15(r44):
    c7 = `as.logical`(r44);
    if c7 then L66() else L16();
  L57():
    msg = ld msg;
    check L59() else D25();
  L58():
    r39 = dyn base2(<sym msg>, <sym val>);
    goto L13(r39);
  L63():
    msg2 = ld msg;
    check L65() else D28();
  L64():
    r43 = dyn base3(<sym msg>);
    goto L15(r43);
  D25():
    deopt 104 [msg];
  D28():
    deopt 114 [msg2];
  L16():
    msg4 = ld msg;
    check L68() else D29();
  L59():
    msg1 = force? msg;
    checkMissing(msg1);
    val2 = ld val;
    check L60() else D26();
  L65():
    msg3 = force? msg2;
    checkMissing(msg3);
    c6 = `==`(msg3, NULL);
    goto L15(c6);
  L66():
    popenv;
    return TRUE;
  D26():
    deopt 106 [val2];
  D29():
    deopt 119 [msg4];
  L60():
    val3 = force? val2;
    checkMissing(val3);
    c5 = ldf c in base;
    r41 = dyn c5(msg1, val3);
    check L61() else D27();
  L68():
    msg5 = force? msg4;
    checkMissing(msg5);
    popenv;
    return msg5;
  D27():
    deopt 109 [r41];
  L61():
    goto L13(r41);
  }
}
fun inner1027862833(dt) {
  (reg dt:*) -+> V { var dt:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg dt1:*, reg dt2:V, reg attr:cls, reg r4:V, reg c:V, reg c1:L, reg tz:*, reg tz1:V, reg c2:L, reg tz3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V |
    mkenv;
    st dt = dt;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L10() else L2();
  L4():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L5():
    r = dyn base(<lang `<-`(tz, attr(dt, "tzone"))>);
    goto L0(r);
  L1(r3):
    st tz = r3;
    c = `==`(r3, NULL);
    goto L0(c);
  L2():
    tz = ld tz;
    check L12() else D2();
  L6():
    dt1 = ld dt;
    check L8() else D0();
  L7():
    r2 = dyn base1(<sym dt>, "tzone");
    goto L1(r2);
  L10():
    popenv;
    return "";
  D0():
    deopt 3 [dt1];
  D2():
    deopt 12 [tz];
  L8():
    dt2 = force? dt1;
    checkMissing(dt2);
    attr = ldf attr in base;
    r4 = dyn attr(dt2, "tzone");
    check L9() else D1();
  L12():
    tz1 = force? tz;
    checkMissing(tz1);
    c2 = `is.object`(tz1);
    if c2 then L13() else L14(tz1);
  D1():
    deopt 7 [r4];
  L3(dx1):
    popenv;
    return dx1;
  L9():
    goto L1(r4);
  L13():
    dr = tryDispatchBuiltin.1("[", tz1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(tz3):
    __ = ldf `[` in base;
    r5 = dyn __(tz3, 1);
    goto L3(r5);
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  }
}