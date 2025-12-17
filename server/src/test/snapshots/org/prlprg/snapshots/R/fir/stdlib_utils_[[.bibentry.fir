fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3886051477;
    st `[[.bibentry` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3886051477(x, i, j) {
  (reg x:*, reg i:*, reg j:*) -+> V { var x:*, var i:*, var j:*, reg _bibentry_seq_along:cls, reg x1:*, reg x2:V, reg p:p(V +), reg i1:*, reg i2:V, reg p1:p(V +), reg r2:V, reg s:*, reg s1:V, reg c:L, reg s3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i3:*, reg i4:V, reg __:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg unclass:cls, reg r6:V, reg c1:L, reg r8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i5:*, reg i6:V, reg __1:cls, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg missing:cls, reg r12:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg y:*, reg y1:V, reg list:cls, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg x5:*, reg x6:V, reg class:cls, reg r18:V, reg l:*, reg class__:cls, reg r19:V, reg stopifnot:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg j1:*, reg j2:V, reg c3:L, reg p2:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg j3:*, reg j4:V, reg length:cls, reg r26:V, reg r27:V, reg p3:p(V +), reg r29:V, reg _in_:cls, reg j5:*, reg j6:V, reg p4:p(V +), reg bibentry_attribute_names:*, reg bibentry_attribute_names1:V, reg p5:p(V +), reg r32:V, reg c4:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg y2:*, reg y3:V, reg j7:*, reg j8:V, reg attr:cls, reg r35:V, reg r36:V, reg y4:*, reg y5:V, reg c5:L, reg y7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg tolower:cls, reg j9:*, reg j10:V, reg p6:p(V +), reg r38:V, reg __2:cls, reg r39:V, reg y8:*, reg y9:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    _bibentry_seq_along = ldf `.bibentry_seq_along`;
    check L11() else D0();
  D0():
    deopt 1 [];
  L11():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      i1 = ld i;
      i2 = force? i1;
      checkMissing(i2);
      return i2;
    };
    r2 = dyn _bibentry_seq_along(p, p1);
    check L12() else D1();
  D1():
    deopt 4 [r2];
  L12():
    st s = r2;
    s = ld s;
    check L13() else D2();
  D2():
    deopt 6 [s];
  L13():
    s1 = force? s;
    checkMissing(s1);
    c = `is.object`(s1);
    if c then L14() else L15(s1);
  L0(dx1):
    st i = dx1;
    sym = ldf unclass;
    base = ldf unclass in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L14():
    dr = tryDispatchBuiltin.1("[[", s1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(s3):
    i3 = ld i;
    check L17() else D3();
  D3():
    deopt 8 [s3, i3];
  L1(r5):
    c1 = `is.object`(r5);
    if c1 then L22() else L23(r5);
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L17():
    i4 = force? i3;
    __ = ldf `[[` in base;
    r3 = dyn __(s3, i4);
    goto L0(r3);
  L18():
    x3 = ld x;
    check L20() else D4();
  L19():
    r4 = dyn base(<sym x>);
    goto L1(r4);
  D4():
    deopt 14 [x3];
  L2(dx3):
    st y = dx3;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L20():
    x4 = force? x3;
    checkMissing(x4);
    unclass = ldf unclass in base;
    r6 = dyn unclass(x4);
    check L21() else D5();
  L22():
    dr2 = tryDispatchBuiltin.1("[[", r5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L24() else L23(dr2);
  L23(r8):
    i5 = ld i;
    check L25() else D6();
  D5():
    deopt 17 [r6];
  D6():
    deopt 18 [r8, i5];
  L3(r11):
    c2 = `as.logical`(r11);
    if c2 then L28() else L4();
  L21():
    goto L1(r6);
  L24():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L25():
    i6 = force? i5;
    __1 = ldf `[[` in base;
    r9 = dyn __1(r8, i6);
    goto L2(r9);
  L26():
    missing = ldf missing in base;
    r12 = dyn missing(<sym j>);
    goto L3(r12);
  L27():
    r10 = dyn base1(<sym j>);
    goto L3(r10);
  L4():
    stopifnot = ldf stopifnot;
    check L40() else D13();
  L7():
    y8 = ld y;
    check L57() else D23();
  L28():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  D13():
    deopt 44 [];
  D23():
    deopt 69 [y8];
  L5(r14):
    st y = r14;
    sym3 = ldf class;
    base3 = ldf class in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L29():
    y = ld y;
    check L31() else D7();
  L30():
    r13 = dyn base2(<sym y>);
    goto L5(r13);
  L40():
    p2 = prom<V +>{
      sym4 = ldf `is.character`;
      base4 = ldf `is.character` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      j1 = ld j;
      j2 = force? j1;
      checkMissing(j2);
      c3 = `is.character`(j2);
      goto L0(c3);
    L2():
      r21 = dyn base4(<sym j>);
      goto L0(r21);
    };
    p3 = prom<V +>{
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r25):
      r27 = `==`(r25, 1);
      return r27;
    L1():
      j3 = ld j;
      j4 = force? j3;
      checkMissing(j4);
      length = ldf length in base;
      r26 = dyn length(j4);
      goto L0(r26);
    L2():
      r24 = dyn base5(<sym j>);
      goto L0(r24);
    };
    r29 = dyn stopifnot(p2, p3);
    check L41() else D14();
  L57():
    y9 = force? y8;
    checkMissing(y9);
    popenv;
    return y9;
  D7():
    deopt 27 [y];
  D14():
    deopt 47 [r29];
  L6(r17):
    l = ld y;
    class__ = ldf `class<-`;
    check L37() else D11();
  L31():
    y1 = force? y;
    checkMissing(y1);
    list = ldf list in base;
    r15 = dyn list(y1);
    check L32() else D8();
  L33():
    x5 = ld x;
    check L35() else D9();
  L34():
    r16 = dyn base3(<sym x>);
    goto L6(r16);
  L41():
    _in_ = ldf `%in%`;
    check L42() else D15();
  D8():
    deopt 30 [r15];
  D9():
    deopt 34 [x5];
  D11():
    deopt 39 [r17, l, r17];
  D15():
    deopt 49 [];
  L32():
    goto L5(r15);
  L35():
    x6 = force? x5;
    checkMissing(x6);
    class = ldf class in base;
    r18 = dyn class(x6);
    check L36() else D10();
  L37():
    r19 = dyn class__(l, NULL, r17);
    check L38() else D12();
  L42():
    p4 = prom<V +>{
      j5 = ld j;
      j6 = force? j5;
      checkMissing(j6);
      return j6;
    };
    p5 = prom<V +>{
      bibentry_attribute_names = ld bibentry_attribute_names;
      bibentry_attribute_names1 = force? bibentry_attribute_names;
      checkMissing(bibentry_attribute_names1);
      return bibentry_attribute_names1;
    };
    r32 = dyn _in_(p4, p5);
    check L43() else D16();
  D10():
    deopt 37 [r18];
  D12():
    deopt 41 [r17, r19];
  D16():
    deopt 52 [r32];
  L36():
    goto L6(r18);
  L38():
    st y = r19;
    goto L7();
  L43():
    c4 = `as.logical`(r32);
    if c4 then L44() else L8();
  L8():
    y4 = ld y;
    check L51() else D20();
  L10(r36):
    st y = r36;
    goto L7();
  L44():
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L45() else L46();
  D20():
    deopt 61 [y4];
  L9(r34):
    goto L10(r34);
  L45():
    y2 = ld y;
    check L47() else D17();
  L46():
    r33 = dyn base6(<sym y>, <sym j>);
    goto L9(r33);
  L51():
    y5 = force? y4;
    checkMissing(y5);
    c5 = `is.object`(y5);
    if c5 then L52() else L53(y5);
  D17():
    deopt 55 [y2];
  L47():
    y3 = force? y2;
    checkMissing(y3);
    j7 = ld j;
    check L48() else D18();
  L52():
    dr4 = tryDispatchBuiltin.1("[[", y5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L54() else L53(dr4);
  L53(y7):
    tolower = ldf tolower;
    check L55() else D21();
  D18():
    deopt 57 [j7];
  D21():
    deopt 64 [y7];
  L48():
    j8 = force? j7;
    checkMissing(j8);
    attr = ldf attr in base;
    r35 = dyn attr(y3, j8);
    check L49() else D19();
  L54():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(dx4);
  L55():
    p6 = prom<V +>{
      j9 = ld j;
      j10 = force? j9;
      checkMissing(j10);
      return j10;
    };
    r38 = dyn tolower(p6);
    check L56() else D22();
  D19():
    deopt 60 [r35];
  D22():
    deopt 66 [y7, r38];
  L49():
    goto L9(r35);
  L56():
    __2 = ldf `[[` in base;
    r39 = dyn __2(y7, r38);
    goto L10(r39);
  }
}