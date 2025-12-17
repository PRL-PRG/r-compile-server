fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4125693415;
    st `.GenericInPrimitiveMethods` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4125693415(mlist, f) {
  (reg mlist:*, reg f:*) -+> V { var mlist:*, var f:*, reg __:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg methods:*, reg methods1:V, reg r3:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg methods2:*, reg methods3:V, reg c1:L, reg i6:I, reg methods5:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __1:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg i13:I, reg r6:V, reg mi:*, reg mi1:V, reg is_function:cls, reg r7:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg i18:I, reg r9:V, reg substitute:cls, reg r10:V, reg l1:*, reg body__:cls, reg environment:cls, reg mi2:*, reg mi3:V, reg p:p(V +), reg r12:V, reg p1:p(V +), reg r14:V, reg i19:I, reg is:cls, reg mi4:*, reg mi5:V, reg p2:p(V +), reg r17:V, reg c3:L, reg _MlistDefunct:cls, reg r18:V, reg Recall:cls, reg mi6:*, reg mi7:V, reg p3:p(V +), reg f1:*, reg f2:V, reg p4:p(V +), reg r21:V, reg stop:cls, reg sprintf:cls, reg sQuote:cls, reg f3:*, reg f4:V, reg p5:p(V +), reg r23:V, reg p6:p(V +), reg r25:V, reg p7:p(V +), reg r27:V, reg mi8:*, reg mi9:V, reg l2:*, reg c4:L, reg i23:I, reg mi11:V, reg l4:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i25:I, reg dx3:V, reg i26:*, reg i27:V, reg ____:cls, reg r28:V, reg methods6:*, reg methods7:V, reg l5:*, reg ___:cls, reg r29:V, reg mlist1:*, reg mlist2:V |
    mkenv;
    st mlist = mlist;
    st f = f;
    __ = ldf `@` in base;
    r = dyn __(<sym mlist>, <sym methods>);
    st methods = r;
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r2):
    s = toForSeq(r2);
    l = length(s);
    i = 0;
    goto L1(i);
  L10():
    methods = ld methods;
    check L12() else D0();
  L11():
    r1 = dyn base(<sym methods>);
    goto L0(r1);
  D0():
    deopt 4 [methods];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L13() else L9();
  L12():
    methods1 = force? methods;
    checkMissing(methods1);
    r3 = seq_along(methods1);
    goto L0(r3);
  L9():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    methods2 = ld methods;
    check L14() else D1();
  L13():
    methods6 = ld methods;
    check L44() else D17();
  D1():
    deopt 7 [i2, methods2];
  D17():
    deopt 59 [methods6];
  L14():
    methods3 = force? methods2;
    checkMissing(methods3);
    c1 = `is.object`(methods3);
    if c1 then L15() else L16(i2, methods3);
  L44():
    methods7 = force? methods6;
    checkMissing(methods7);
    l5 = ld mlist;
    ___ = ldf `@<-`;
    check L45() else D18();
  D18():
    deopt 62 [methods7, l5, methods7];
  L2(i8, dx1):
    st mi = dx1;
    sym1 = ldf `is.function`;
    base1 = ldf `is.function` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L15():
    dr = tryDispatchBuiltin.1("[[", methods3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(i2, dr);
  L16(i6, methods5):
    i9 = ld i;
    check L18() else D2();
  L45():
    r29 = dyn ___(l5, NULL, "methods", methods7);
    check L46() else D19();
  D2():
    deopt 9 [i6, methods5, i9];
  D19():
    deopt 65 [methods7, r29];
  L3(i13, r6):
    c2 = `as.logical`(r6);
    if c2 then L23() else L4();
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(i2, dx);
  L18():
    i10 = force? i9;
    __1 = ldf `[[` in base;
    r4 = dyn __1(methods5, i10);
    goto L2(i6, r4);
  L19():
    mi = ld mi;
    check L21() else D3();
  L20():
    r5 = dyn base1(<sym mi>);
    goto L3(i8, r5);
  L46():
    st mlist = r29;
    mlist1 = ld mlist;
    check L47() else D20();
  D3():
    deopt 15 [i8, mi];
  D20():
    deopt 67 [mlist1];
  L4():
    is = ldf is;
    check L29() else D7();
  L6(i19):
    mi8 = ld mi;
    check L39() else D15();
  L21():
    mi1 = force? mi;
    checkMissing(mi1);
    is_function = ldf `is.function` in base;
    r7 = dyn is_function(mi1);
    check L22() else D4();
  L23():
    sym2 = ldf substitute;
    base2 = ldf substitute in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L47():
    mlist2 = force? mlist1;
    checkMissing(mlist2);
    popenv;
    return mlist2;
  D4():
    deopt 18 [i8, r7];
  D7():
    deopt 30 [i13];
  D15():
    deopt 49 [i19, mi8];
  L5(i18, r9):
    l1 = ld mi;
    body__ = ldf `body<-`;
    check L26() else D5();
  L22():
    goto L3(i8, r7);
  L24():
    substitute = ldf substitute in base;
    r10 = dyn substitute(<lang {
      `<-`(.Generic, FF);
      BODY
    }>, <lang list(FF=f, BODY=body(mi))>);
    goto L5(i13, r10);
  L25():
    r8 = dyn base2(<lang {
      `<-`(.Generic, FF);
      BODY
    }>, <lang list(FF=f, BODY=body(mi))>);
    goto L5(i13, r8);
  L29():
    p2 = prom<V +>{
      mi4 = ld mi;
      mi5 = force? mi4;
      checkMissing(mi5);
      return mi5;
    };
    r17 = dyn is(p2, "MethodsList");
    check L30() else D8();
  L39():
    mi9 = force? mi8;
    checkMissing(mi9);
    l2 = ld methods;
    c4 = `is.object`(l2);
    if c4 then L40() else L41(i19, mi9, l2);
  D5():
    deopt 23 [i18, r9, l1, r9];
  D8():
    deopt 33 [i13, r17];
  L8(i25, dx3):
    st methods = dx3;
    goto L1(i25);
  L26():
    p1 = prom<V +>{
      environment = ldf environment;
      p = prom<V +>{
        mi2 = ld mi;
        mi3 = force? mi2;
        checkMissing(mi3);
        return mi3;
      };
      r12 = dyn environment(p);
      return r12;
    };
    r14 = dyn body__[, , envir, ](l1, NULL, p1, r9);
    check L27() else D6();
  L30():
    c3 = `as.logical`(r17);
    if c3 then L31() else L7();
  L40():
    dr2 = tryDispatchBuiltin.0("[[<-", l2, mi9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L42() else L41(i19, mi9, dr2);
  L41(i23, mi11, l4):
    i26 = ld i;
    check L43() else D16();
  D6():
    deopt 27 [i18, r9, r14];
  D16():
    deopt 52 [i23, mi11, l4, mi9, i26];
  L7():
    stop = ldf stop;
    check L37() else D13();
  L27():
    st mi = r14;
    goto L6(i18);
  L31():
    _MlistDefunct = ldf `.MlistDefunct`;
    check L32() else D9();
  L42():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(i19, dx2);
  L43():
    i27 = force? i26;
    ____ = ldf `[[<-` in base;
    r28 = dyn ____(l4, mi9, i27);
    goto L8(i23, r28);
  D9():
    deopt 35 [i13];
  D13():
    deopt 44 [i13];
  L32():
    r18 = dyn _MlistDefunct();
    check L33() else D10();
  L37():
    p7 = prom<V +>{
      sprintf = ldf sprintf;
      p6 = prom<V +>{
        sQuote = ldf sQuote;
        p5 = prom<V +>{
          f3 = ld f;
          f4 = force? f3;
          checkMissing(f4);
          return f4;
        };
        r23 = dyn sQuote(p5);
        return r23;
      };
      r25 = dyn sprintf("internal error: Bad methods list object in fixing methods for primitive function %s", p6);
      return r25;
    };
    r27 = dyn stop[, domain](p7, NA_LGL);
    check L38() else D14();
  D10():
    deopt 36 [i13, r18];
  D14():
    deopt 48 [i13, r27];
  L33():
    Recall = ldf Recall;
    check L34() else D11();
  L38():
    goto L6(i13);
  D11():
    deopt 38 [i13];
  L34():
    p3 = prom<V +>{
      mi6 = ld mi;
      mi7 = force? mi6;
      checkMissing(mi7);
      return mi7;
    };
    p4 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r21 = dyn Recall(p3, p4);
    check L35() else D12();
  D12():
    deopt 41 [i13, r21];
  L35():
    st mi = r21;
    goto L6(i13);
  }
}