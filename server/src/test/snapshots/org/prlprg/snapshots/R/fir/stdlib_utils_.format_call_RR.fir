fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2184902462;
    st `.format_call_RR` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2184902462(cname, cargs) {
  (reg cname:*, reg cargs:*) -+> V { var cname:*, var cargs:*, reg as_list:cls, reg cargs1:*, reg cargs2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg cargs3:*, reg cargs4:V, reg length:cls, reg r4:V, reg lengths:cls, reg cargs5:*, reg cargs6:V, reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg lens:*, reg lens1:V, reg cumsum:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg sprintf:cls, reg cname1:*, reg cname2:V, reg p2:p(V +), reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg strrep:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg cname3:*, reg cname4:V, reg nchar:cls, reg r18:V, reg r19:V, reg p3:p(V +), reg r21:V, reg sums:*, reg sums1:V, reg c:L, reg sums3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg n:*, reg n1:V, reg __:cls, reg r22:V, reg r23:V, reg rep_int:cls, reg r24:V, reg c1:cls, reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg r27:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg sums4:*, reg sums5:V, reg c2:L, reg sums7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg n2:*, reg n3:V, reg __1:cls, reg r30:V, reg r31:V, reg rep_int1:cls, reg r32:V, reg c3:cls, reg r33:V, reg l:*, reg c4:L, reg r35:S, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sums8:*, reg sums9:V, reg c5:L, reg r40:S, reg l4:*, reg r41:S, reg sums11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r44:S, reg l6:*, reg r45:S, reg dx7:V, reg n4:*, reg n5:V, reg r46:V, reg __2:cls, reg r47:V, reg ___:cls, reg r48:V, reg sprintf1:cls, reg starters:*, reg starters1:V, reg p4:p(V +), reg unlist:cls, reg cargs7:*, reg cargs8:V, reg p5:p(V +), reg r51:V, reg p6:p(V +), reg trailers:*, reg trailers1:V, reg p7:p(V +), reg r54:V |
    mkenv;
    st cname = cname;
    st cargs = cargs;
    as_list = ldf `as.list`;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p = prom<V +>{
      cargs1 = ld cargs;
      cargs2 = force? cargs1;
      checkMissing(cargs2);
      return cargs2;
    };
    r1 = dyn as_list(p);
    check L11() else D1();
  D1():
    deopt 3 [r1];
  L11():
    st cargs = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r3):
    st n = r3;
    lengths = ldf lengths;
    check L16() else D4();
  L12():
    cargs3 = ld cargs;
    check L14() else D2();
  L13():
    r2 = dyn base(<sym cargs>);
    goto L0(r2);
  D2():
    deopt 7 [cargs3];
  D4():
    deopt 13 [];
  L14():
    cargs4 = force? cargs3;
    checkMissing(cargs4);
    length = ldf length in base;
    r4 = dyn length(cargs4);
    check L15() else D3();
  L16():
    p1 = prom<V +>{
      cargs5 = ld cargs;
      cargs6 = force? cargs5;
      checkMissing(cargs6);
      return cargs6;
    };
    r6 = dyn lengths(p1);
    check L17() else D5();
  D3():
    deopt 10 [r4];
  D5():
    deopt 15 [r6];
  L15():
    goto L0(r4);
  L17():
    st lens = r6;
    sym1 = ldf cumsum;
    base1 = ldf cumsum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L1(r8):
    st sums = r8;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L18():
    lens = ld lens;
    check L20() else D6();
  L19():
    r7 = dyn base1(<sym lens>);
    goto L1(r7);
  D6():
    deopt 19 [lens];
  L2(r11):
    st starters = r11;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L37() else L38();
  L20():
    lens1 = force? lens;
    checkMissing(lens1);
    cumsum = ldf cumsum in base;
    r9 = dyn cumsum(lens1);
    check L21() else D7();
  L22():
    sprintf = ldf sprintf;
    check L24() else D8();
  L23():
    r10 = dyn base2(<lang sprintf("%s(", cname)>, <lang rep.int(strrep(" ", `+`(nchar(cname), 1)), `-`(`[`(sums, n), 1))>);
    goto L2(r10);
  D7():
    deopt 22 [r9];
  D8():
    deopt 27 [];
  L5(r27):
    st trailers = r27;
    l = ld trailers;
    c4 = `is.object`(l);
    if c4 then L48() else L49(",", l);
  L21():
    goto L1(r9);
  L24():
    p2 = prom<V +>{
      cname1 = ld cname;
      cname2 = force? cname1;
      checkMissing(cname2);
      return cname2;
    };
    r13 = dyn sprintf("%s(", p2);
    check L25() else D9();
  L37():
    sym6 = ldf `rep.int`;
    base6 = ldf `rep.int` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L39() else L40();
  L38():
    r26 = dyn base5(<lang rep.int("", `-`(`[`(sums, n), 1))>, ")");
    goto L5(r26);
  D9():
    deopt 30 [r13];
  L6(r29):
    c3 = ldf c in base;
    r33 = dyn c3(r29, ")");
    check L47() else D19();
  L8(dx5):
    st trailers = dx5;
    sprintf1 = ldf sprintf;
    check L56() else D22();
  L25():
    sym3 = ldf `rep.int`;
    base3 = ldf `rep.int` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  L39():
    sums4 = ld sums;
    check L41() else D16();
  L40():
    r28 = dyn base6("", <lang `-`(`[`(sums, n), 1)>);
    goto L6(r28);
  L48():
    dr4 = tryDispatchBuiltin.0("[<-", l, ",");
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L50() else L49(",", dr4);
  L49(r35, l2):
    sums8 = ld sums;
    check L51() else D20();
  D16():
    deopt 55 [sums4];
  D19():
    deopt 66 [r33];
  D20():
    deopt 71 [r35, l2, ",", sums8];
  D22():
    deopt 80 [];
  L3(r15):
    c1 = ldf c in base;
    r25 = dyn c1(r13, r15);
    check L36() else D15();
  L26():
    strrep = ldf strrep;
    check L28() else D10();
  L27():
    r14 = dyn base3(<lang strrep(" ", `+`(nchar(cname), 1))>, <lang `-`(`[`(sums, n), 1)>);
    goto L3(r14);
  L41():
    sums5 = force? sums4;
    checkMissing(sums5);
    c2 = `is.object`(sums5);
    if c2 then L42() else L43(sums5);
  L47():
    goto L5(r33);
  L50():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L8(dx4);
  L51():
    sums9 = force? sums8;
    checkMissing(sums9);
    c5 = `is.object`(sums9);
    if c5 then L52() else L53(r35, l2, ",", sums9);
  L56():
    p4 = prom<V +>{
      starters = ld starters;
      starters1 = force? starters;
      checkMissing(starters1);
      return starters1;
    };
    p6 = prom<V +>{
      unlist = ldf unlist;
      p5 = prom<V +>{
        cargs7 = ld cargs;
        cargs8 = force? cargs7;
        checkMissing(cargs8);
        return cargs8;
      };
      r51 = dyn unlist(p5);
      return r51;
    };
    p7 = prom<V +>{
      trailers = ld trailers;
      trailers1 = force? trailers;
      checkMissing(trailers1);
      return trailers1;
    };
    r54 = dyn sprintf1("%s%s%s", p4, p6, p7);
    check L57() else D23();
  D10():
    deopt 34 [];
  D15():
    deopt 48 [r25];
  D23():
    deopt 85 [r54];
  L7(dx3):
    r31 = `-`(dx3, 1);
    rep_int1 = ldf `rep.int` in base;
    r32 = dyn rep_int1("", r31);
    check L46() else D18();
  L9(r44, l6, r45, dx7):
    ___ = ldf `[<-` in base;
    r48 = dyn ___(l6, r45, dx7);
    goto L8(r48);
  L28():
    p3 = prom<V +>{
      sym4 = ldf nchar;
      base4 = ldf nchar in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r17):
      r19 = `+`(r17, 1);
      return r19;
    L1():
      cname3 = ld cname;
      cname4 = force? cname3;
      checkMissing(cname4);
      nchar = ldf nchar in base;
      r18 = dyn nchar(cname4, "chars", FALSE, NA_LGL);
      goto L0(r18);
    L2():
      r16 = dyn base4(<sym cname>);
      goto L0(r16);
    };
    r21 = dyn strrep(" ", p3);
    check L29() else D11();
  L36():
    goto L2(r25);
  L42():
    dr2 = tryDispatchBuiltin.1("[", sums5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L44() else L43(dr2);
  L43(sums7):
    n2 = ld n;
    check L45() else D17();
  L52():
    dr6 = tryDispatchBuiltin.1("[", sums9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L54() else L53(r35, l2, ",", dr6);
  L53(r40, l4, r41, sums11):
    n4 = ld n;
    check L55() else D21();
  L57():
    popenv;
    return r54;
  D11():
    deopt 37 [r21];
  D17():
    deopt 57 [sums7, n2];
  D18():
    deopt 63 [r32];
  D21():
    deopt 73 [r40, l4, r41, sums11, n4];
  L29():
    sums = ld sums;
    check L30() else D12();
  L44():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L45():
    n3 = force? n2;
    __1 = ldf `[` in base;
    r30 = dyn __1(sums7, n3);
    goto L7(r30);
  L46():
    goto L6(r32);
  L54():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L9(r35, l2, ",", dx6);
  L55():
    n5 = force? n4;
    checkMissing(n5);
    r46 = `-`(<missing>, n5);
    __2 = ldf `[` in base;
    r47 = dyn __2(sums11, r46);
    goto L9(r40, l4, r41, r47);
  D12():
    deopt 38 [sums];
  L30():
    sums1 = force? sums;
    checkMissing(sums1);
    c = `is.object`(sums1);
    if c then L31() else L32(sums1);
  L4(dx1):
    r23 = `-`(dx1, 1);
    rep_int = ldf `rep.int` in base;
    r24 = dyn rep_int(r21, r23);
    check L35() else D14();
  L31():
    dr = tryDispatchBuiltin.1("[", sums1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L33() else L32(dr);
  L32(sums3):
    n = ld n;
    check L34() else D13();
  D13():
    deopt 40 [sums3, n];
  D14():
    deopt 46 [r24];
  L33():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L34():
    n1 = force? n;
    __ = ldf `[` in base;
    r22 = dyn __(sums3, n1);
    goto L4(r22);
  L35():
    goto L3(r24);
  }
}