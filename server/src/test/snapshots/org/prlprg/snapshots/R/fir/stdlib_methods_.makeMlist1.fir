fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3742933374;
    st `.makeMlist1` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3742933374(arg, objects, j) {
  (reg arg:*, reg objects:*, reg j:*) -+> V { var arg:*, var objects:*, var j:*, reg j_isMissing:L, reg j_orDefault:*, reg _MlistDefunct:cls, reg r:V, reg character:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg objects1:*, reg objects2:V, reg length:cls, reg r3:V, reg p:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg objects3:*, reg objects4:V, reg r8:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg objects5:*, reg objects6:V, reg c1:L, reg i6:I, reg objects8:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r9:V, reg is_primitive:cls, reg what:*, reg what1:V, reg p1:p(V +), reg r11:V, reg c2:L, reg i13:I, reg __1:cls, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg i16:I, reg r15:V, reg sig:*, reg sig1:V, reg length1:cls, reg r16:V, reg j1:*, reg j2:V, reg r17:V, reg c3:L, reg i19:I, reg r18:V, reg sig2:*, reg sig3:V, reg c4:L, reg i21:I, reg sig5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg j3:*, reg j4:V, reg __2:cls, reg r19:V, reg l1:*, reg c5:L, reg i24:I, reg r21:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx3:V, reg i26:I, reg dx4:V, reg i27:*, reg i28:V, reg ____:cls, reg r24:V, reg mnames:*, reg mnames1:V, reg l4:*, reg names__:cls, reg r25:V, reg new:cls, reg arg1:*, reg arg2:V, reg p2:p(V +), reg objects9:*, reg objects10:V, reg p3:p(V +), reg objects11:*, reg objects12:V, reg p4:p(V +), reg r29:V |
    mkenv;
    st arg = arg;
    st objects = objects;
    j_isMissing = missing.0(j);
    if j_isMissing then L0(1.0) else L0(j);
  L0(j_orDefault):
    st j = j_orDefault;
    _MlistDefunct = ldf `.MlistDefunct`;
    check L11() else D0();
  D0():
    deopt 1 [];
  L11():
    r = dyn _MlistDefunct(".makeMlist1()");
    check L12() else D1();
  D1():
    deopt 3 [r];
  L12():
    character = ldf character;
    check L13() else D2();
  D2():
    deopt 5 [];
  L13():
    p = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      objects1 = ld objects;
      objects2 = force? objects1;
      checkMissing(objects2);
      length = ldf length in base;
      r3 = dyn length(objects2);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym objects>);
      goto L0(r1);
    };
    r5 = dyn character(p);
    check L14() else D3();
  D3():
    deopt 7 [r5];
  L14():
    st mnames = r5;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L1(r7):
    s = toForSeq(r7);
    l = length(s);
    i = 0;
    goto L2(i);
  L15():
    objects3 = ld objects;
    check L17() else D4();
  L16():
    r6 = dyn base1(<sym objects>);
    goto L1(r6);
  D4():
    deopt 10 [objects3];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L18() else L10();
  L17():
    objects4 = force? objects3;
    checkMissing(objects4);
    r8 = seq_along(objects4);
    goto L1(r8);
  L10():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    objects5 = ld objects;
    check L19() else D5();
  L18():
    mnames = ld mnames;
    check L44() else D15();
  D5():
    deopt 13 [i2, objects5];
  D15():
    deopt 52 [mnames];
  L19():
    objects6 = force? objects5;
    checkMissing(objects6);
    c1 = `is.object`(objects6);
    if c1 then L20() else L21(i2, objects6);
  L44():
    mnames1 = force? mnames;
    checkMissing(mnames1);
    l4 = ld objects;
    names__ = ldf `names<-`;
    check L45() else D16();
  D16():
    deopt 55 [mnames1, l4, mnames1];
  L3(i8, dx1):
    st what = dx1;
    is_primitive = ldf `is.primitive`;
    check L24() else D7();
  L20():
    dr = tryDispatchBuiltin.1("[[", objects6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(i2, dr);
  L21(i6, objects8):
    i9 = ld i;
    check L23() else D6();
  L45():
    r25 = dyn names__(l4, NULL, mnames1);
    check L46() else D17();
  D6():
    deopt 15 [i6, objects8, i9];
  D7():
    deopt 20 [i8];
  D17():
    deopt 57 [mnames1, r25];
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(i2, dx);
  L23():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r9 = dyn __(objects8, i10);
    goto L3(i6, r9);
  L24():
    p1 = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    r11 = dyn is_primitive(p1);
    check L25() else D8();
  L46():
    st objects = r25;
    new = ldf new;
    check L47() else D18();
  D8():
    deopt 22 [i8, r11];
  D18():
    deopt 60 [];
  L25():
    c2 = `as.logical`(r11);
    if c2 then L26() else L4();
  L47():
    p2 = prom<V +>{
      arg1 = ld arg;
      arg2 = force? arg1;
      checkMissing(arg2);
      return arg2;
    };
    p3 = prom<V +>{
      objects9 = ld objects;
      objects10 = force? objects9;
      checkMissing(objects10);
      return objects10;
    };
    p4 = prom<V +>{
      objects11 = ld objects;
      objects12 = force? objects11;
      checkMissing(objects12);
      return objects12;
    };
    r29 = dyn new[, argument, methods, allMethods]("MethodsList", p2, p3, p4);
    check L48() else D19();
  D19():
    deopt 68 [r29];
  L4():
    __1 = ldf `@` in base;
    r13 = dyn __1(<sym what>, <sym defined>);
    st sig = r13;
    goto L5(i8);
  L5(i13):
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L26():
    st sig = "ANY";
    goto L5(i8);
  L48():
    popenv;
    return r29;
  L6(i16, r15):
    j1 = ld j;
    check L32() else D11();
  L28():
    sig = ld sig;
    check L30() else D9();
  L29():
    r14 = dyn base2(<sym sig>);
    goto L6(i13, r14);
  D9():
    deopt 31 [i13, sig];
  D11():
    deopt 34 [i16, r15, j1];
  L30():
    sig1 = force? sig;
    checkMissing(sig1);
    length1 = ldf length in base;
    r16 = dyn length1(sig1);
    check L31() else D10();
  L32():
    j2 = force? j1;
    checkMissing(j2);
    r17 = `<`(r15, j2);
    c3 = `as.logical`(r17);
    if c3 then L33() else L7();
  D10():
    deopt 34 [i13, r16];
  L7():
    sig2 = ld sig;
    check L35() else D12();
  L8(i19, r18):
    l1 = ld mnames;
    c5 = `is.object`(l1);
    if c5 then L40() else L41(i19, r18, l1);
  L31():
    goto L6(i13, r16);
  L33():
    goto L8(i16, "ANY");
  D12():
    deopt 39 [i16, sig2];
  L9(i26, dx4):
    st mnames = dx4;
    goto L2(i26);
  L35():
    sig3 = force? sig2;
    checkMissing(sig3);
    c4 = `is.object`(sig3);
    if c4 then L36() else L37(i16, sig3);
  L40():
    dr4 = tryDispatchBuiltin.0("[[<-", l1, r18);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L42() else L41(i19, r18, dr4);
  L41(i24, r21, l3):
    i27 = ld i;
    check L43() else D14();
  D14():
    deopt 45 [i24, r21, l3, r18, i27];
  L36():
    dr2 = tryDispatchBuiltin.1("[[", sig3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L38() else L37(i16, dr2);
  L37(i21, sig5):
    j3 = ld j;
    check L39() else D13();
  L42():
    dx3 = getTryDispatchBuiltinValue(dr4);
    goto L9(i19, dx3);
  L43():
    i28 = force? i27;
    ____ = ldf `[[<-` in base;
    r24 = dyn ____(l3, r18, i28);
    goto L9(i24, r24);
  D13():
    deopt 41 [i21, sig5, j3];
  L38():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(i16, dx2);
  L39():
    j4 = force? j3;
    __2 = ldf `[[` in base;
    r19 = dyn __2(sig5, j4);
    goto L8(i21, r19);
  }
}