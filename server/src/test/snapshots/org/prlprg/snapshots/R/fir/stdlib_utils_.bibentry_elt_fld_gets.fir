fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1464805129;
    st `.bibentry_elt_fld_gets` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1464805129(x, j, v, a) {
  (reg x:*, reg j:*, reg v:*, reg a:*) -+> V { var x:*, var j:*, var v:*, var a:*, reg a1:*, reg a2:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg v1:*, reg v2:V, reg c1:V, reg c2:L, reg r2:V, reg paste:cls, reg v3:*, reg v4:V, reg p:p(V +), reg r4:V, reg l:*, reg attr__:cls, reg j1:*, reg j2:V, reg p1:p(V +), reg r6:V, reg tolower:cls, reg j3:*, reg j4:V, reg p2:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg v5:*, reg v6:V, reg c3:V, reg c4:L, reg r12:V, reg _in_:cls, reg j5:*, reg j6:V, reg p3:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg c5:cls, reg r16:V, reg p4:p(V +), reg r18:V, reg c6:L, reg as_person:cls, reg v7:*, reg v8:V, reg p5:p(V +), reg r20:V, reg paste1:cls, reg v9:*, reg v10:V, reg p6:p(V +), reg r22:V, reg l1:*, reg c7:L, reg r24:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg r26:V, reg dx1:V, reg j7:*, reg j8:V, reg ____:cls, reg r27:V, reg _bibentry_check_bibentry1:cls, reg x1:*, reg x2:V, reg p7:p(V +), reg r29:V, reg x3:*, reg x4:V |
    mkenv;
    st x = x;
    st j = j;
    st v = v;
    st a = a;
    a1 = ld a;
    check L10() else D0();
  D0():
    deopt 0 [a1];
  L10():
    a2 = force? a1;
    checkMissing(a2);
    c = `as.logical`(a2);
    if c then L11() else L0();
  L0():
    tolower = ldf tolower;
    check L22() else D6();
  L4():
    _bibentry_check_bibentry1 = ldf `.bibentry_check_bibentry1`;
    check L41() else D16();
  L11():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  D6():
    deopt 19 [];
  D16():
    deopt 48 [];
  L1(r1):
    c2 = `as.logical`(r1);
    if c2 then L15() else L2();
  L12():
    v1 = ld v;
    check L14() else D1();
  L13():
    r = dyn base(<sym v>);
    goto L1(r);
  L22():
    p2 = prom<V +>{
      j3 = ld j;
      j4 = force? j3;
      checkMissing(j4);
      return j4;
    };
    r9 = dyn tolower(p2);
    check L23() else D7();
  L41():
    p7 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r29 = dyn _bibentry_check_bibentry1(p7);
    check L42() else D17();
  D1():
    deopt 3 [v1];
  D7():
    deopt 21 [r9];
  D17():
    deopt 50 [r29];
  L2():
    paste = ldf paste;
    check L17() else D2();
  L3(r2):
    l = ld x;
    attr__ = ldf `attr<-`;
    check L19() else D4();
  L14():
    v2 = force? v1;
    checkMissing(v2);
    c1 = `==`(v2, NULL);
    goto L1(c1);
  L15():
    goto L3(NULL);
  L23():
    st j = r9;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L42():
    x3 = ld x;
    check L43() else D18();
  D2():
    deopt 9 [];
  D4():
    deopt 13 [r2, l, r2];
  D18():
    deopt 51 [x3];
  L5(r11):
    c4 = `as.logical`(r11);
    if c4 then L27() else L6();
  L17():
    p = prom<V +>{
      v3 = ld v;
      v4 = force? v3;
      checkMissing(v4);
      return v4;
    };
    r4 = dyn paste(p);
    check L18() else D3();
  L19():
    p1 = prom<V +>{
      j1 = ld j;
      j2 = force? j1;
      checkMissing(j2);
      return j2;
    };
    r6 = dyn attr__(l, NULL, p1, r2);
    check L20() else D5();
  L24():
    v5 = ld v;
    check L26() else D8();
  L25():
    r10 = dyn base1(<sym v>);
    goto L5(r10);
  L43():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  D3():
    deopt 11 [r4];
  D5():
    deopt 16 [r2, r6];
  D8():
    deopt 24 [v5];
  L6():
    _in_ = ldf `%in%`;
    check L29() else D9();
  L7(r12):
    l1 = ld x;
    c7 = `is.object`(l1);
    if c7 then L37() else L38(r12, l1);
  L18():
    goto L3(r4);
  L20():
    st x = r6;
    goto L4();
  L26():
    v6 = force? v5;
    checkMissing(v6);
    c3 = `==`(v6, NULL);
    goto L5(c3);
  L27():
    goto L7(NULL);
  D9():
    deopt 30 [];
  L9(r26, dx1):
    st x = dx1;
    goto L4();
  L29():
    p3 = prom<V +>{
      j5 = ld j;
      j6 = force? j5;
      checkMissing(j6);
      return j6;
    };
    p4 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      c5 = ldf c in base;
      r16 = dyn c5("author", "editor");
      goto L0(r16);
    L2():
      r14 = dyn base2("author", "editor");
      goto L0(r14);
    };
    r18 = dyn _in_(p3, p4);
    check L30() else D10();
  L37():
    dr = tryDispatchBuiltin.0("[[<-", l1, r12);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L39() else L38(r12, dr);
  L38(r24, l3):
    j7 = ld j;
    check L40() else D15();
  D10():
    deopt 33 [r18];
  D15():
    deopt 43 [r24, l3, r12, j7];
  L30():
    c6 = `as.logical`(r18);
    if c6 then L31() else L8();
  L39():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(r12, dx);
  L40():
    j8 = force? j7;
    ____ = ldf `[[<-` in base;
    r27 = dyn ____(l3, r12, j8);
    goto L9(r24, r27);
  L8():
    paste1 = ldf paste;
    check L35() else D13();
  L31():
    as_person = ldf `as.person`;
    check L32() else D11();
  D11():
    deopt 35 [];
  D13():
    deopt 39 [];
  L32():
    p5 = prom<V +>{
      v7 = ld v;
      v8 = force? v7;
      checkMissing(v8);
      return v8;
    };
    r20 = dyn as_person(p5);
    check L33() else D12();
  L35():
    p6 = prom<V +>{
      v9 = ld v;
      v10 = force? v9;
      checkMissing(v10);
      return v10;
    };
    r22 = dyn paste1(p6);
    check L36() else D14();
  D12():
    deopt 37 [r20];
  D14():
    deopt 41 [r22];
  L33():
    goto L7(r20);
  L36():
    goto L7(r22);
  }
}