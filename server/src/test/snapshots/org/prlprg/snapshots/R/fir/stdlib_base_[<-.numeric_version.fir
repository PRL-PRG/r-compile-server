fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1496484187`;
    st `[<-.numeric_version` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1496484187`(x, i, j, value) {
  (reg x:*, reg i:*, reg j:*, reg value:*) -+> V { var x:*, var i:*, var j:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg missing:cls, reg r5:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg as_numeric_version:cls, reg value1:*, reg value2:V, reg p:p(V +), reg r9:V, reg unclass1:cls, reg r10:V, reg l:*, reg c1:L, reg r12:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg r14:V, reg dx1:V, reg i1:*, reg i2:V, reg ___:cls, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg value3:*, reg value4:V, reg is_list:cls, reg r19:V, reg r20:V, reg c2:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg value5:*, reg value6:V, reg list:cls, reg r23:V, reg lapply:cls, reg value7:*, reg value8:V, reg p1:p(V +), reg as_integer:*, reg as_integer1:V, reg p2:p(V +), reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg vapply:cls, reg value9:*, reg value10:V, reg p3:p(V +), reg r31:cls, reg p4:p(V +), reg r33:V, reg any:cls, reg r34:V, reg c3:L, reg stop:cls, reg r35:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg j1:*, reg j2:V, reg is_list1:cls, reg r39:V, reg r40:V, reg c4:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg j3:*, reg j4:V, reg list1:cls, reg r43:V, reg Map:cls, reg ___1:*, reg ___2:V, reg p5:p(V +), reg y:*, reg y1:V, reg c5:L, reg y3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i3:*, reg i4:V, reg __:cls, reg r46:V, reg p6:p(V +), reg j5:*, reg j6:V, reg p7:p(V +), reg value11:*, reg value12:V, reg p8:p(V +), reg r50:V, reg l3:*, reg c6:L, reg r52:V, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r54:V, reg dx5:V, reg i5:*, reg i6:V, reg ___3:cls, reg r55:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r56:V, reg r57:V, reg x3:*, reg x4:V, reg class:cls, reg r58:V, reg l6:*, reg class__:cls, reg r59:V, reg y4:*, reg y5:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    st value = value;
    sym = ldf unclass;
    base = ldf unclass in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L0(r1):
    st y = r1;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L19():
    x1 = ld x;
    check L21() else D0();
  L20():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    c = `as.logical`(r4);
    if c then L25() else L2();
  L21():
    x2 = force? x1;
    checkMissing(x2);
    unclass = ldf unclass in base;
    r2 = dyn unclass(x2);
    check L22() else D1();
  L23():
    missing = ldf missing in base;
    r5 = dyn missing(<sym j>);
    goto L1(r5);
  L24():
    r3 = dyn base1(<sym j>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  L2():
    sym3 = ldf `is.list`;
    base3 = ldf `is.list` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  L5():
    sym8 = ldf class;
    base8 = ldf class in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L73() else L74();
  L22():
    goto L0(r2);
  L25():
    sym2 = ldf unclass;
    base2 = ldf unclass in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L3(r7):
    l = ld y;
    c1 = `is.object`(l);
    if c1 then L31() else L32(r7, l);
  L6(r18):
    r20 = `!`(r18);
    c2 = `as.logical`(r20);
    if c2 then L40() else L7();
  L18(r57):
    l6 = ld y;
    class__ = ldf `class<-`;
    check L77() else D26();
  L26():
    as_numeric_version = ldf `as.numeric_version`;
    check L28() else D2();
  L27():
    r6 = dyn base2(<lang as.numeric_version(value)>);
    goto L3(r6);
  L36():
    value3 = ld value;
    check L38() else D6();
  L37():
    r17 = dyn base3(<sym value>);
    goto L6(r17);
  L73():
    x3 = ld x;
    check L75() else D24();
  L74():
    r56 = dyn base8(<sym x>);
    goto L18(r56);
  D2():
    deopt 13 [];
  D6():
    deopt 25 [value3];
  D24():
    deopt 91 [x3];
  D26():
    deopt 96 [r57, l6, r57];
  L4(r14, dx1):
    st y = dx1;
    goto L5();
  L7():
    goto L9();
  L9():
    lapply = ldf lapply;
    check L46() else D10();
  L28():
    p = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    r9 = dyn as_numeric_version(p);
    check L29() else D3();
  L31():
    dr = tryDispatchBuiltin.0("[<-", l, r7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L33() else L32(r7, dr);
  L32(r12, l2):
    i1 = ld i;
    check L34() else D5();
  L38():
    value4 = force? value3;
    checkMissing(value4);
    is_list = ldf `is.list` in base;
    r19 = dyn is_list(value4);
    check L39() else D7();
  L40():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L75():
    x4 = force? x3;
    checkMissing(x4);
    class = ldf class in base;
    r58 = dyn class(x4);
    check L76() else D25();
  L77():
    r59 = dyn class__(l6, NULL, r57);
    check L78() else D27();
  D3():
    deopt 15 [r9];
  D5():
    deopt 19 [r12, l2, r7, i1];
  D7():
    deopt 28 [r19];
  D10():
    deopt 40 [];
  D25():
    deopt 94 [r58];
  D27():
    deopt 98 [r57, r59];
  L8(r22):
    st value = r22;
    goto L9();
  L29():
    unclass1 = ldf unclass in base;
    r10 = dyn unclass1(r9);
    check L30() else D4();
  L33():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(r7, dx);
  L34():
    i2 = force? i1;
    ___ = ldf `[<-` in base;
    r15 = dyn ___(l2, r7, i2);
    goto L4(r12, r15);
  L39():
    goto L6(r19);
  L41():
    value5 = ld value;
    check L43() else D8();
  L42():
    r21 = dyn base4(<sym value>);
    goto L8(r21);
  L46():
    p1 = prom<V +>{
      value7 = ld value;
      value8 = force? value7;
      checkMissing(value8);
      return value8;
    };
    p2 = prom<V +>{
      as_integer = ld `as.integer`;
      as_integer1 = force? as_integer;
      checkMissing(as_integer1);
      return as_integer1;
    };
    r27 = dyn lapply(p1, p2);
    check L47() else D11();
  L76():
    goto L18(r58);
  L78():
    st y = r59;
    y4 = ld y;
    check L79() else D28();
  D4():
    deopt 17 [r10];
  D8():
    deopt 32 [value5];
  D11():
    deopt 43 [r27];
  D28():
    deopt 100 [y4];
  L30():
    goto L3(r10);
  L43():
    value6 = force? value5;
    checkMissing(value6);
    list = ldf list in base;
    r23 = dyn list(value6);
    check L44() else D9();
  L47():
    st value = r27;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  L79():
    y5 = force? y4;
    checkMissing(y5);
    popenv;
    return y5;
  D9():
    deopt 35 [r23];
  L10(r29):
    c3 = `as.logical`(r29);
    if c3 then L53() else L11();
  L44():
    goto L8(r23);
  L48():
    vapply = ldf vapply;
    check L50() else D12();
  L49():
    r28 = dyn base5(<lang vapply(value, function((e=), `||`(anyNA(e), any(`<`(e, 0))), NULL), NA_LGL)>);
    goto L10(r28);
  D12():
    deopt 48 [];
  L11():
    goto L12();
  L12():
    sym6 = ldf `is.list`;
    base6 = ldf `is.list` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L57() else L58();
  L50():
    p3 = prom<V +>{
      value9 = ld value;
      value10 = force? value9;
      checkMissing(value10);
      return value10;
    };
    p4 = prom<V +>{
      r31 = clos inner1560918050;
      return r31;
    };
    r33 = dyn vapply(p3, p4, NA_LGL);
    check L51() else D13();
  L53():
    stop = ldf stop;
    check L54() else D15();
  D13():
    deopt 52 [r33];
  D15():
    deopt 56 [];
  L13(r38):
    r40 = `!`(r38);
    c4 = `as.logical`(r40);
    if c4 then L61() else L14();
  L51():
    any = ldf any in base;
    r34 = dyn any(r33);
    check L52() else D14();
  L54():
    r35 = dyn stop("invalid 'value'");
    check L55() else D16();
  L57():
    j1 = ld j;
    check L59() else D17();
  L58():
    r37 = dyn base6(<sym j>);
    goto L13(r37);
  D14():
    deopt 54 [r34];
  D16():
    deopt 58 [r35];
  D17():
    deopt 63 [j1];
  L14():
    goto L16();
  L16():
    Map = ldf Map;
    check L67() else D21();
  L52():
    goto L10(r34);
  L55():
    goto L12();
  L59():
    j2 = force? j1;
    checkMissing(j2);
    is_list1 = ldf `is.list` in base;
    r39 = dyn is_list1(j2);
    check L60() else D18();
  L61():
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L62() else L63();
  D18():
    deopt 66 [r39];
  D21():
    deopt 78 [];
  L15(r42):
    st j = r42;
    goto L16();
  L60():
    goto L13(r39);
  L62():
    j3 = ld j;
    check L64() else D19();
  L63():
    r41 = dyn base7(<sym j>);
    goto L15(r41);
  L67():
    p5 = prom<V +>{
      ___1 = ld `[<-`;
      ___2 = force? ___1;
      checkMissing(___2);
      return ___2;
    };
    p6 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      c5 = `is.object`(y1);
      if c5 then L1() else L2(y1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", y1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(y3):
      i3 = ld i;
      i4 = force? i3;
      __ = ldf `[` in base;
      r46 = dyn __(y3, i4);
      goto L0(r46);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p7 = prom<V +>{
      j5 = ld j;
      j6 = force? j5;
      checkMissing(j6);
      return j6;
    };
    p8 = prom<V +>{
      value11 = ld value;
      value12 = force? value11;
      checkMissing(value12);
      return value12;
    };
    r50 = dyn Map(p5, p6, p7, p8);
    check L68() else D22();
  D19():
    deopt 70 [j3];
  D22():
    deopt 83 [r50];
  L64():
    j4 = force? j3;
    checkMissing(j4);
    list1 = ldf list in base;
    r43 = dyn list1(j4);
    check L65() else D20();
  L68():
    l3 = ld y;
    c6 = `is.object`(l3);
    if c6 then L69() else L70(r50, l3);
  D20():
    deopt 73 [r43];
  L17(r54, dx5):
    st y = dx5;
    goto L5();
  L65():
    goto L15(r43);
  L69():
    dr4 = tryDispatchBuiltin.0("[<-", l3, r50);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L71() else L70(r50, dr4);
  L70(r52, l5):
    i5 = ld i;
    check L72() else D23();
  D23():
    deopt 85 [r52, l5, r50, i5];
  L71():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L17(r50, dx4);
  L72():
    i6 = force? i5;
    ___3 = ldf `[<-` in base;
    r55 = dyn ___3(l5, r50, i6);
    goto L17(r52, r55);
  }
}
fun inner1560918050(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg anyNA:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg e3:*, reg e4:V, reg r5:V, reg any:cls, reg r6:V, reg c6:L, reg c7:V |
    mkenv;
    st e = e;
    sym = ldf anyNA;
    base = ldf anyNA in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L1(c) else L7();
  L3():
    e1 = ld e;
    check L5() else D0();
  L4():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1(c1):
    popenv;
    return c1;
  L5():
    e2 = force? e1;
    checkMissing(e2);
    anyNA = ldf anyNA in base;
    r2 = dyn anyNA(e2);
    check L6() else D1();
  L7():
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    c6 = `as.logical`(r4);
    c7 = `||`(c5, c6);
    goto L1(c7);
  L6():
    goto L0(r2);
  L8():
    e3 = ld e;
    check L10() else D2();
  L9():
    r3 = dyn base1(<lang `<`(e, 0)>);
    goto L2(c, r3);
  D2():
    deopt 8 [c, e3];
  L10():
    e4 = force? e3;
    checkMissing(e4);
    r5 = `<`(e4, 0);
    any = ldf any in base;
    r6 = dyn any(r5);
    check L11() else D3();
  D3():
    deopt 13 [c, r6];
  L11():
    goto L2(c, r6);
  }
}