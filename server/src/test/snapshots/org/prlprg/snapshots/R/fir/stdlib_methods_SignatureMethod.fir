fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner24828451;
    st SignatureMethod = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner24828451(names, signature, definition) {
  (reg names:*, reg signature:*, reg definition:*) -+> V { var names:*, var signature:*, var definition:*, reg _MlistDefunct:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg signature1:*, reg signature2:V, reg length:cls, reg r3:V, reg n:*, reg n1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg n4:V, reg r5:V, reg names1:*, reg names2:V, reg length1:cls, reg r6:V, reg r7:V, reg c:L, reg stop:cls, reg r8:V, reg n5:*, reg n6:V, reg r10:V, reg c1:L, reg definition1:*, reg definition2:V, reg signature3:*, reg signature4:V, reg c2:L, reg signature6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg n7:*, reg n8:V, reg __:cls, reg r13:V, reg names3:*, reg names4:V, reg c3:L, reg names6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg n9:*, reg n10:V, reg __1:cls, reg r14:V, reg MethodsList:cls, reg name:*, reg name1:V, reg p:p(V +), reg r16:V, reg definition3:*, reg definition4:V, reg l:*, reg slot:cls, reg r17:V, reg c4:L, reg definition6:V, reg l2:*, reg r19:V, reg dr4:V, reg dc2:L, reg dx4:V, reg definition8:V, reg l4:*, reg dx5:V, reg Class:*, reg Class1:V, reg ____:cls, reg r20:V, reg slot__:cls, reg r21:V, reg as_name:cls, reg name2:*, reg name3:V, reg p1:p(V +), reg r23:V, reg l5:*, reg slot__1:cls, reg r24:V, reg SignatureMethod:cls, reg names7:*, reg names8:V, reg c5:L, reg names10:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg n11:*, reg n12:V, reg r25:V, reg __2:cls, reg r26:V, reg p2:p(V +), reg signature7:*, reg signature8:V, reg c6:L, reg signature10:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg n13:*, reg n14:V, reg r28:V, reg __3:cls, reg r29:V, reg p3:p(V +), reg m:*, reg m1:V, reg p4:p(V +), reg r32:V |
    mkenv;
    st names = names;
    st signature = signature;
    st definition = definition;
    _MlistDefunct = ldf `.MlistDefunct`;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    r = dyn _MlistDefunct("SignatureMethod()");
    check L10() else D1();
  D1():
    deopt 3 [r];
  L10():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r2):
    st n = r2;
    n = ld n;
    check L15() else D4();
  L11():
    signature1 = ld signature;
    check L13() else D2();
  L12():
    r1 = dyn base(<sym signature>);
    goto L0(r1);
  D2():
    deopt 6 [signature1];
  D4():
    deopt 11 [n];
  L13():
    signature2 = force? signature1;
    checkMissing(signature2);
    length = ldf length in base;
    r3 = dyn length(signature2);
    check L14() else D3();
  L15():
    n1 = force? n;
    checkMissing(n1);
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  D3():
    deopt 9 [r3];
  L1(n4, r5):
    r7 = `>`(n4, r5);
    c = `as.logical`(r7);
    if c then L20() else L2();
  L14():
    goto L0(r3);
  L16():
    names1 = ld names;
    check L18() else D5();
  L17():
    r4 = dyn base1(<sym names>);
    goto L1(n1, r4);
  D5():
    deopt 14 [n1, names1];
  L2():
    goto L3();
  L3():
    n5 = ld n;
    check L24() else D9();
  L18():
    names2 = force? names1;
    checkMissing(names2);
    length1 = ldf length in base;
    r6 = dyn length1(names2);
    check L19() else D6();
  L20():
    stop = ldf stop;
    check L21() else D7();
  D6():
    deopt 17 [n1, r6];
  D7():
    deopt 20 [];
  D9():
    deopt 25 [n5];
  L19():
    goto L1(n1, r6);
  L21():
    r8 = dyn stop("arguments 'names' and 'signature' must have the same length");
    check L22() else D8();
  L24():
    n6 = force? n5;
    checkMissing(n6);
    r10 = `==`(n6, 0.0);
    c1 = `as.logical`(r10);
    if c1 then L25() else L4();
  D8():
    deopt 22 [r8];
  L4():
    signature3 = ld signature;
    check L29() else D11();
  L22():
    goto L3();
  L25():
    definition1 = ld definition;
    check L26() else D10();
  D10():
    deopt 29 [definition1];
  D11():
    deopt 34 [signature3];
  L26():
    definition2 = force? definition1;
    checkMissing(definition2);
    popenv;
    return definition2;
  L29():
    signature4 = force? signature3;
    checkMissing(signature4);
    c2 = `is.object`(signature4);
    if c2 then L30() else L31(signature4);
  L6(dx1):
    st Class = dx1;
    names3 = ld names;
    check L34() else D13();
  L30():
    dr = tryDispatchBuiltin.1("[[", signature4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(dr);
  L31(signature6):
    n7 = ld n;
    check L33() else D12();
  D12():
    deopt 36 [signature6, n7];
  D13():
    deopt 40 [names3];
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L33():
    n8 = force? n7;
    __ = ldf `[[` in base;
    r13 = dyn __(signature6, n8);
    goto L6(r13);
  L34():
    names4 = force? names3;
    checkMissing(names4);
    c3 = `is.object`(names4);
    if c3 then L35() else L36(names4);
  L7(dx3):
    st name = dx3;
    MethodsList = ldf MethodsList;
    check L39() else D15();
  L35():
    dr2 = tryDispatchBuiltin.1("[[", names4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L37() else L36(dr2);
  L36(names6):
    n9 = ld n;
    check L38() else D14();
  D14():
    deopt 42 [names6, n9];
  D15():
    deopt 47 [];
  L37():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L38():
    n10 = force? n9;
    __1 = ldf `[[` in base;
    r14 = dyn __1(names6, n10);
    goto L7(r14);
  L39():
    p = prom<V +>{
      name = ld name;
      name1 = force? name;
      checkMissing(name1);
      return name1;
    };
    r16 = dyn MethodsList(p);
    check L40() else D16();
  D16():
    deopt 49 [r16];
  L40():
    st m = r16;
    definition3 = ld definition;
    check L41() else D17();
  D17():
    deopt 51 [definition3];
  L41():
    definition4 = force? definition3;
    checkMissing(definition4);
    l = ld m;
    slot = ldf slot;
    check L42() else D18();
  D18():
    deopt 54 [definition4, l, definition4];
  L42():
    r17 = dyn slot(definition4, NULL, "methods");
    check L43() else D19();
  D19():
    deopt 57 [definition4, l, definition4, r17];
  L43():
    c4 = `is.object`(r17);
    if c4 then L44() else L45(definition4, l, r17);
  L8(definition8, l4, dx5):
    slot__ = ldf `slot<-`;
    check L48() else D21();
  L44():
    dr4 = tryDispatchBuiltin.0("[[<-", r17, definition4);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L46() else L45(definition4, l, dr4);
  L45(definition6, l2, r19):
    Class = ld Class;
    check L47() else D20();
  D20():
    deopt 59 [definition6, l2, r19, definition4, Class];
  D21():
    deopt 62 [definition8, l4, dx5];
  L46():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L8(definition4, l, dx4);
  L47():
    Class1 = force? Class;
    ____ = ldf `[[<-` in base;
    r20 = dyn ____(r19, definition4, Class1);
    goto L8(definition6, l2, r20);
  L48():
    r21 = dyn slot__(l4, NULL, "methods", dx5);
    check L49() else D22();
  D22():
    deopt 65 [definition8, r21];
  L49():
    st m = r21;
    as_name = ldf `as.name`;
    check L50() else D23();
  D23():
    deopt 68 [];
  L50():
    p1 = prom<V +>{
      name2 = ld name;
      name3 = force? name2;
      checkMissing(name3);
      return name3;
    };
    r23 = dyn as_name(p1);
    check L51() else D24();
  D24():
    deopt 70 [r23];
  L51():
    l5 = ld m;
    slot__1 = ldf `slot<-`;
    check L52() else D25();
  D25():
    deopt 72 [r23, l5, r23];
  L52():
    r24 = dyn slot__1(l5, NULL, "argument", r23);
    check L53() else D26();
  D26():
    deopt 75 [r23, r24];
  L53():
    st m = r24;
    SignatureMethod = ldf SignatureMethod;
    check L54() else D27();
  D27():
    deopt 78 [];
  L54():
    p2 = prom<V +>{
      names7 = ld names;
      names8 = force? names7;
      checkMissing(names8);
      c5 = `is.object`(names8);
      if c5 then L1() else L2(names8);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", names8);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(names10):
      n11 = ld n;
      n12 = force? n11;
      checkMissing(n12);
      r25 = `-`(<missing>, n12);
      __2 = ldf `[` in base;
      r26 = dyn __2(names10, r25);
      goto L0(r26);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p3 = prom<V +>{
      signature7 = ld signature;
      signature8 = force? signature7;
      checkMissing(signature8);
      c6 = `is.object`(signature8);
      if c6 then L1() else L2(signature8);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", signature8);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(signature10):
      n13 = ld n;
      n14 = force? n13;
      checkMissing(n14);
      r28 = `-`(<missing>, n14);
      __3 = ldf `[` in base;
      r29 = dyn __3(signature10, r28);
      goto L0(r29);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p4 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r32 = dyn SignatureMethod(p2, p3, p4);
    check L55() else D28();
  D28():
    deopt 82 [r32];
  L55():
    popenv;
    return r32;
  }
}