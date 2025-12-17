fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner650999460;
    st `[<-.person` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner650999460(x, i, j, value) {
  (reg x:*, reg i:*, reg j:*, reg value:*) -+> V { var x:*, var i:*, var j:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg missing:cls, reg r5:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg value1:*, reg value2:V, reg c1:V, reg c2:L, reg r8:V, reg as_person:cls, reg value3:*, reg value4:V, reg p:p(V +), reg r10:V, reg l:*, reg c3:L, reg r12:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg r14:V, reg dx1:V, reg i1:*, reg i2:V, reg ___:cls, reg r15:V, reg match_arg:cls, reg j1:*, reg j2:V, reg p1:p(V +), reg person_field_names:*, reg person_field_names1:V, reg p2:p(V +), reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg x3:*, reg x4:V, reg r22:I, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg missing1:cls, reg r25:V, reg r26:V, reg c4:L, reg c6:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg c9:L, reg r28:V, reg i3:*, reg i4:V, reg c10:L, reg c11:L, reg c12:V, reg c14:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg x5:*, reg x6:V, reg names:cls, reg r31:V, reg l3:*, reg names__:cls, reg r32:V, reg s:*, reg s1:V, reg c15:L, reg s3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i5:*, reg i6:V, reg __:cls, reg r34:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r35:V, reg r36:V, reg value5:*, reg value6:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r37:V, reg r38:V, reg p3:*, reg p4:V, reg length:cls, reg r39:V, reg rep_len:cls, reg r40:V, reg j3:*, reg j4:V, reg r41:V, reg c16:L, reg lapply:cls, reg value7:*, reg value8:V, reg p5:p(V +), reg _canonicalize_person_role:*, reg _canonicalize_person_role1:V, reg p6:p(V +), reg r44:V, reg p7:*, reg p8:V, reg s4:V, reg l4:I, reg i7:I, reg i8:I, reg i9:I, reg c17:L, reg x7:V, reg _person_elt_fld_gets:cls, reg y:*, reg y1:V, reg c18:L, reg y3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i12:*, reg i13:V, reg __1:cls, reg r46:V, reg p9:p(V +), reg j5:*, reg j6:V, reg p10:p(V +), reg value9:*, reg value10:V, reg c19:L, reg value12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i14:*, reg i15:V, reg __2:cls, reg r49:V, reg p11:p(V +), reg r51:V, reg l5:*, reg c20:L, reg i17:I, reg r53:V, reg l7:*, reg dr8:V, reg dc4:L, reg dx8:V, reg i19:I, reg dx9:V, reg i20:*, reg i21:V, reg ____:cls, reg r56:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r57:V, reg r58:V, reg x8:*, reg x9:V, reg class:cls, reg r59:V, reg l8:*, reg class__:cls, reg r60:V, reg y4:*, reg y5:V |
    mkenv;
    st x = x;
    st i = i;
    st j = j;
    st value = value;
    sym = ldf unclass;
    base = ldf unclass in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L0(r1):
    st y = r1;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L24():
    x1 = ld x;
    check L26() else D0();
  L25():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    c = `as.logical`(r4);
    if c then L30() else L2();
  L26():
    x2 = force? x1;
    checkMissing(x2);
    unclass = ldf unclass in base;
    r2 = dyn unclass(x2);
    check L27() else D1();
  L28():
    missing = ldf missing in base;
    r5 = dyn missing(<sym j>);
    goto L1(r5);
  L29():
    r3 = dyn base1(<sym j>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  L2():
    match_arg = ldf `match.arg`;
    check L43() else D6();
  L7():
    sym9 = ldf class;
    base9 = ldf class in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L89() else L90();
  L27():
    goto L0(r2);
  L30():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  D6():
    deopt 26 [];
  L3(r7):
    c2 = `as.logical`(r7);
    if c2 then L34() else L4();
  L23(r58):
    l8 = ld y;
    class__ = ldf `class<-`;
    check L93() else D29();
  L31():
    value1 = ld value;
    check L33() else D2();
  L32():
    r6 = dyn base2(<sym value>);
    goto L3(r6);
  L43():
    p1 = prom<V +>{
      j1 = ld j;
      j2 = force? j1;
      checkMissing(j2);
      return j2;
    };
    p2 = prom<V +>{
      person_field_names = ld person_field_names;
      person_field_names1 = force? person_field_names;
      checkMissing(person_field_names1);
      return person_field_names1;
    };
    r19 = dyn match_arg(p1, p2);
    check L44() else D7();
  L89():
    x8 = ld x;
    check L91() else D27();
  L90():
    r57 = dyn base9(<sym x>);
    goto L23(r57);
  D2():
    deopt 11 [value1];
  D7():
    deopt 29 [r19];
  D27():
    deopt 107 [x8];
  D29():
    deopt 112 [r58, l8, r58];
  L4():
    as_person = ldf `as.person`;
    check L36() else D3();
  L5(r8):
    l = ld y;
    c3 = `is.object`(l);
    if c3 then L38() else L39(r8, l);
  L33():
    value2 = force? value1;
    checkMissing(value2);
    c1 = `==`(value2, NULL);
    goto L3(c1);
  L34():
    goto L5(NULL);
  L44():
    st j = r19;
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  L91():
    x9 = force? x8;
    checkMissing(x9);
    class = ldf class in base;
    r59 = dyn class(x9);
    check L92() else D28();
  L93():
    r60 = dyn class__(l8, NULL, r58);
    check L94() else D30();
  D3():
    deopt 17 [];
  D28():
    deopt 110 [r59];
  D30():
    deopt 114 [r58, r60];
  L6(r14, dx1):
    st y = dx1;
    goto L7();
  L8(r21):
    st s = r21;
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L36():
    p = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      return value4;
    };
    r10 = dyn as_person(p);
    check L37() else D4();
  L38():
    dr = tryDispatchBuiltin.0("[<-", l, r8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L40() else L39(r8, dr);
  L39(r12, l2):
    i1 = ld i;
    check L41() else D5();
  L45():
    x3 = ld x;
    check L47() else D8();
  L46():
    r20 = dyn base3(<sym x>);
    goto L8(r20);
  L92():
    goto L23(r59);
  L94():
    st y = r60;
    y4 = ld y;
    check L95() else D31();
  D4():
    deopt 19 [r10];
  D5():
    deopt 21 [r12, l2, r8, i1];
  D8():
    deopt 32 [x3];
  D31():
    deopt 116 [y4];
  L9(r24):
    r26 = `!`(r24);
    c4 = `as.logical`(r26);
    if c4 then L50() else L10(c4);
  L37():
    goto L5(r10);
  L40():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(r8, dx);
  L41():
    i2 = force? i1;
    ___ = ldf `[<-` in base;
    r15 = dyn ___(l2, r8, i2);
    goto L6(r12, r15);
  L47():
    x4 = force? x3;
    checkMissing(x4);
    r22 = seq_along(x4);
    goto L8(r22);
  L48():
    missing1 = ldf missing in base;
    r25 = dyn missing1(<sym i>);
    goto L9(r25);
  L49():
    r23 = dyn base4(<sym i>);
    goto L9(r23);
  L95():
    y5 = force? y4;
    checkMissing(y5);
    popenv;
    return y5;
  L10(c6):
    c14 = `as.logical`(c6);
    if c14 then L55() else L12();
  L50():
    sym5 = ldf `is.character`;
    base5 = ldf `is.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L51() else L52();
  L11(c9, r28):
    c11 = `as.logical`(r28);
    c12 = `&&`(c9, c11);
    goto L10(c12);
  L12():
    goto L14();
  L14():
    s = ld s;
    check L63() else D14();
  L51():
    i3 = ld i;
    check L53() else D9();
  L52():
    r27 = dyn base5(<sym i>);
    goto L11(c4, r27);
  L55():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L56() else L57();
  D9():
    deopt 41 [c4, i3];
  D14():
    deopt 58 [s];
  L13(r30):
    l3 = ld s;
    names__ = ldf `names<-`;
    check L60() else D12();
  L53():
    i4 = force? i3;
    checkMissing(i4);
    c10 = `is.character`(i4);
    goto L11(c4, c10);
  L56():
    x5 = ld x;
    check L58() else D10();
  L57():
    r29 = dyn base6(<sym x>);
    goto L13(r29);
  L63():
    s1 = force? s;
    checkMissing(s1);
    c15 = `is.object`(s1);
    if c15 then L64() else L65(s1);
  D10():
    deopt 47 [x5];
  D12():
    deopt 52 [r30, l3, r30];
  L15(dx3):
    st p = dx3;
    sym7 = ldf rep_len;
    base7 = ldf rep_len in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L68() else L69();
  L58():
    x6 = force? x5;
    checkMissing(x6);
    names = ldf names in base;
    r31 = dyn names(x6);
    check L59() else D11();
  L60():
    r32 = dyn names__(l3, NULL, r30);
    check L61() else D13();
  L64():
    dr2 = tryDispatchBuiltin.1("[", s1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L66() else L65(dr2);
  L65(s3):
    i5 = ld i;
    check L67() else D15();
  D11():
    deopt 50 [r31];
  D13():
    deopt 54 [r30, r32];
  D15():
    deopt 60 [s3, i5];
  L16(r36):
    st value = r36;
    j3 = ld j;
    check L76() else D20();
  L59():
    goto L13(r31);
  L61():
    st s = r32;
    goto L14();
  L66():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx2);
  L67():
    i6 = force? i5;
    __ = ldf `[` in base;
    r34 = dyn __(s3, i6);
    goto L15(r34);
  L68():
    value5 = ld value;
    check L70() else D16();
  L69():
    r35 = dyn base7(<sym value>, <lang length(p)>);
    goto L16(r35);
  D16():
    deopt 66 [value5];
  D20():
    deopt 77 [j3];
  L70():
    value6 = force? value5;
    checkMissing(value6);
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L71() else L72();
  L76():
    j4 = force? j3;
    checkMissing(j4);
    r41 = `==`(j4, "role");
    c16 = `as.logical`(r41);
    if c16 then L77() else L18();
  L17(r38):
    rep_len = ldf rep_len in base;
    r40 = dyn rep_len(value6, r38);
    check L75() else D19();
  L18():
    goto L19();
  L19():
    p7 = ld p;
    check L81() else D23();
  L71():
    p3 = ld p;
    check L73() else D17();
  L72():
    r37 = dyn base8(<sym p>);
    goto L17(r37);
  L77():
    lapply = ldf lapply;
    check L78() else D21();
  D17():
    deopt 70 [p3];
  D19():
    deopt 75 [r40];
  D21():
    deopt 82 [];
  D23():
    deopt 89 [p7];
  L73():
    p4 = force? p3;
    checkMissing(p4);
    length = ldf length in base;
    r39 = dyn length(p4);
    check L74() else D18();
  L75():
    goto L16(r40);
  L78():
    p5 = prom<V +>{
      value7 = ld value;
      value8 = force? value7;
      checkMissing(value8);
      return value8;
    };
    p6 = prom<V +>{
      _canonicalize_person_role = ld `.canonicalize_person_role`;
      _canonicalize_person_role1 = force? _canonicalize_person_role;
      checkMissing(_canonicalize_person_role1);
      return _canonicalize_person_role1;
    };
    r44 = dyn lapply(p5, p6);
    check L79() else D22();
  L81():
    p8 = force? p7;
    checkMissing(p8);
    s4 = toForSeq(p8);
    l4 = length(s4);
    i7 = 0;
    goto L20(i7);
  D18():
    deopt 73 [r39];
  D22():
    deopt 85 [r44];
  L20(i8):
    i9 = `+`.1(i8, 1);
    c17 = `<`.1(l4, i9);
    if c17 then L82() else L22();
  L74():
    goto L17(r39);
  L79():
    st value = r44;
    goto L19();
  L22():
    x7 = `[[`(s4, i9, NULL, TRUE);
    st i = x7;
    _person_elt_fld_gets = ldf `.person_elt_fld_gets`;
    check L83() else D24();
  L82():
    goto L7();
  D24():
    deopt 92 [i9];
  L83():
    p9 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      c18 = `is.object`(y1);
      if c18 then L1() else L2(y1);
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
      r46 = dyn __1(y3, i13);
      goto L0(r46);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p10 = prom<V +>{
      j5 = ld j;
      j6 = force? j5;
      checkMissing(j6);
      return j6;
    };
    p11 = prom<V +>{
      value9 = ld value;
      value10 = force? value9;
      checkMissing(value10);
      c19 = `is.object`(value10);
      if c19 then L1() else L2(value10);
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
      r49 = dyn __2(value12, i15);
      goto L0(r49);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r51 = dyn _person_elt_fld_gets(p9, p10, p11);
    check L84() else D25();
  D25():
    deopt 96 [i9, r51];
  L84():
    l5 = ld y;
    c20 = `is.object`(l5);
    if c20 then L85() else L86(i9, r51, l5);
  L21(i19, dx9):
    st y = dx9;
    goto L20(i19);
  L85():
    dr8 = tryDispatchBuiltin.0("[[<-", l5, r51);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L87() else L86(i9, r51, dr8);
  L86(i17, r53, l7):
    i20 = ld i;
    check L88() else D26();
  D26():
    deopt 98 [i17, r53, l7, r51, i20];
  L87():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L21(i9, dx8);
  L88():
    i21 = force? i20;
    ____ = ldf `[[<-` in base;
    r56 = dyn ____(l7, r51, i21);
    goto L21(i17, r56);
  }
}