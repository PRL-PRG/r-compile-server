fun main() {
  () -+> V { reg r:cls, reg print:cls, reg Sys_setenv:cls, reg r1:V, reg p:p(V +), reg r3:V, reg Sys_getenv:cls, reg r4:V, reg Sys_unsetenv:cls, reg r5:V, reg Sys_getenv1:cls, reg r6:V |
    mkenv;
    r = clos inner1246119658;
    st `Sys.setenv` = r;
    print = ldf print;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      Sys_setenv = ldf `Sys.setenv`;
      r1 = dyn Sys_setenv[R_TEST, `A+C`]("testit", 123.0);
      return r1;
    };
    r3 = dyn print(p);
    check L1() else D1();
  D1():
    deopt 6 [r3];
  L1():
    Sys_getenv = ldf `Sys.getenv`;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    r4 = dyn Sys_getenv("R_TEST");
    check L3() else D3();
  D3():
    deopt 10 [r4];
  L3():
    Sys_unsetenv = ldf `Sys.unsetenv`;
    check L4() else D4();
  D4():
    deopt 12 [];
  L4():
    r5 = dyn Sys_unsetenv("R_TEST");
    check L5() else D5();
  D5():
    deopt 14 [r5];
  L5():
    Sys_getenv1 = ldf `Sys.getenv`;
    check L6() else D6();
  D6():
    deopt 16 [];
  L6():
    r6 = dyn Sys_getenv1[, unset]("R_TEST", NA_LGL);
    check L7() else D7();
  D7():
    deopt 20 [r6];
  L7():
    popenv;
    return r6;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x:*, reg x1:V, reg names:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg nm:*, reg nm1:V, reg c:V, reg c1:L, reg c2:V, reg _in_:cls, reg nm2:*, reg nm3:V, reg p:p(V +), reg r9:V, reg c4:L, reg c5:V, reg c7:L, reg stop:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg nm4:*, reg nm5:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg unlist:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg r17:V, reg as_character:cls, reg r18:V, reg Sys_setenv:cls, reg r19:V |
    mkenv;
    st `...` = ddd;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    st x = r1;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L8():
    list = ldf list;
    check L10() else D0();
  L9():
    r = dyn base(<sym ...>);
    goto L0(r);
  D0():
    deopt 2 [];
  L1(r4):
    st nm = r4;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L10():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L11() else D1();
  L12():
    x = ld x;
    check L14() else D2();
  L13():
    r3 = dyn base1(<sym x>);
    goto L1(r3);
  D1():
    deopt 4 [r2];
  D2():
    deopt 8 [x];
  L2(r7):
    c1 = `as.logical`(r7);
    if c1 then L3(c1) else L19();
  L11():
    goto L0(r2);
  L14():
    x1 = force? x;
    checkMissing(x1);
    names = ldf names in base;
    r5 = dyn names(x1);
    check L15() else D3();
  L16():
    nm = ld nm;
    check L18() else D4();
  L17():
    r6 = dyn base2(<sym nm>);
    goto L2(r6);
  D3():
    deopt 11 [r5];
  D4():
    deopt 14 [nm];
  L3(c2):
    c7 = `as.logical`(c2);
    if c7 then L23() else L4();
  L15():
    goto L1(r5);
  L18():
    nm1 = force? nm;
    checkMissing(nm1);
    c = `==`(nm1, NULL);
    goto L2(c);
  L19():
    _in_ = ldf `%in%`;
    check L20() else D5();
  D5():
    deopt 18 [c1];
  L4():
    goto L5();
  L5():
    sym3 = ldf `.Internal`;
    base3 = ldf `.Internal` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L20():
    p = prom<V +>{
      nm2 = ld nm;
      nm3 = force? nm2;
      checkMissing(nm3);
      return nm3;
    };
    r9 = dyn _in_("", p);
    check L21() else D6();
  L23():
    stop = ldf stop;
    check L24() else D7();
  D6():
    deopt 21 [c1, r9];
  D7():
    deopt 24 [];
  L6(r13):
    popenv;
    return r13;
  L21():
    c4 = `as.logical`(r9);
    c5 = `||`(c1, c4);
    goto L3(c5);
  L24():
    r10 = dyn stop("all arguments must be named");
    check L25() else D8();
  L27():
    nm4 = ld nm;
    check L29() else D9();
  L28():
    r12 = dyn base3(<lang Sys.setenv(nm, as.character(unlist(x)))>);
    goto L6(r12);
  D8():
    deopt 26 [r10];
  D9():
    deopt 31 [nm4];
  L25():
    goto L5();
  L29():
    nm5 = force? nm4;
    checkMissing(nm5);
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L30() else L31();
  L7(r15):
    Sys_setenv = ldf `Sys.setenv` in base;
    r19 = dyn Sys_setenv(nm5, r15);
    check L35() else D13();
  L30():
    unlist = ldf unlist;
    check L32() else D10();
  L31():
    r14 = dyn base4(<lang unlist(x)>);
    goto L7(r14);
  D10():
    deopt 36 [];
  D13():
    deopt 42 [r19];
  L32():
    p1 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r17 = dyn unlist(p1);
    check L33() else D11();
  L35():
    goto L6(r19);
  D11():
    deopt 38 [r17];
  L33():
    as_character = ldf `as.character` in base;
    r18 = dyn as_character(r17);
    check L34() else D12();
  D12():
    deopt 40 [r18];
  L34():
    goto L7(r18);
  }
}