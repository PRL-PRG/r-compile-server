fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1516540954`;
    st `as.Date.POSIXct` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1516540954`(x, tz, `...`) {
  (reg x:*, reg tz:*, reg ddd:dots) -+> V { var x:*, var tz:*, reg tz_isMissing:L, reg tz_orDefault:*, var `...`:dots?, reg tz1:*, reg tz2:V, reg c:L, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg c6:L, reg c7:L, reg c8:L, reg c9:L, reg c10:L, reg c11:L, reg c12:L, reg i_ddd:dots, reg i:V, reg c13:L, reg c14:L, reg c15:L, reg c16:L, reg c17:L, reg c18:L, reg c19:L, reg c20:L, reg c21:L, reg c22:L, reg c23:L, reg stop:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg unclass:cls, reg r5:V, reg r6:V, reg r7:V, reg l:*, reg attr__:cls, reg r8:V, reg _Date:cls, reg z:*, reg z1:V, reg p:p(V +), reg r10:V, reg as_Date:cls, reg as_POSIXlt:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg tz3:*, reg tz4:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg r15:V |
    mkenv;
    st x = x;
    tz_isMissing = missing.0(tz);
    if tz_isMissing then L0("UTC") else L0(tz);
  L0(tz_orDefault):
    st tz = tz_orDefault;
    st `...` = ddd;
    tz1 = ld tz;
    check L7() else D0();
  D0():
    deopt 0 [tz1];
  L7():
    tz2 = force? tz1;
    checkMissing(tz2);
    c = `is.vector`(tz2, "any");
    if c then L8() else L9();
  L8():
    c1 = inherits(tz2, "factor", FALSE);
    if c1 then L10() else L11();
  L9():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L10():
    c2 = `is.character`(tz2);
    if c2 then L12() else L13();
  L11():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L10();
  L1():
    sym = ldf floor;
    base = ldf floor in base;
    guard = `==`.4(sym, base);
    if guard then L39() else L40();
  L2():
    as_Date = ldf `as.Date`;
    check L50() else D9();
  L12():
    c3 = `==`.6(tz2, "UTC");
    if c3 then L1() else L14();
  L13():
    i_ddd = dots[tz2];
    i = `as.integer`(i_ddd);
    c13 = `==`.5(i, 1);
    if c13 then L3() else L24();
  D9():
    deopt 33 [];
  L3():
    stop = ldf stop;
    check L35() else D1();
  L5(r2):
    st z = r2;
    l = ld z;
    attr__ = ldf `attr<-`;
    check L45() else D5();
  L14():
    c4 = `==`.6(tz2, "GMT");
    if c4 then L1() else L15();
  L24():
    c14 = `==`.5(i, 2);
    if c14 then L3() else L25();
  L39():
    sym1 = ldf unclass;
    base1 = ldf unclass in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L41() else L42();
  L40():
    r1 = dyn base(<lang `/`(unclass(x), 86400.0)>);
    goto L5(r1);
  L50():
    p3 = prom<V +>{
      as_POSIXlt = ldf `as.POSIXlt`;
      p1 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      p2 = prom<V +>{
        tz3 = ld tz;
        tz4 = force? tz3;
        checkMissing(tz4);
        return tz4;
      };
      r13 = dyn as_POSIXlt[, tz](p1, p2);
      return r13;
    };
    r15 = dyn as_Date(p3);
    check L51() else D10();
  D1():
    deopt 3 [];
  D5():
    deopt 23 [NULL, l, NULL];
  D10():
    deopt 35 [r15];
  L6(r4):
    r6 = `/`(r4, 86400.0);
    r7 = floor(r6);
    goto L5(r7);
  L15():
    c5 = `==`.6(tz2, "Etc/UTC");
    if c5 then L1() else L16();
  L25():
    c15 = `==`.5(i, 3);
    if c15 then L3() else L26();
  L35():
    r = dyn stop("empty alternative in numeric switch");
    check L36() else D2();
  L41():
    x1 = ld x;
    check L43() else D3();
  L42():
    r3 = dyn base1(<sym x>);
    goto L6(r3);
  L45():
    r8 = dyn attr__(l, NULL, "tzone", NULL);
    check L46() else D6();
  L51():
    popenv;
    return r15;
  D2():
    deopt 5 [r];
  D3():
    deopt 12 [x1];
  D6():
    deopt 26 [NULL, r8];
  L16():
    c6 = `==`.6(tz2, "Etc/GMT");
    if c6 then L1() else L17();
  L26():
    c16 = `==`.5(i, 4);
    if c16 then L3() else L27();
  L36():
    popenv;
    return r;
  L43():
    x2 = force? x1;
    checkMissing(x2);
    unclass = ldf unclass in base;
    r5 = dyn unclass(x2);
    check L44() else D4();
  L46():
    st z = r8;
    _Date = ldf `.Date`;
    check L47() else D7();
  D4():
    deopt 15 [r5];
  D7():
    deopt 29 [];
  L17():
    c7 = `==`.6(tz2, "UTC0");
    if c7 then L1() else L18();
  L27():
    c17 = `==`.5(i, 5);
    if c17 then L3() else L28();
  L44():
    goto L6(r5);
  L47():
    p = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    r10 = dyn _Date(p);
    check L48() else D8();
  D8():
    deopt 31 [r10];
  L18():
    c8 = `==`.6(tz2, "UTC+0");
    if c8 then L1() else L19();
  L28():
    c18 = `==`.5(i, 6);
    if c18 then L3() else L29();
  L48():
    popenv;
    return r10;
  L19():
    c9 = `==`.6(tz2, "UTC-0");
    if c9 then L1() else L20();
  L29():
    c19 = `==`.5(i, 7);
    if c19 then L3() else L30();
  L20():
    c10 = `==`.6(tz2, "GMT0");
    if c10 then L1() else L21();
  L30():
    c20 = `==`.5(i, 8);
    if c20 then L3() else L31();
  L21():
    c11 = `==`.6(tz2, "GMT+0");
    if c11 then L1() else L22();
  L31():
    c21 = `==`.5(i, 9);
    if c21 then L3() else L32();
  L22():
    c12 = `==`.6(tz2, "GMT-0");
    if c12 then L1() else L23();
  L32():
    c22 = `==`.5(i, 10);
    if c22 then L1() else L33();
  L23():
    goto L2();
  L33():
    c23 = `==`.5(i, 11);
    if c23 then L2() else L34();
  L34():
    invisible.0();
    popenv;
    return NULL;
  }
}