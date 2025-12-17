fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2690107958;
    st bw_pair_cnts = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2690107958(x, nb, binned) {
  (reg x:*, reg nb:*, reg binned:*) -+> V { var x:*, var nb:*, var binned:*, reg binned1:*, reg binned2:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg range:cls, reg r2:V, reg diff:cls, reg r3:*, reg r4:V, reg p:p(V +), reg r6:V, reg r7:V, reg nb1:*, reg nb2:V, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg x3:*, reg x4:V, reg abs:cls, reg r13:V, reg d:*, reg d1:V, reg r14:V, reg trunc:cls, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg r20:V, reg x5:*, reg x6:V, reg r21:V, reg r22:V, reg xx:*, reg xx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg xx4:V, reg r24:V, reg xx5:*, reg xx6:V, reg min:cls, reg r25:V, reg r26:V, reg r27:V, reg tabulate:cls, reg xx7:*, reg xx8:V, reg p1:p(V +), reg nb3:*, reg nb4:V, reg p2:p(V +), reg r30:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg d2:*, reg d3:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r33:V, reg r34:V, reg C_bw_den_binned:*, reg C_bw_den_binned1:V, reg xxx:*, reg xxx1:V, reg vargs:dots, reg r35:V, reg list:cls, reg r36:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg C_bw_den:*, reg C_bw_den1:V, reg nb5:*, reg nb6:V, reg x7:*, reg x8:V, reg vargs1:dots, reg r39:V |
    mkenv;
    st x = x;
    st nb = nb;
    st binned = binned;
    binned1 = ld binned;
    check L9() else D0();
  D0():
    deopt 0 [binned1];
  L9():
    binned2 = force? binned1;
    checkMissing(binned2);
    c = `as.logical`(binned2);
    if c then L10() else L0();
  L0():
    sym7 = ldf `.Call`;
    base7 = ldf `.Call` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L45() else L46();
  L10():
    sym = ldf range;
    base = ldf range in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L1(r1):
    st r = r1;
    diff = ldf diff;
    check L15() else D3();
  L8(r38):
    popenv;
    return r38;
  L11():
    x1 = ld x;
    check L13() else D1();
  L12():
    r = dyn base(<sym x>);
    goto L1(r);
  L45():
    C_bw_den = ld C_bw_den;
    check L47() else D20();
  L46():
    r37 = dyn base7(<sym C_bw_den>, <sym nb>, <sym x>);
    goto L8(r37);
  D1():
    deopt 4 [x1];
  D3():
    deopt 10 [];
  D20():
    deopt 64 [C_bw_den];
  L13():
    x2 = force? x1;
    checkMissing(x2);
    range = ldf range in base;
    r2 = dyn range(x2);
    check L14() else D2();
  L15():
    p = prom<V +>{
      r3 = ld r;
      r4 = force? r3;
      checkMissing(r4);
      return r4;
    };
    r6 = dyn diff(p);
    check L16() else D4();
  L47():
    C_bw_den1 = force? C_bw_den;
    checkMissing(C_bw_den1);
    nb5 = ld nb;
    check L48() else D21();
  D2():
    deopt 7 [r2];
  D4():
    deopt 12 [r6];
  D21():
    deopt 65 [C_bw_den1, nb5];
  L14():
    goto L1(r2);
  L16():
    r7 = `*`(r6, 1.01);
    nb1 = ld nb;
    check L17() else D5();
  L48():
    nb6 = force? nb5;
    checkMissing(nb6);
    x7 = ld x;
    check L49() else D22();
  D5():
    deopt 14 [r7, nb1];
  D22():
    deopt 66 [C_bw_den1, nb6, x7];
  L17():
    nb2 = force? nb1;
    checkMissing(nb2);
    r8 = `/`(r7, nb2);
    st d = r8;
    sym1 = ldf trunc;
    base1 = ldf trunc in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L49():
    x8 = force? x7;
    checkMissing(x8);
    vargs1 = dots[nb6, x8];
    r39 = `.Call`(C_bw_den1, vargs1, <missing>);
    goto L8(r39);
  L2(r10):
    sym3 = ldf sign;
    base3 = ldf sign in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  L18():
    sym2 = ldf abs;
    base2 = ldf abs in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L19():
    r9 = dyn base1(<lang `/`(abs(x), d)>);
    goto L2(r9);
  L3(r12):
    d = ld d;
    check L24() else D8();
  L4(r19, r20):
    r22 = `*`(r19, r20);
    st xx = r22;
    xx = ld xx;
    check L29() else D11();
  L20():
    x3 = ld x;
    check L22() else D6();
  L21():
    r11 = dyn base2(<sym x>);
    goto L3(r11);
  L26():
    x5 = ld x;
    check L28() else D10();
  L27():
    r18 = dyn base3(<sym x>);
    goto L4(r10, r18);
  D6():
    deopt 22 [x3];
  D8():
    deopt 25 [r12, d];
  D10():
    deopt 30 [r10, x5];
  D11():
    deopt 35 [xx];
  L22():
    x4 = force? x3;
    checkMissing(x4);
    abs = ldf abs in base;
    r13 = dyn abs(x4);
    check L23() else D7();
  L24():
    d1 = force? d;
    checkMissing(d1);
    r14 = `/`(r12, d1);
    trunc = ldf trunc in base;
    r15 = dyn trunc(r14);
    check L25() else D9();
  L28():
    x6 = force? x5;
    checkMissing(x6);
    r21 = sign(x6);
    goto L4(r10, r21);
  L29():
    xx1 = force? xx;
    checkMissing(xx1);
    sym4 = ldf min;
    base4 = ldf min in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L30() else L31();
  D7():
    deopt 25 [r13];
  D9():
    deopt 29 [r15];
  L5(xx4, r24):
    r26 = `-`(xx4, r24);
    r27 = `+`(r26, 1.0);
    st xx = r27;
    tabulate = ldf tabulate;
    check L34() else D14();
  L23():
    goto L3(r13);
  L25():
    goto L2(r15);
  L30():
    xx5 = ld xx;
    check L32() else D12();
  L31():
    r23 = dyn base4(<sym xx>);
    goto L5(xx1, r23);
  D12():
    deopt 38 [xx1, xx5];
  D14():
    deopt 47 [];
  L32():
    xx6 = force? xx5;
    checkMissing(xx6);
    min = ldf min in base;
    r25 = dyn min(xx6);
    check L33() else D13();
  L34():
    p1 = prom<V +>{
      xx7 = ld xx;
      xx8 = force? xx7;
      checkMissing(xx8);
      return xx8;
    };
    p2 = prom<V +>{
      nb3 = ld nb;
      nb4 = force? nb3;
      checkMissing(nb4);
      return nb4;
    };
    r30 = dyn tabulate(p1, p2);
    check L35() else D15();
  D13():
    deopt 41 [xx1, r25];
  D15():
    deopt 50 [r30];
  L33():
    goto L5(xx1, r25);
  L35():
    st xxx = r30;
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L36() else L37();
  L6(r32):
    popenv;
    return r32;
  L36():
    d2 = ld d;
    check L38() else D16();
  L37():
    r31 = dyn base5(<sym d>, <lang .Call(C_bw_den_binned, xxx)>);
    goto L6(r31);
  D16():
    deopt 54 [d2];
  L38():
    d3 = force? d2;
    checkMissing(d3);
    sym6 = ldf `.Call`;
    base6 = ldf `.Call` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L39() else L40();
  L7(r34):
    list = ldf list in base;
    r36 = dyn list(d3, r34);
    check L43() else D19();
  L39():
    C_bw_den_binned = ld C_bw_den_binned;
    check L41() else D17();
  L40():
    r33 = dyn base6(<sym C_bw_den_binned>, <sym xxx>);
    goto L7(r33);
  D17():
    deopt 57 [C_bw_den_binned];
  D19():
    deopt 62 [r36];
  L41():
    C_bw_den_binned1 = force? C_bw_den_binned;
    checkMissing(C_bw_den_binned1);
    xxx = ld xxx;
    check L42() else D18();
  L43():
    goto L6(r36);
  D18():
    deopt 58 [C_bw_den_binned1, xxx];
  L42():
    xxx1 = force? xxx;
    checkMissing(xxx1);
    vargs = dots[xxx1];
    r35 = `.Call`(C_bw_den_binned1, vargs, <missing>);
    goto L7(r35);
  }
}