fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner650999460;
    st `[[<-.bibentry` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner650999460(x, i, j, value) {
  (reg x:*, reg i:*, reg j:*, reg value:*) -+> V { var x:*, var i:*, var j:*, var value:*, reg _bibentry_seq_along:cls, reg x1:*, reg x2:V, reg p:p(V +), reg i1:*, reg i2:V, reg p1:p(V +), reg r2:V, reg s:*, reg s1:V, reg c:L, reg s3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i3:*, reg i4:V, reg __:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg unclass:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg missing:cls, reg r9:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg value1:*, reg value2:V, reg c2:V, reg c3:L, reg r12:V, reg as_bibentry:cls, reg value3:*, reg value4:V, reg p2:p(V +), reg r14:V, reg l:*, reg c4:L, reg r16:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r18:V, reg dx3:V, reg i5:*, reg i6:V, reg ___:cls, reg r19:V, reg stopifnot:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg j1:*, reg j2:V, reg c5:L, reg p3:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg j3:*, reg j4:V, reg length:cls, reg r26:V, reg r27:V, reg p4:p(V +), reg r29:V, reg j5:*, reg j6:V, reg r30:V, reg c6:L, reg _bibentry_canonicalize_bibtype_value:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg value5:*, reg value6:V, reg list:cls, reg r33:V, reg p5:p(V +), reg r35:V, reg c7:L, reg r37:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r38:V, reg _in_:cls, reg j7:*, reg j8:V, reg p6:p(V +), reg bibentry_attribute_names:*, reg bibentry_attribute_names1:V, reg p7:p(V +), reg r41:V, reg _bibentry_elt_fld_gets:cls, reg y:*, reg y1:V, reg c8:L, reg y3:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg i7:*, reg i8:V, reg __2:cls, reg r42:V, reg p8:p(V +), reg j9:*, reg j10:V, reg p9:p(V +), reg value7:*, reg value8:V, reg p10:p(V +), reg a:*, reg a1:V, reg p11:p(V +), reg r47:V, reg l3:*, reg c9:L, reg r49:V, reg l5:*, reg dr8:V, reg dc4:L, reg dx9:V, reg r51:V, reg dx10:V, reg i9:*, reg i10:V, reg ____:cls, reg r52:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r53:V, reg r54:V, reg x5:*, reg x6:V, reg class:cls, reg r55:V, reg l6:*, reg class__:cls, reg r56:V, reg y4:*, reg y5:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    st value = value;
    _bibentry_seq_along = ldf `.bibentry_seq_along`;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
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
    check L15() else D1();
  D1():
    deopt 4 [r2];
  L15():
    st s = r2;
    s = ld s;
    check L16() else D2();
  D2():
    deopt 6 [s];
  L16():
    s1 = force? s;
    checkMissing(s1);
    c = `is.object`(s1);
    if c then L17() else L18(s1);
  L0(dx1):
    st i = dx1;
    sym = ldf unclass;
    base = ldf unclass in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L17():
    dr = tryDispatchBuiltin.1("[[", s1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(s3):
    i3 = ld i;
    check L20() else D3();
  D3():
    deopt 8 [s3, i3];
  L1(r5):
    st y = r5;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L20():
    i4 = force? i3;
    __ = ldf `[[` in base;
    r3 = dyn __(s3, i4);
    goto L0(r3);
  L21():
    x3 = ld x;
    check L23() else D4();
  L22():
    r4 = dyn base(<sym x>);
    goto L1(r4);
  D4():
    deopt 14 [x3];
  L2(r8):
    c1 = `as.logical`(r8);
    if c1 then L27() else L3();
  L23():
    x4 = force? x3;
    checkMissing(x4);
    unclass = ldf unclass in base;
    r6 = dyn unclass(x4);
    check L24() else D5();
  L25():
    missing = ldf missing in base;
    r9 = dyn missing(<sym j>);
    goto L2(r9);
  L26():
    r7 = dyn base1(<sym j>);
    goto L2(r7);
  D5():
    deopt 17 [r6];
  L3():
    stopifnot = ldf stopifnot;
    check L40() else D10();
  L8():
    sym6 = ldf class;
    base6 = ldf class in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L58() else L59();
  L24():
    goto L1(r6);
  L27():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  D10():
    deopt 38 [];
  L4(r11):
    c3 = `as.logical`(r11);
    if c3 then L31() else L5();
  L13(r54):
    l6 = ld y;
    class__ = ldf `class<-`;
    check L62() else D22();
  L28():
    value1 = ld value;
    check L30() else D6();
  L29():
    r10 = dyn base2(<sym value>);
    goto L4(r10);
  L40():
    p3 = prom<V +>{
      sym3 = ldf `is.character`;
      base3 = ldf `is.character` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      j1 = ld j;
      j2 = force? j1;
      checkMissing(j2);
      c5 = `is.character`(j2);
      goto L0(c5);
    L2():
      r21 = dyn base3(<sym j>);
      goto L0(r21);
    };
    p4 = prom<V +>{
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
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
      r24 = dyn base4(<sym j>);
      goto L0(r24);
    };
    r29 = dyn stopifnot(p3, p4);
    check L41() else D11();
  L58():
    x5 = ld x;
    check L60() else D20();
  L59():
    r53 = dyn base6(<sym x>);
    goto L13(r53);
  D6():
    deopt 23 [value1];
  D11():
    deopt 41 [r29];
  D20():
    deopt 76 [x5];
  D22():
    deopt 81 [r54, l6, r54];
  L5():
    as_bibentry = ldf `as.bibentry`;
    check L33() else D7();
  L6(r12):
    l = ld y;
    c4 = `is.object`(l);
    if c4 then L35() else L36(r12, l);
  L30():
    value2 = force? value1;
    checkMissing(value2);
    c2 = `==`(value2, NULL);
    goto L4(c2);
  L31():
    goto L6(NULL);
  L41():
    j5 = ld j;
    check L42() else D12();
  L60():
    x6 = force? x5;
    checkMissing(x6);
    class = ldf class in base;
    r55 = dyn class(x6);
    check L61() else D21();
  L62():
    r56 = dyn class__(l6, NULL, r54);
    check L63() else D23();
  D7():
    deopt 29 [];
  D12():
    deopt 42 [j5];
  D21():
    deopt 79 [r55];
  D23():
    deopt 83 [r54, r56];
  L7(r18, dx3):
    st y = dx3;
    goto L8();
  L33():
    p2 = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      return value4;
    };
    r14 = dyn as_bibentry(p2);
    check L34() else D8();
  L35():
    dr2 = tryDispatchBuiltin.0("[<-", l, r12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L37() else L36(r12, dr2);
  L36(r16, l2):
    i5 = ld i;
    check L38() else D9();
  L42():
    j6 = force? j5;
    checkMissing(j6);
    r30 = `==`(j6, "bibtype");
    c6 = `as.logical`(r30);
    if c6 then L43() else L9();
  L61():
    goto L13(r55);
  L63():
    st y = r56;
    y4 = ld y;
    check L64() else D24();
  D8():
    deopt 31 [r14];
  D9():
    deopt 33 [r16, l2, r12, i5];
  D24():
    deopt 85 [y4];
  L9():
    goto L11();
  L11():
    _in_ = ldf `%in%`;
    check L50() else D15();
  L34():
    goto L6(r14);
  L37():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(r12, dx2);
  L38():
    i6 = force? i5;
    ___ = ldf `[<-` in base;
    r19 = dyn ___(l2, r12, i6);
    goto L7(r16, r19);
  L43():
    _bibentry_canonicalize_bibtype_value = ldf `.bibentry_canonicalize_bibtype_value`;
    check L44() else D13();
  L64():
    y5 = force? y4;
    checkMissing(y5);
    popenv;
    return y5;
  D13():
    deopt 47 [];
  D15():
    deopt 57 [];
  L44():
    p5 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      value5 = ld value;
      value6 = force? value5;
      checkMissing(value6);
      list = ldf list in base;
      r33 = dyn list(value6);
      goto L0(r33);
    L2():
      r31 = dyn base5(<sym value>);
      goto L0(r31);
    };
    r35 = dyn _bibentry_canonicalize_bibtype_value(p5);
    check L45() else D14();
  L50():
    p6 = prom<V +>{
      j7 = ld j;
      j8 = force? j7;
      checkMissing(j8);
      return j8;
    };
    p7 = prom<V +>{
      bibentry_attribute_names = ld bibentry_attribute_names;
      bibentry_attribute_names1 = force? bibentry_attribute_names;
      checkMissing(bibentry_attribute_names1);
      return bibentry_attribute_names1;
    };
    r41 = dyn _in_(p6, p7);
    check L51() else D16();
  D14():
    deopt 49 [r35];
  D16():
    deopt 60 [r41];
  L45():
    c7 = `is.object`(r35);
    if c7 then L46() else L47(r35);
  L51():
    st a = r41;
    _bibentry_elt_fld_gets = ldf `.bibentry_elt_fld_gets`;
    check L52() else D17();
  D17():
    deopt 63 [];
  L10(dx5):
    st value = dx5;
    goto L11();
  L46():
    dr4 = tryDispatchBuiltin.1("[[", r35);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L48() else L47(dr4);
  L47(r37):
    __1 = ldf `[[` in base;
    r38 = dyn __1(r37, 1);
    goto L10(r38);
  L52():
    p8 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      c8 = `is.object`(y1);
      if c8 then L1() else L2(y1);
    L0(dx8):
      return dx8;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", y1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(y3):
      i7 = ld i;
      i8 = force? i7;
      __2 = ldf `[[` in base;
      r42 = dyn __2(y3, i8);
      goto L0(r42);
    L3():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx7);
    };
    p9 = prom<V +>{
      j9 = ld j;
      j10 = force? j9;
      checkMissing(j10);
      return j10;
    };
    p10 = prom<V +>{
      value7 = ld value;
      value8 = force? value7;
      checkMissing(value8);
      return value8;
    };
    p11 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      return a1;
    };
    r47 = dyn _bibentry_elt_fld_gets(p8, p9, p10, p11);
    check L53() else D18();
  D18():
    deopt 68 [r47];
  L48():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(dx4);
  L53():
    l3 = ld y;
    c9 = `is.object`(l3);
    if c9 then L54() else L55(r47, l3);
  L12(r51, dx10):
    st y = dx10;
    goto L8();
  L54():
    dr8 = tryDispatchBuiltin.0("[[<-", l3, r47);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L56() else L55(r47, dr8);
  L55(r49, l5):
    i9 = ld i;
    check L57() else D19();
  D19():
    deopt 70 [r49, l5, r47, i9];
  L56():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L12(r47, dx9);
  L57():
    i10 = force? i9;
    ____ = ldf `[[<-` in base;
    r52 = dyn ____(l5, r47, i10);
    goto L12(r49, r52);
  }
}