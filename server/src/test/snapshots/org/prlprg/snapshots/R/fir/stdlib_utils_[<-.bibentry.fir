fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner650999460;
    st `[<-.bibentry` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner650999460(x, i, j, value) {
  (reg x:*, reg i:*, reg j:*, reg value:*) -+> V { var x:*, var i:*, var j:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg missing:cls, reg r5:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg value1:*, reg value2:V, reg c1:V, reg c2:L, reg r8:V, reg as_bibentry:cls, reg value3:*, reg value4:V, reg p:p(V +), reg r10:V, reg l:*, reg c3:L, reg r12:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg r14:V, reg dx1:V, reg i1:*, reg i2:V, reg ___:cls, reg r15:V, reg stopifnot:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg j1:*, reg j2:V, reg c4:L, reg p1:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg j3:*, reg j4:V, reg length:cls, reg r22:V, reg r23:V, reg p2:p(V +), reg r25:V, reg _bibentry_seq_along:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg i3:*, reg i4:V, reg p4:p(V +), reg r28:V, reg s:*, reg s1:V, reg c5:L, reg s3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i5:*, reg i6:V, reg __:cls, reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg _listify:cls, reg value5:*, reg value6:V, reg p5:p(V +), reg r33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg x5:*, reg x6:V, reg length1:cls, reg r36:V, reg rep_len:cls, reg r37:V, reg j5:*, reg j6:V, reg r38:V, reg c6:L, reg _bibentry_canonicalize_bibtype_value:cls, reg value7:*, reg value8:V, reg p6:p(V +), reg r40:V, reg _in_:cls, reg j7:*, reg j8:V, reg p7:p(V +), reg bibentry_attribute_names:*, reg bibentry_attribute_names1:V, reg p8:p(V +), reg r44:V, reg p9:*, reg p10:V, reg s4:V, reg l3:I, reg i7:I, reg i8:I, reg i9:I, reg c7:L, reg x7:V, reg _bibentry_elt_fld_gets:cls, reg y:*, reg y1:V, reg c8:L, reg y3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i12:*, reg i13:V, reg __1:cls, reg r45:V, reg p11:p(V +), reg j9:*, reg j10:V, reg p12:p(V +), reg value9:*, reg value10:V, reg c9:L, reg value12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i14:*, reg i15:V, reg __2:cls, reg r48:V, reg p13:p(V +), reg a:*, reg a1:V, reg p14:p(V +), reg r51:V, reg l4:*, reg c10:L, reg i17:I, reg r53:V, reg l6:*, reg dr8:V, reg dc4:L, reg dx8:V, reg i19:I, reg dx9:V, reg i20:*, reg i21:V, reg ____:cls, reg r56:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r57:V, reg r58:V, reg x8:*, reg x9:V, reg class:cls, reg r59:V, reg l7:*, reg class__:cls, reg r60:V, reg y4:*, reg y5:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    st value = value;
    sym = ldf unclass;
    base = ldf unclass in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r1):
    st y = r1;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L17():
    x1 = ld x;
    check L19() else D0();
  L18():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    c = `as.logical`(r4);
    if c then L23() else L2();
  L19():
    x2 = force? x1;
    checkMissing(x2);
    unclass = ldf unclass in base;
    r2 = dyn unclass(x2);
    check L20() else D1();
  L21():
    missing = ldf missing in base;
    r5 = dyn missing(<sym j>);
    goto L1(r5);
  L22():
    r3 = dyn base1(<sym j>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  L2():
    stopifnot = ldf stopifnot;
    check L36() else D6();
  L7():
    sym7 = ldf class;
    base7 = ldf class in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L69() else L70();
  L20():
    goto L0(r2);
  L23():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  D6():
    deopt 26 [];
  L3(r7):
    c2 = `as.logical`(r7);
    if c2 then L27() else L4();
  L16(r58):
    l7 = ld y;
    class__ = ldf `class<-`;
    check L73() else D28();
  L24():
    value1 = ld value;
    check L26() else D2();
  L25():
    r6 = dyn base2(<sym value>);
    goto L3(r6);
  L36():
    p1 = prom<V +>{
      sym3 = ldf `is.character`;
      base3 = ldf `is.character` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      j1 = ld j;
      j2 = force? j1;
      checkMissing(j2);
      c4 = `is.character`(j2);
      goto L0(c4);
    L2():
      r17 = dyn base3(<sym j>);
      goto L0(r17);
    };
    p2 = prom<V +>{
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r21):
      r23 = `==`(r21, 1);
      return r23;
    L1():
      j3 = ld j;
      j4 = force? j3;
      checkMissing(j4);
      length = ldf length in base;
      r22 = dyn length(j4);
      goto L0(r22);
    L2():
      r20 = dyn base4(<sym j>);
      goto L0(r20);
    };
    r25 = dyn stopifnot(p1, p2);
    check L37() else D7();
  L69():
    x8 = ld x;
    check L71() else D26();
  L70():
    r57 = dyn base7(<sym x>);
    goto L16(r57);
  D2():
    deopt 11 [value1];
  D7():
    deopt 29 [r25];
  D26():
    deopt 93 [x8];
  D28():
    deopt 98 [r58, l7, r58];
  L4():
    as_bibentry = ldf `as.bibentry`;
    check L29() else D3();
  L5(r8):
    l = ld y;
    c3 = `is.object`(l);
    if c3 then L31() else L32(r8, l);
  L26():
    value2 = force? value1;
    checkMissing(value2);
    c1 = `==`(value2, NULL);
    goto L3(c1);
  L27():
    goto L5(NULL);
  L37():
    _bibentry_seq_along = ldf `.bibentry_seq_along`;
    check L38() else D8();
  L71():
    x9 = force? x8;
    checkMissing(x9);
    class = ldf class in base;
    r59 = dyn class(x9);
    check L72() else D27();
  L73():
    r60 = dyn class__(l7, NULL, r58);
    check L74() else D29();
  D3():
    deopt 17 [];
  D8():
    deopt 31 [];
  D27():
    deopt 96 [r59];
  D29():
    deopt 100 [r58, r60];
  L6(r14, dx1):
    st y = dx1;
    goto L7();
  L29():
    p = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      return value4;
    };
    r10 = dyn as_bibentry(p);
    check L30() else D4();
  L31():
    dr = tryDispatchBuiltin.0("[<-", l, r8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L33() else L32(r8, dr);
  L32(r12, l2):
    i1 = ld i;
    check L34() else D5();
  L38():
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p4 = prom<V +>{
      i3 = ld i;
      i4 = force? i3;
      checkMissing(i4);
      return i4;
    };
    r28 = dyn _bibentry_seq_along(p3, p4);
    check L39() else D9();
  L72():
    goto L16(r59);
  L74():
    st y = r60;
    y4 = ld y;
    check L75() else D30();
  D4():
    deopt 19 [r10];
  D5():
    deopt 21 [r12, l2, r8, i1];
  D9():
    deopt 34 [r28];
  D30():
    deopt 102 [y4];
  L30():
    goto L5(r10);
  L33():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(r8, dx);
  L34():
    i2 = force? i1;
    ___ = ldf `[<-` in base;
    r15 = dyn ___(l2, r8, i2);
    goto L6(r12, r15);
  L39():
    st s = r28;
    s = ld s;
    check L40() else D10();
  L75():
    y5 = force? y4;
    checkMissing(y5);
    popenv;
    return y5;
  D10():
    deopt 36 [s];
  L40():
    s1 = force? s;
    checkMissing(s1);
    c5 = `is.object`(s1);
    if c5 then L41() else L42(s1);
  L8(dx3):
    st p = dx3;
    sym5 = ldf rep_len;
    base5 = ldf rep_len in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L45() else L46();
  L41():
    dr2 = tryDispatchBuiltin.1("[", s1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L43() else L42(dr2);
  L42(s3):
    i5 = ld i;
    check L44() else D11();
  D11():
    deopt 38 [s3, i5];
  L9(r31):
    st value = r31;
    j5 = ld j;
    check L54() else D17();
  L43():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L44():
    i6 = force? i5;
    __ = ldf `[` in base;
    r29 = dyn __(s3, i6);
    goto L8(r29);
  L45():
    _listify = ldf `.listify`;
    check L47() else D12();
  L46():
    r30 = dyn base5(<lang .listify(value)>, <lang length(x)>);
    goto L9(r30);
  D12():
    deopt 45 [];
  D17():
    deopt 57 [j5];
  L47():
    p5 = prom<V +>{
      value5 = ld value;
      value6 = force? value5;
      checkMissing(value6);
      return value6;
    };
    r33 = dyn _listify(p5);
    check L48() else D13();
  L54():
    j6 = force? j5;
    checkMissing(j6);
    r38 = `==`(j6, "bibtype");
    c6 = `as.logical`(r38);
    if c6 then L55() else L11();
  D13():
    deopt 47 [r33];
  L11():
    goto L12();
  L12():
    _in_ = ldf `%in%`;
    check L59() else D20();
  L48():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L49() else L50();
  L55():
    _bibentry_canonicalize_bibtype_value = ldf `.bibentry_canonicalize_bibtype_value`;
    check L56() else D18();
  D18():
    deopt 62 [];
  D20():
    deopt 69 [];
  L10(r35):
    rep_len = ldf rep_len in base;
    r37 = dyn rep_len(r33, r35);
    check L53() else D16();
  L49():
    x5 = ld x;
    check L51() else D14();
  L50():
    r34 = dyn base6(<sym x>);
    goto L10(r34);
  L56():
    p6 = prom<V +>{
      value7 = ld value;
      value8 = force? value7;
      checkMissing(value8);
      return value8;
    };
    r40 = dyn _bibentry_canonicalize_bibtype_value(p6);
    check L57() else D19();
  L59():
    p7 = prom<V +>{
      j7 = ld j;
      j8 = force? j7;
      checkMissing(j8);
      return j8;
    };
    p8 = prom<V +>{
      bibentry_attribute_names = ld bibentry_attribute_names;
      bibentry_attribute_names1 = force? bibentry_attribute_names;
      checkMissing(bibentry_attribute_names1);
      return bibentry_attribute_names1;
    };
    r44 = dyn _in_(p7, p8);
    check L60() else D21();
  D14():
    deopt 50 [x5];
  D16():
    deopt 55 [r37];
  D19():
    deopt 64 [r40];
  D21():
    deopt 72 [r44];
  L51():
    x6 = force? x5;
    checkMissing(x6);
    length1 = ldf length in base;
    r36 = dyn length1(x6);
    check L52() else D15();
  L53():
    goto L9(r37);
  L57():
    st value = r40;
    goto L12();
  L60():
    st a = r44;
    p9 = ld p;
    check L61() else D22();
  D15():
    deopt 53 [r36];
  D22():
    deopt 74 [p9];
  L52():
    goto L10(r36);
  L61():
    p10 = force? p9;
    checkMissing(p10);
    s4 = toForSeq(p10);
    l3 = length(s4);
    i7 = 0;
    goto L13(i7);
  L13(i8):
    i9 = `+`.1(i8, 1);
    c7 = `<`.1(l3, i9);
    if c7 then L62() else L15();
  L15():
    x7 = `[[`(s4, i9, NULL, TRUE);
    st i = x7;
    _bibentry_elt_fld_gets = ldf `.bibentry_elt_fld_gets`;
    check L63() else D23();
  L62():
    goto L7();
  D23():
    deopt 77 [i9];
  L63():
    p11 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      c8 = `is.object`(y1);
      if c8 then L1() else L2(y1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", y1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(y3):
      i12 = ld i;
      i13 = force? i12;
      __1 = ldf `[[` in base;
      r45 = dyn __1(y3, i13);
      goto L0(r45);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p12 = prom<V +>{
      j9 = ld j;
      j10 = force? j9;
      checkMissing(j10);
      return j10;
    };
    p13 = prom<V +>{
      value9 = ld value;
      value10 = force? value9;
      checkMissing(value10);
      c9 = `is.object`(value10);
      if c9 then L1() else L2(value10);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", value10);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(value12):
      i14 = ld i;
      i15 = force? i14;
      __2 = ldf `[[` in base;
      r48 = dyn __2(value12, i15);
      goto L0(r48);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p14 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      return a1;
    };
    r51 = dyn _bibentry_elt_fld_gets(p11, p12, p13, p14);
    check L64() else D24();
  D24():
    deopt 82 [i9, r51];
  L64():
    l4 = ld y;
    c10 = `is.object`(l4);
    if c10 then L65() else L66(i9, r51, l4);
  L14(i19, dx9):
    st y = dx9;
    goto L13(i19);
  L65():
    dr8 = tryDispatchBuiltin.0("[[<-", l4, r51);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L67() else L66(i9, r51, dr8);
  L66(i17, r53, l6):
    i20 = ld i;
    check L68() else D25();
  D25():
    deopt 84 [i17, r53, l6, r51, i20];
  L67():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L14(i9, dx8);
  L68():
    i21 = force? i20;
    ____ = ldf `[[<-` in base;
    r56 = dyn ____(l6, r51, i21);
    goto L14(i17, r56);
  }
}