fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1250467081;
    st `erase.screen` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1250467081(n) {
  (reg n:*) -+> V { var n:*, reg n_isMissing:L, reg n_orDefault:*, reg cur_screen:*, reg cur_screen1:V, reg p:p(V +), reg _SSexists:cls, reg r1:V, reg r2:V, reg c:L, reg _SSget:cls, reg r5:V, reg _in_:cls, reg n1:*, reg n2:V, reg p1:p(V +), reg _SSget1:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg r10:V, reg c1:L, reg c3:V, reg n3:*, reg n4:V, reg r11:V, reg c4:L, reg c5:V, reg c7:L, reg stop:cls, reg r12:V, reg par:cls, reg sym:cls, reg base:cls, reg guard:L, reg r14:V, reg r15:V, reg c8:cls, reg r16:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg c9:cls, reg r20:V, reg p4:p(V +), reg n5:*, reg n6:V, reg r22:V, reg c10:L, reg _SSget2:cls, reg r23:V, reg c11:L, reg r25:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg n7:*, reg n8:V, reg __:cls, reg r26:V, reg c12:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg r27:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg c13:cls, reg r30:V, reg p5:p(V +), reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg on_exit:cls, reg r35:V, reg par1:cls, reg r36:V, reg plot_new:cls, reg r37:V, reg polygon:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg r39:V, reg c14:cls, reg r40:V, reg p6:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg c15:cls, reg r44:V, reg p7:p(V +), reg r46:V, reg par2:cls, reg r47:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg r49:V, reg invisible:cls, reg r50:V |
    mkenv;
    n_isMissing = missing.0(n);
    if n_isMissing then L0() else L1(n);
  L0():
    p = prom<V +>{
      cur_screen = ld `cur.screen`;
      cur_screen1 = force? cur_screen;
      checkMissing(cur_screen1);
      return cur_screen1;
    };
    goto L1(p);
  L1(n_orDefault):
    st n = n_orDefault;
    _SSexists = ldf `.SSexists`;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    r1 = dyn _SSexists("sp.screens");
    check L10() else D1();
  D1():
    deopt 3 [r1];
  L10():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L11() else L2();
  L2():
    _SSget = ldf `.SSget`;
    check L14() else D2();
  L11():
    popenv;
    return FALSE;
  D2():
    deopt 11 [];
  L14():
    r5 = dyn _SSget("sp.cur.screen");
    check L15() else D3();
  D3():
    deopt 13 [r5];
  L15():
    st `cur.screen` = r5;
    _in_ = ldf `%in%`;
    check L16() else D4();
  D4():
    deopt 16 [];
  L16():
    p1 = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    p2 = prom<V +>{
      _SSget1 = ldf `.SSget`;
      r7 = dyn _SSget1("sp.valid.screens");
      return r7;
    };
    r9 = dyn _in_(p1, p2);
    check L17() else D5();
  D5():
    deopt 19 [r9];
  L17():
    r10 = `!`(r9);
    c1 = `as.logical`(r10);
    if c1 then L18() else L4(c1);
  L4(c3):
    c7 = `as.logical`(c3);
    if c7 then L21() else L5();
  L18():
    n3 = ld n;
    check L19() else D6();
  D6():
    deopt 21 [c1, n3];
  L5():
    goto L6();
  L6():
    par = ldf par;
    check L25() else D9();
  L19():
    n4 = force? n3;
    checkMissing(n4);
    r11 = `!=`(n4, 0.0);
    c4 = `as.logical`(r11);
    c5 = `&&`(c1, c4);
    goto L4(c5);
  L21():
    stop = ldf stop;
    check L22() else D7();
  D7():
    deopt 27 [];
  D9():
    deopt 33 [];
  L22():
    r12 = dyn stop("invalid screen number");
    check L23() else D8();
  L25():
    p3 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r15):
      return r15;
    L1():
      c8 = ldf c in base;
      r16 = dyn c8(0.0, 1.0, 0.0, 1.0);
      goto L0(r16);
    L2():
      r14 = dyn base(0.0, 1.0, 0.0, 1.0);
      goto L0(r14);
    };
    p4 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      c9 = ldf c in base;
      r20 = dyn c9(0.0, 0.0, 0.0, 0.0);
      goto L0(r20);
    L2():
      r18 = dyn base1(0.0, 0.0, 0.0, 0.0);
      goto L0(r18);
    };
    p5 = prom<V +>{
      n5 = ld n;
      n6 = force? n5;
      checkMissing(n6);
      r22 = `>`(n6, 0.0);
      c10 = `as.logical`(r22);
      if c10 then L3() else L0();
    L0():
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L12() else L13();
    L3():
      _SSget2 = ldf `.SSget`;
      r23 = dyn _SSget2("sp.screens");
      c11 = `is.object`(r23);
      if c11 then L4() else L5(r23);
    L1(dx1):
      c12 = `is.object`(dx1);
      if c12 then L8() else L9(dx1);
    L2(r29):
      return r29;
    L4():
      dr = tryDispatchBuiltin.1("[[", r23);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(r25):
      n7 = ld n;
      n8 = force? n7;
      __ = ldf `[[` in base;
      r26 = dyn __(r25, n8);
      goto L1(r26);
    L12():
      c13 = ldf c in base;
      r30 = dyn c13(0.0, 1.0, 0.0, 1.0);
      goto L2(r30);
    L13():
      r28 = dyn base2(0.0, 1.0, 0.0, 1.0);
      goto L2(r28);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L7(dx5):
      return dx5;
    L8():
      dr2 = tryDispatchBuiltin.1("$", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L10() else L9(dr2);
    L9(dx3):
      r27 = `$`(dx3, <sym fig>);
      goto L7(r27);
    L10():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L7(dx4);
    };
    r32 = dyn par[usr, mar, fig, xaxs, yaxs](p3, p4, p5, "i", "i");
    check L26() else D10();
  D8():
    deopt 29 [r12];
  D10():
    deopt 44 [r32];
  L23():
    goto L6();
  L26():
    st old = r32;
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L7():
    par1 = ldf par;
    check L29() else D11();
  L27():
    on_exit = ldf `on.exit` in base;
    r35 = dyn on_exit(<lang par(old)>);
    goto L7();
  L28():
    r33 = dyn base3(<lang par(old)>);
    goto L7();
  D11():
    deopt 50 [];
  L29():
    r36 = dyn par1[new](TRUE);
    check L30() else D12();
  D12():
    deopt 53 [r36];
  L30():
    plot_new = ldf `plot.new`;
    check L31() else D13();
  D13():
    deopt 55 [];
  L31():
    r37 = dyn plot_new();
    check L32() else D14();
  D14():
    deopt 56 [r37];
  L32():
    polygon = ldf polygon;
    check L33() else D15();
  D15():
    deopt 58 [];
  L33():
    p6 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r39):
      return r39;
    L1():
      c14 = ldf c in base;
      r40 = dyn c14(0.0, 1.0, 1.0, 0.0);
      goto L0(r40);
    L2():
      r38 = dyn base4(0.0, 1.0, 1.0, 0.0);
      goto L0(r38);
    };
    p7 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r43):
      return r43;
    L1():
      c15 = ldf c in base;
      r44 = dyn c15(0.0, 0.0, 1.0, 1.0);
      goto L0(r44);
    L2():
      r42 = dyn base5(0.0, 0.0, 1.0, 1.0);
      goto L0(r42);
    };
    r46 = dyn polygon[, , border, col](p6, p7, NA_LGL, 0.0);
    check L34() else D16();
  D16():
    deopt 65 [r46];
  L34():
    par2 = ldf par;
    check L35() else D17();
  D17():
    deopt 67 [];
  L35():
    r47 = dyn par2[new](TRUE);
    check L36() else D18();
  D18():
    deopt 70 [r47];
  L36():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L37() else L38();
  L8(r49):
    popenv;
    return r49;
  L37():
    invisible = ldf invisible in base;
    r50 = dyn invisible();
    check L39() else D19();
  L38():
    r48 = dyn base6();
    goto L8(r48);
  D19():
    deopt 74 [r50];
  L39():
    goto L8(r50);
  }
}