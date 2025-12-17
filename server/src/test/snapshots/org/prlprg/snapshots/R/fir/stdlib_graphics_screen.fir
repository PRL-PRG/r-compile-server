fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg interactive:cls, reg r3:V, reg c:L, reg par:cls, reg r4:V, reg split_screen:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c1:cls, reg r7:V, reg p:p(V +), reg r9:V, reg split_screen1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg c2:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg screen:cls, reg r15:V, reg plot:cls, reg p2:p(V +), reg r17:V, reg screen1:cls, reg r18:V, reg plot1:cls, reg p3:p(V +), reg r20:V, reg close_screen:cls, reg r21:V, reg split_screen2:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg c3:cls, reg r24:V, reg p4:p(V +), reg r26:V, reg split_screen3:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg c4:cls, reg r29:V, reg p5:p(V +), reg r31:V, reg plot2:cls, reg p6:p(V +), reg r33:V, reg erase_screen:cls, reg r34:V, reg plot3:cls, reg p7:p(V +), reg r36:V, reg screen2:cls, reg r37:V, reg plot4:cls, reg p8:p(V +), reg r39:V, reg screen3:cls, reg r40:V, reg plot5:cls, reg p9:p(V +), reg r42:V, reg screen4:cls, reg r43:V, reg plot6:cls, reg p10:p(V +), reg r45:V, reg axis:cls, reg r46:V, reg title:cls, reg r47:V, reg close_screen1:cls, reg r48:V |
    mkenv;
    r = clos inner2340813864;
    st screen = r;
    sym = ldf interactive;
    base = ldf interactive in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r2):
    c = `as.logical`(r2);
    if c then L5() else L1();
  L2():
    interactive = ldf interactive in base;
    r3 = dyn interactive();
    check L4() else D0();
  L3():
    r1 = dyn base();
    goto L0(r1);
  D0():
    deopt 6 [r3];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L4():
    goto L0(r3);
  L5():
    par = ldf par;
    check L6() else D1();
  D1():
    deopt 8 [];
  L6():
    r4 = dyn par[bg]("white");
    check L7() else D2();
  D2():
    deopt 11 [r4];
  L7():
    split_screen = ldf `split.screen`;
    check L8() else D3();
  D3():
    deopt 13 [];
  L8():
    p = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c1 = ldf c in base;
      r7 = dyn c1(2.0, 1.0);
      goto L0(r7);
    L2():
      r5 = dyn base1(2.0, 1.0);
      goto L0(r5);
    };
    r9 = dyn split_screen(p);
    check L9() else D4();
  D4():
    deopt 15 [r9];
  L9():
    split_screen1 = ldf `split.screen`;
    check L10() else D5();
  D5():
    deopt 17 [];
  L10():
    p1 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      c2 = ldf c in base;
      r12 = dyn c2(1.0, 3.0);
      goto L0(r12);
    L2():
      r10 = dyn base2(1.0, 3.0);
      goto L0(r10);
    };
    r14 = dyn split_screen1[, screen](p1, 2.0);
    check L11() else D6();
  D6():
    deopt 21 [r14];
  L11():
    screen = ldf screen;
    check L12() else D7();
  D7():
    deopt 23 [];
  L12():
    r15 = dyn screen(1.0);
    check L13() else D8();
  D8():
    deopt 25 [r15];
  L13():
    plot = ldf plot;
    check L14() else D9();
  D9():
    deopt 27 [];
  L14():
    p2 = prom<V +>{
      return <int 10, 9, 8, 7, 6, 5, 4, 3, 2, 1>;
    };
    r17 = dyn plot(p2);
    check L15() else D10();
  D10():
    deopt 29 [r17];
  L15():
    screen1 = ldf screen;
    check L16() else D11();
  D11():
    deopt 31 [];
  L16():
    r18 = dyn screen1(4.0);
    check L17() else D12();
  D12():
    deopt 33 [r18];
  L17():
    plot1 = ldf plot;
    check L18() else D13();
  D13():
    deopt 35 [];
  L18():
    p3 = prom<V +>{
      return <int 10, 9, 8, 7, 6, 5, 4, 3, 2, 1>;
    };
    r20 = dyn plot1(p3);
    check L19() else D14();
  D14():
    deopt 37 [r20];
  L19():
    close_screen = ldf `close.screen`;
    check L20() else D15();
  D15():
    deopt 39 [];
  L20():
    r21 = dyn close_screen[all](TRUE);
    check L21() else D16();
  D16():
    deopt 42 [r21];
  L21():
    split_screen2 = ldf `split.screen`;
    check L22() else D17();
  D17():
    deopt 44 [];
  L22():
    p4 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      c3 = ldf c in base;
      r24 = dyn c3(2.0, 1.0);
      goto L0(r24);
    L2():
      r22 = dyn base3(2.0, 1.0);
      goto L0(r22);
    };
    r26 = dyn split_screen2(p4);
    check L23() else D18();
  D18():
    deopt 46 [r26];
  L23():
    split_screen3 = ldf `split.screen`;
    check L24() else D19();
  D19():
    deopt 48 [];
  L24():
    p5 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      c4 = ldf c in base;
      r29 = dyn c4(1.0, 2.0);
      goto L0(r29);
    L2():
      r27 = dyn base4(1.0, 2.0);
      goto L0(r27);
    };
    r31 = dyn split_screen3(p5, 2.0);
    check L25() else D20();
  D20():
    deopt 51 [r31];
  L25():
    plot2 = ldf plot;
    check L26() else D21();
  D21():
    deopt 53 [];
  L26():
    p6 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    r33 = dyn plot2(p6);
    check L27() else D22();
  D22():
    deopt 55 [r33];
  L27():
    erase_screen = ldf `erase.screen`;
    check L28() else D23();
  D23():
    deopt 57 [];
  L28():
    r34 = dyn erase_screen();
    check L29() else D24();
  D24():
    deopt 58 [r34];
  L29():
    plot3 = ldf plot;
    check L30() else D25();
  D25():
    deopt 60 [];
  L30():
    p7 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    r36 = dyn plot3[, ylab](p7, "ylab 3");
    check L31() else D26();
  D26():
    deopt 64 [r36];
  L31():
    screen2 = ldf screen;
    check L32() else D27();
  D27():
    deopt 66 [];
  L32():
    r37 = dyn screen2(1.0);
    check L33() else D28();
  D28():
    deopt 68 [r37];
  L33():
    plot4 = ldf plot;
    check L34() else D29();
  D29():
    deopt 70 [];
  L34():
    p8 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    r39 = dyn plot4(p8);
    check L35() else D30();
  D30():
    deopt 72 [r39];
  L35():
    screen3 = ldf screen;
    check L36() else D31();
  D31():
    deopt 74 [];
  L36():
    r40 = dyn screen3(4.0);
    check L37() else D32();
  D32():
    deopt 76 [r40];
  L37():
    plot5 = ldf plot;
    check L38() else D33();
  D33():
    deopt 78 [];
  L38():
    p9 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    r42 = dyn plot5[, ylab](p9, "ylab 4");
    check L39() else D34();
  D34():
    deopt 82 [r42];
  L39():
    screen4 = ldf screen;
    check L40() else D35();
  D35():
    deopt 84 [];
  L40():
    r43 = dyn screen4(1.0, FALSE);
    check L41() else D36();
  D36():
    deopt 87 [r43];
  L41():
    plot6 = ldf plot;
    check L42() else D37();
  D37():
    deopt 89 [];
  L42():
    p10 = prom<V +>{
      return <int 10, 9, 8, 7, 6, 5, 4, 3, 2, 1>;
    };
    r45 = dyn plot6[, axes, lty, ylab](p10, FALSE, 2.0, "");
    check L43() else D38();
  D38():
    deopt 97 [r45];
  L43():
    axis = ldf axis;
    check L44() else D39();
  D39():
    deopt 99 [];
  L44():
    r46 = dyn axis(4.0);
    check L45() else D40();
  D40():
    deopt 101 [r46];
  L45():
    title = ldf title;
    check L46() else D41();
  D41():
    deopt 103 [];
  L46():
    r47 = dyn title("Plot 1");
    check L47() else D42();
  D42():
    deopt 105 [r47];
  L47():
    close_screen1 = ldf `close.screen`;
    check L48() else D43();
  D43():
    deopt 107 [];
  L48():
    r48 = dyn close_screen1[all](TRUE);
    check L49() else D44();
  D44():
    deopt 110 [r48];
  L49():
    popenv;
    return r48;
  }
}
fun inner2340813864(n, new) {
  (reg n:*, reg new:*) -+> V { var n:*, reg n_isMissing:L, reg n_orDefault:*, reg cur_screen:*, reg cur_screen1:V, reg p:p(V +), var new:*, reg new_isMissing:L, reg new_orDefault:*, reg _SSexists:cls, reg r1:V, reg r2:V, reg c:L, reg _SSget:cls, reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg missing:cls, reg r8:V, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg c6:L, reg r10:V, reg missing1:cls, reg r11:V, reg c7:L, reg c8:V, reg c10:L, reg cur_screen2:*, reg cur_screen3:V, reg _in_:cls, reg n1:*, reg n2:V, reg p1:p(V +), reg _SSget1:cls, reg r15:V, reg p2:p(V +), reg r17:V, reg r18:V, reg c11:L, reg stop:cls, reg r19:V, reg _SSget2:cls, reg r21:V, reg par:cls, reg _SSenv:*, reg _SSenv1:V, reg c12:L, reg _SSenv3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r22:V, reg p3:p(V +), reg r24:V, reg l:*, reg c13:L, reg r26:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg cur_screen4:*, reg cur_screen5:V, reg ____:cls, reg r29:V, reg _SSassign:cls, reg split_screens:*, reg split_screens1:V, reg p4:p(V +), reg r31:V, reg _SSassign1:cls, reg n3:*, reg n4:V, reg p5:p(V +), reg r33:V, reg par1:cls, reg split_screens2:*, reg split_screens3:V, reg c14:L, reg split_screens5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg n5:*, reg n6:V, reg __:cls, reg r34:V, reg p6:p(V +), reg r36:V, reg new1:*, reg new2:V, reg c15:L, reg erase_screen:cls, reg n7:*, reg n8:V, reg p7:p(V +), reg r38:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r40:V, reg r41:V, reg n9:*, reg n10:V, reg invisible:cls, reg r42:V |
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
    new_isMissing = missing.0(new);
    if new_isMissing then L2(TRUE) else L2(new);
  L2(new_orDefault):
    st new = new_orDefault;
    _SSexists = ldf `.SSexists`;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
    r1 = dyn _SSexists("sp.screens");
    check L17() else D1();
  D1():
    deopt 3 [r1];
  L17():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L18() else L3();
  L3():
    _SSget = ldf `.SSget`;
    check L21() else D2();
  L18():
    popenv;
    return FALSE;
  D2():
    deopt 11 [];
  L21():
    r5 = dyn _SSget("sp.cur.screen");
    check L22() else D3();
  D3():
    deopt 13 [r5];
  L22():
    st `cur.screen` = r5;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L5(r7):
    c1 = `as.logical`(r7);
    if c1 then L25() else L6(c1);
  L23():
    missing = ldf missing in base;
    r8 = dyn missing(<sym n>);
    goto L5(r8);
  L24():
    r6 = dyn base(<sym n>);
    goto L5(r6);
  L6(c3):
    c10 = `as.logical`(c3);
    if c10 then L29() else L8();
  L25():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L7(c6, r10):
    c7 = `as.logical`(r10);
    c8 = `&&`(c6, c7);
    goto L6(c8);
  L8():
    _in_ = ldf `%in%`;
    check L33() else D5();
  L26():
    missing1 = ldf missing in base;
    r11 = dyn missing1(<sym new>);
    goto L7(c1, r11);
  L27():
    r9 = dyn base1(<sym new>);
    goto L7(c1, r9);
  L29():
    cur_screen2 = ld `cur.screen`;
    check L30() else D4();
  D4():
    deopt 22 [cur_screen2];
  D5():
    deopt 28 [];
  L30():
    cur_screen3 = force? cur_screen2;
    checkMissing(cur_screen3);
    popenv;
    return cur_screen3;
  L33():
    p1 = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    p2 = prom<V +>{
      _SSget1 = ldf `.SSget`;
      r15 = dyn _SSget1("sp.valid.screens");
      return r15;
    };
    r17 = dyn _in_(p1, p2);
    check L34() else D6();
  D6():
    deopt 31 [r17];
  L34():
    r18 = `!`(r17);
    c11 = `as.logical`(r18);
    if c11 then L35() else L10();
  L10():
    goto L11();
  L11():
    _SSget2 = ldf `.SSget`;
    check L39() else D9();
  L35():
    stop = ldf stop;
    check L36() else D7();
  D7():
    deopt 34 [];
  D9():
    deopt 40 [];
  L36():
    r19 = dyn stop("invalid screen number");
    check L37() else D8();
  L39():
    r21 = dyn _SSget2("sp.screens");
    check L40() else D10();
  D8():
    deopt 36 [r19];
  D10():
    deopt 42 [r21];
  L37():
    goto L11();
  L40():
    st `split.screens` = r21;
    par = ldf par;
    check L41() else D11();
  D11():
    deopt 45 [];
  L41():
    p3 = prom<V +>{
      _SSenv = ld `.SSenv`;
      _SSenv1 = force? _SSenv;
      checkMissing(_SSenv1);
      c12 = `is.object`(_SSenv1);
      if c12 then L1() else L2(_SSenv1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", _SSenv1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_SSenv3):
      r22 = `$`(_SSenv3, <sym par.list>);
      goto L0(r22);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r24 = dyn par(p3);
    check L42() else D12();
  D12():
    deopt 47 [r24];
  L42():
    l = ld `split.screens`;
    c13 = `is.object`(l);
    if c13 then L43() else L44(r24, l);
  L12(dx3):
    st `split.screens` = dx3;
    _SSassign = ldf `.SSassign`;
    check L47() else D14();
  L43():
    dr2 = tryDispatchBuiltin.0("[[<-", l, r24);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L45() else L44(r24, dr2);
  L44(r26, l2):
    cur_screen4 = ld `cur.screen`;
    check L46() else D13();
  D13():
    deopt 49 [r26, l2, r24, cur_screen4];
  D14():
    deopt 54 [];
  L45():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L46():
    cur_screen5 = force? cur_screen4;
    ____ = ldf `[[<-` in base;
    r29 = dyn ____(l2, r24, cur_screen5);
    goto L12(r29);
  L47():
    p4 = prom<V +>{
      split_screens = ld `split.screens`;
      split_screens1 = force? split_screens;
      checkMissing(split_screens1);
      return split_screens1;
    };
    r31 = dyn _SSassign("sp.screens", p4);
    check L48() else D15();
  D15():
    deopt 57 [r31];
  L48():
    _SSassign1 = ldf `.SSassign`;
    check L49() else D16();
  D16():
    deopt 59 [];
  L49():
    p5 = prom<V +>{
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      return n4;
    };
    r33 = dyn _SSassign1("sp.cur.screen", p5);
    check L50() else D17();
  D17():
    deopt 62 [r33];
  L50():
    par1 = ldf par;
    check L51() else D18();
  D18():
    deopt 64 [];
  L51():
    p6 = prom<V +>{
      split_screens2 = ld `split.screens`;
      split_screens3 = force? split_screens2;
      checkMissing(split_screens3);
      c14 = `is.object`(split_screens3);
      if c14 then L1() else L2(split_screens3);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", split_screens3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(split_screens5):
      n5 = ld n;
      n6 = force? n5;
      __ = ldf `[[` in base;
      r34 = dyn __(split_screens5, n6);
      goto L0(r34);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r36 = dyn par1(p6);
    check L52() else D19();
  D19():
    deopt 66 [r36];
  L52():
    new1 = ld new;
    check L53() else D20();
  D20():
    deopt 67 [new1];
  L53():
    new2 = force? new1;
    checkMissing(new2);
    c15 = `as.logical`(new2);
    if c15 then L54() else L13();
  L13():
    goto L14();
  L14():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L58() else L59();
  L54():
    erase_screen = ldf `erase.screen`;
    check L55() else D21();
  D21():
    deopt 70 [];
  L15(r41):
    popenv;
    return r41;
  L55():
    p7 = prom<V +>{
      n7 = ld n;
      n8 = force? n7;
      checkMissing(n8);
      return n8;
    };
    r38 = dyn erase_screen(p7);
    check L56() else D22();
  L58():
    n9 = ld n;
    check L60() else D23();
  L59():
    r40 = dyn base2(<sym n>);
    goto L15(r40);
  D22():
    deopt 72 [r38];
  D23():
    deopt 77 [n9];
  L56():
    goto L14();
  L60():
    n10 = force? n9;
    checkMissing(n10);
    invisible = ldf invisible in base;
    r42 = dyn invisible(n10);
    check L61() else D24();
  D24():
    deopt 80 [r42];
  L61():
    goto L15(r42);
  }
}