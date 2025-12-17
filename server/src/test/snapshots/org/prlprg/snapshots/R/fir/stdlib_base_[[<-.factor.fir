fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1438292104`;
    st `[[<-.factor` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1438292104`(x, `...`, value) {
  (reg x:*, reg ddd:dots, reg value:*) -+> V { var x:*, var `...`:dots?, var value:*, reg levels:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x3:*, reg x4:V, reg oldClass:cls, reg r4:V, reg is_factor:cls, reg value1:*, reg value2:V, reg p1:p(V +), reg r6:V, reg c:L, reg levels1:cls, reg value3:*, reg value4:V, reg p2:p(V +), reg r8:V, reg c1:L, reg r10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg value5:*, reg value6:V, reg __:cls, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg value7:*, reg value8:V, reg lx:*, reg lx1:V, reg match:cls, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg m:*, reg m1:V, reg is_na:cls, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg r24:V, reg value9:*, reg value10:V, reg is_na1:cls, reg r25:V, reg r26:V, reg r27:V, reg any:cls, reg r28:V, reg c2:L, reg warning:cls, reg r29:V, reg l:*, reg class__:cls, reg r31:V, reg m2:*, reg m3:V, reg l1:*, reg ____:cls, reg ddd1:dots?, reg r32:V, reg lx2:*, reg lx3:V, reg l2:*, reg attr__:cls, reg r33:V, reg cx:*, reg cx1:V, reg l3:*, reg class__1:cls, reg r34:V, reg x5:*, reg x6:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    st value = value;
    levels = ldf levels;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn levels(p);
    check L11() else D1();
  D1():
    deopt 3 [r1];
  L11():
    st lx = r1;
    sym = ldf oldClass;
    base = ldf oldClass in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r3):
    st cx = r3;
    is_factor = ldf `is.factor`;
    check L16() else D4();
  L12():
    x3 = ld x;
    check L14() else D2();
  L13():
    r2 = dyn base(<sym x>);
    goto L0(r2);
  D2():
    deopt 7 [x3];
  D4():
    deopt 13 [];
  L14():
    x4 = force? x3;
    checkMissing(x4);
    oldClass = ldf oldClass in base;
    r4 = dyn oldClass(x4);
    check L15() else D3();
  L16():
    p1 = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    r6 = dyn is_factor(p1);
    check L17() else D5();
  D3():
    deopt 10 [r4];
  D5():
    deopt 15 [r6];
  L15():
    goto L0(r4);
  L17():
    c = `as.logical`(r6);
    if c then L18() else L1();
  L1():
    goto L3();
  L3():
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L18():
    levels1 = ldf levels;
    check L19() else D6();
  D6():
    deopt 17 [];
  L4(r13):
    st m = r13;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  L19():
    p2 = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      return value4;
    };
    r8 = dyn levels1(p2);
    check L20() else D7();
  L26():
    value7 = ld value;
    check L28() else D9();
  L27():
    r12 = dyn base1(<sym value>, <sym lx>);
    goto L4(r12);
  D7():
    deopt 19 [r8];
  D9():
    deopt 28 [value7];
  L5(r16):
    c2 = `as.logical`(r16);
    if c2 then L42() else L8();
  L20():
    c1 = `is.object`(r8);
    if c1 then L21() else L22(r8);
  L28():
    value8 = force? value7;
    checkMissing(value8);
    lx = ld lx;
    check L29() else D10();
  L31():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L32():
    r15 = dyn base2(<lang `&`(is.na(m), `!`(is.na(value)))>);
    goto L5(r15);
  D10():
    deopt 30 [lx];
  L2(dx1):
    st value = dx1;
    goto L3();
  L6(r18):
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L37() else L38();
  L8():
    goto L9();
  L9():
    l = ld x;
    class__ = ldf `class<-`;
    check L46() else D19();
  L21():
    dr = tryDispatchBuiltin.1("[", r8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(r10):
    value5 = ld value;
    check L24() else D8();
  L29():
    lx1 = force? lx;
    checkMissing(lx1);
    match = ldf match in base;
    r14 = dyn match(value8, lx1, NA_INT, NULL);
    check L30() else D11();
  L33():
    m = ld m;
    check L35() else D12();
  L34():
    r17 = dyn base3(<sym m>);
    goto L6(r17);
  L42():
    warning = ldf warning;
    check L43() else D17();
  D8():
    deopt 20 [r10, value5];
  D11():
    deopt 35 [r14];
  D12():
    deopt 41 [m];
  D17():
    deopt 55 [];
  D19():
    deopt 63 [NULL, l, NULL];
  L7(r23, r24):
    r26 = `!`(r24);
    r27 = `&&`(r23, r26);
    any = ldf any in base;
    r28 = dyn any(r27);
    check L41() else D16();
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L24():
    value6 = force? value5;
    __ = ldf `[` in base;
    r11 = dyn __(r10, value6);
    goto L2(r11);
  L30():
    goto L4(r14);
  L35():
    m1 = force? m;
    checkMissing(m1);
    is_na = ldf `is.na` in base;
    r19 = dyn is_na(m1);
    check L36() else D13();
  L37():
    value9 = ld value;
    check L39() else D14();
  L38():
    r22 = dyn base4(<sym value>);
    goto L7(r18, r22);
  L43():
    r29 = dyn warning("invalid factor level, NA generated");
    check L44() else D18();
  L46():
    r31 = dyn class__(l, NULL, NULL);
    check L47() else D20();
  D13():
    deopt 44 [r19];
  D14():
    deopt 46 [r18, value9];
  D16():
    deopt 53 [r28];
  D18():
    deopt 57 [r29];
  D20():
    deopt 65 [NULL, r31];
  L36():
    goto L6(r19);
  L39():
    value10 = force? value9;
    checkMissing(value10);
    is_na1 = ldf `is.na` in base;
    r25 = dyn is_na1(value10);
    check L40() else D15();
  L41():
    goto L5(r28);
  L44():
    goto L9();
  L47():
    st x = r31;
    m2 = ld m;
    check L48() else D21();
  D15():
    deopt 49 [r18, r25];
  D21():
    deopt 67 [m2];
  L40():
    goto L7(r18, r25);
  L48():
    m3 = force? m2;
    checkMissing(m3);
    l1 = ld x;
    ____ = ldf `[[<-`;
    check L49() else D22();
  D22():
    deopt 70 [m3, l1, m3];
  L49():
    ddd1 = ld `...`;
    r32 = dyn ____[, , `...`, ](l1, NULL, ddd1, m3);
    check L50() else D23();
  D23():
    deopt 73 [m3, r32];
  L50():
    st x = r32;
    lx2 = ld lx;
    check L51() else D24();
  D24():
    deopt 75 [lx2];
  L51():
    lx3 = force? lx2;
    checkMissing(lx3);
    l2 = ld x;
    attr__ = ldf `attr<-`;
    check L52() else D25();
  D25():
    deopt 78 [lx3, l2, lx3];
  L52():
    r33 = dyn attr__(l2, NULL, "levels", lx3);
    check L53() else D26();
  D26():
    deopt 81 [lx3, r33];
  L53():
    st x = r33;
    cx = ld cx;
    check L54() else D27();
  D27():
    deopt 83 [cx];
  L54():
    cx1 = force? cx;
    checkMissing(cx1);
    l3 = ld x;
    class__1 = ldf `class<-`;
    check L55() else D28();
  D28():
    deopt 86 [cx1, l3, cx1];
  L55():
    r34 = dyn class__1(l3, NULL, cx1);
    check L56() else D29();
  D29():
    deopt 88 [cx1, r34];
  L56():
    st x = r34;
    x5 = ld x;
    check L57() else D30();
  D30():
    deopt 90 [x5];
  L57():
    x6 = force? x5;
    checkMissing(x6);
    popenv;
    return x6;
  }
}