fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.Rd_get_equations_from_Rd` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg _Rd_find_nodes_with_tags:cls, reg x1:*, reg x2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg y:*, reg y1:V, reg length:cls, reg r8:V, reg r9:V, reg c1:L, reg matrix:cls, reg character:cls, reg r10:V, reg p2:p(V +), reg r12:V, reg lapply:cls, reg y2:*, reg y3:V, reg p3:p(V +), reg r16:cls, reg p4:p(V +), reg r18:V, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p5:p(V +), reg z:*, reg z1:V, reg p6:p(V +), reg r21:V |
    mkenv;
    st x = x;
    _Rd_find_nodes_with_tags = ldf `.Rd_find_nodes_with_tags`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("\\eqn", "\\deqn");
      goto L0(r3);
    L2():
      r1 = dyn base("\\eqn", "\\deqn");
      goto L0(r1);
    };
    r5 = dyn _Rd_find_nodes_with_tags(p, p1);
    check L4() else D1();
  D1():
    deopt 4 [r5];
  L4():
    st y = r5;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L0(r7):
    r9 = `!`(r7);
    c1 = `as.logical`(r9);
    if c1 then L9() else L1();
  L5():
    y = ld y;
    check L7() else D2();
  L6():
    r6 = dyn base1(<sym y>);
    goto L0(r6);
  D2():
    deopt 8 [y];
  L1():
    lapply = ldf lapply;
    check L14() else D6();
  L7():
    y1 = force? y;
    checkMissing(y1);
    length = ldf length in base;
    r8 = dyn length(y1);
    check L8() else D3();
  L9():
    matrix = ldf matrix;
    check L10() else D4();
  D3():
    deopt 11 [r8];
  D4():
    deopt 14 [];
  D6():
    deopt 23 [];
  L8():
    goto L0(r8);
  L10():
    p2 = prom<V +>{
      character = ldf character;
      r10 = dyn character();
      return r10;
    };
    r12 = dyn matrix(p2, 0, 5);
    check L11() else D5();
  L14():
    p3 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p4 = prom<V +>{
      r16 = clos inner3708401697;
      return r16;
    };
    r18 = dyn lapply(p3, p4);
    check L15() else D7();
  D5():
    deopt 18 [r12];
  D7():
    deopt 26 [r18];
  L11():
    popenv;
    return r12;
  L15():
    st z = r18;
    do_call = ldf `do.call`;
    check L16() else D8();
  D8():
    deopt 29 [];
  L16():
    p5 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p6 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    r21 = dyn do_call(p5, p6);
    check L17() else D9();
  D9():
    deopt 32 [r21];
  L17():
    popenv;
    return r21;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg e1:*, reg e2:V, reg attr:cls, reg r4:V, reg _Rd_deparse:cls, reg e3:*, reg e4:V, reg c:L, reg e6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg p:p(V +), reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg e7:*, reg e8:V, reg length:cls, reg r10:V, reg r11:V, reg c1:L, reg trimws:cls, reg _Rd_deparse1:cls, reg e9:*, reg e10:V, reg c2:L, reg e12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg p2:p(V +), reg r16:V, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg e13:*, reg e14:V, reg attr1:cls, reg r22:V, reg c3:V, reg r23:V, reg c4:L, reg loc:*, reg loc1:V, reg c5:L, reg loc3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg loc6:V, reg r25:V, reg c6:cls, reg r26:V, reg __2:cls, reg r27:V, reg dx6:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg rep_int:cls, reg r29:V, reg c7:cls, reg r30:V |
    mkenv;
    st e = e;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r1):
    popenv;
    return r1;
  L11():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L12():
    r = dyn base(<lang attr(e, "Rd_tag")>, <lang .Rd_deparse(`[[`(e, 1), tag=FALSE)>, <lang if(`>`(length(e), 1), trimws(.Rd_deparse(`[[`(e, 2), tag=FALSE)), NA_STR)>, <lang if(`!`(is.null(`<-`(loc, attr(e, "srcref")))), `[`(loc, c(1, 3)), rep.int(NA_STR, 2))>);
    goto L0(r);
  L1(r3):
    _Rd_deparse = ldf `.Rd_deparse`;
    check L17() else D2();
  L13():
    e1 = ld e;
    check L15() else D0();
  L14():
    r2 = dyn base1(<sym e>, "Rd_tag");
    goto L1(r2);
  D0():
    deopt 4 [e1];
  D2():
    deopt 10 [];
  L15():
    e2 = force? e1;
    checkMissing(e2);
    attr = ldf attr in base;
    r4 = dyn attr(e2, "Rd_tag");
    check L16() else D1();
  L17():
    p = prom<V +>{
      e3 = ld e;
      e4 = force? e3;
      checkMissing(e4);
      c = `is.object`(e4);
      if c then L1() else L2(e4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", e4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(e6):
      __ = ldf `[[` in base;
      r5 = dyn __(e6, 1);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r7 = dyn _Rd_deparse[, tag](p, FALSE);
    check L18() else D3();
  D1():
    deopt 8 [r4];
  D3():
    deopt 14 [r7];
  L16():
    goto L1(r4);
  L18():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L2(r9):
    r11 = `>`(r9, 1);
    c1 = `as.logical`(r11);
    if c1 then L23() else L3();
  L19():
    e7 = ld e;
    check L21() else D4();
  L20():
    r8 = dyn base2(<sym e>);
    goto L2(r8);
  D4():
    deopt 17 [e7];
  L3():
    goto L4(NA_STR);
  L4(r17):
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L21():
    e8 = force? e7;
    checkMissing(e8);
    length = ldf length in base;
    r10 = dyn length(e8);
    check L22() else D5();
  L23():
    trimws = ldf trimws;
    check L24() else D6();
  D5():
    deopt 20 [r10];
  D6():
    deopt 24 [];
  L5(r19):
    r23 = `!`(r19);
    c4 = `as.logical`(r23);
    if c4 then L33() else L7();
  L22():
    goto L2(r10);
  L24():
    p2 = prom<V +>{
      _Rd_deparse1 = ldf `.Rd_deparse`;
      p1 = prom<V +>{
        e9 = ld e;
        e10 = force? e9;
        checkMissing(e10);
        c2 = `is.object`(e10);
        if c2 then L1() else L2(e10);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[[", e10);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(e12):
        __1 = ldf `[[` in base;
        r12 = dyn __1(e12, 2);
        goto L0(r12);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r14 = dyn _Rd_deparse1[, tag](p1, FALSE);
      return r14;
    };
    r16 = dyn trimws(p2);
    check L25() else D7();
  L27():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L29() else L30();
  L28():
    r18 = dyn base3(<lang `<-`(loc, attr(e, "srcref"))>);
    goto L5(r18);
  D7():
    deopt 26 [r16];
  L6(r21):
    st loc = r21;
    c3 = `==`(r21, NULL);
    goto L5(c3);
  L7():
    sym6 = ldf `rep.int`;
    base6 = ldf `rep.int` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L42() else L43();
  L10(dx6):
    c7 = ldf c in base;
    r30 = dyn c7(r3, r7, r17, dx6);
    check L45() else D13();
  L25():
    goto L4(r16);
  L29():
    e13 = ld e;
    check L31() else D8();
  L30():
    r20 = dyn base4(<sym e>, "srcref");
    goto L6(r20);
  L33():
    loc = ld loc;
    check L34() else D10();
  D8():
    deopt 32 [e13];
  D10():
    deopt 40 [loc];
  D13():
    deopt 56 [r30];
  L31():
    e14 = force? e13;
    checkMissing(e14);
    attr1 = ldf attr in base;
    r22 = dyn attr1(e14, "srcref");
    check L32() else D9();
  L34():
    loc1 = force? loc;
    checkMissing(loc1);
    c5 = `is.object`(loc1);
    if c5 then L35() else L36(loc1);
  L42():
    rep_int = ldf `rep.int` in base;
    r29 = dyn rep_int(NA_STR, 2);
    check L44() else D12();
  L43():
    r28 = dyn base6(NA_STR, 2);
    goto L10(r28);
  L45():
    goto L0(r30);
  D9():
    deopt 36 [r22];
  D12():
    deopt 54 [r29];
  L8(dx5):
    goto L10(dx5);
  L32():
    goto L6(r22);
  L35():
    dr4 = tryDispatchBuiltin.1("[", loc1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L37() else L36(dr4);
  L36(loc3):
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L38() else L39();
  L44():
    goto L10(r29);
  L9(loc6, r25):
    __2 = ldf `[` in base;
    r27 = dyn __2(loc6, r25);
    goto L8(r27);
  L37():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L8(dx4);
  L38():
    c6 = ldf c in base;
    r26 = dyn c6(1, 3);
    check L40() else D11();
  L39():
    r24 = dyn base5(1, 3);
    goto L9(loc3, r24);
  D11():
    deopt 47 [loc3, r26];
  L40():
    goto L9(loc3, r26);
  }
}