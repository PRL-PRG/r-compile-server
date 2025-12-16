fun main() {
  () -+> V { reg r:cls, reg args:cls, reg ls:*, reg ls1:V, reg p:p(V +), reg r2:V, reg args1:cls, reg __:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg __1:cls, reg r6:V, reg r7:cls, reg ls2:*, reg ls3:V, reg p2:p(V +), reg r9:V, reg args2:cls, reg r10:V, reg tryCatch:cls, reg args3:cls, reg r11:V, reg p3:p(V +), reg print:*, reg print1:V, reg p4:p(V +), reg r14:V, reg sym:cls, reg base:cls, reg guard:L, reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg args4:cls, reg scan:*, reg scan1:V, reg p5:p(V +), reg r20:V, reg is_function:cls, reg r21:V, reg body:cls, reg args5:cls, reg scan2:*, reg scan3:V, reg p6:p(V +), reg r23:V, reg p7:p(V +), reg r25:V, reg list:cls, reg r26:V, reg args6:cls, reg c:*, reg c1:V, reg p8:p(V +), reg r28:V, reg args7:cls, reg __2:*, reg __3:V, reg p9:p(V +), reg r30:V, reg args8:cls, reg if:*, reg if1:V, reg p10:p(V +), reg r32:V |
    mkenv;
    r = clos inner1525459820;
    st args = r;
    args = ldf args;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p = prom<V +>{
      ls = ld ls;
      ls1 = force? ls;
      checkMissing(ls1);
      return ls1;
    };
    r2 = dyn args(p);
    check L3() else D1();
  D1():
    deopt 6 [r2];
  L3():
    args1 = ldf args;
    check L4() else D2();
  D2():
    deopt 8 [];
  L4():
    p1 = prom<V +>{
      __ = ldf `::`;
      r3 = dyn __("graphics", "plot.default");
      return r3;
    };
    r5 = dyn args1(p1);
    check L5() else D3();
  D3():
    deopt 10 [r5];
  L5():
    __1 = ldf `::`;
    check L6() else D4();
  D4():
    deopt 12 [];
  L6():
    r6 = dyn __1("utils", "str");
    check L7() else D5();
  D5():
    deopt 15 [r6];
  L7():
    checkFun.0(r6);
    r7 = r6 as cls;
    p2 = prom<V +>{
      ls2 = ld ls;
      ls3 = force? ls2;
      checkMissing(ls3);
      return ls3;
    };
    r9 = dyn r7(p2);
    check L8() else D6();
  D6():
    deopt 18 [r9];
  L8():
    args2 = ldf args;
    check L9() else D7();
  D7():
    deopt 20 [];
  L9():
    r10 = dyn args2("scan");
    check L10() else D8();
  D8():
    deopt 22 [r10];
  L10():
    tryCatch = ldf tryCatch;
    check L11() else D9();
  D9():
    deopt 24 [];
  L11():
    p3 = prom<V +>{
      args3 = ldf args;
      r11 = dyn args3("graphics::plot.default");
      return r11;
    };
    p4 = prom<V +>{
      print = ld print;
      print1 = force? print;
      checkMissing(print1);
      return print1;
    };
    r14 = dyn tryCatch[, error](p3, p4);
    check L12() else D10();
  D10():
    deopt 28 [r14];
  L12():
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0():
    args6 = ldf args;
    check L23() else D17();
  L13():
    sym1 = ldf `is.function`;
    base1 = ldf `is.function` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L14():
    r15 = dyn base[`is.f`, body](<lang is.function(args(scan))>, <lang body(args(scan))>);
    goto L0();
  D17():
    deopt 48 [];
  L1(r18):
    body = ldf body;
    check L20() else D14();
  L15():
    args4 = ldf args;
    check L17() else D11();
  L16():
    r17 = dyn base1(<lang args(scan)>);
    goto L1(r17);
  L23():
    p8 = prom<V +>{
      c = ld c;
      c1 = force? c;
      checkMissing(c1);
      return c1;
    };
    r28 = dyn args6(p8);
    check L24() else D18();
  D11():
    deopt 34 [];
  D14():
    deopt 41 [];
  D18():
    deopt 50 [r28];
  L17():
    p5 = prom<V +>{
      scan = ld scan;
      scan1 = force? scan;
      checkMissing(scan1);
      return scan1;
    };
    r20 = dyn args4(p5);
    check L18() else D12();
  L20():
    p7 = prom<V +>{
      args5 = ldf args;
      p6 = prom<V +>{
        scan2 = ld scan;
        scan3 = force? scan2;
        checkMissing(scan3);
        return scan3;
      };
      r23 = dyn args5(p6);
      return r23;
    };
    r25 = dyn body(p7);
    check L21() else D15();
  L24():
    args7 = ldf args;
    check L25() else D19();
  D12():
    deopt 36 [r20];
  D15():
    deopt 43 [r25];
  D19():
    deopt 52 [];
  L18():
    is_function = ldf `is.function` in base;
    r21 = dyn is_function(r20);
    check L19() else D13();
  L21():
    list = ldf list in base;
    r26 = dyn list(r18, r25);
    check L22() else D16();
  L25():
    p9 = prom<V +>{
      __2 = ld `+`;
      __3 = force? __2;
      checkMissing(__3);
      return __3;
    };
    r30 = dyn args7(p9);
    check L26() else D20();
  D13():
    deopt 38 [r21];
  D16():
    deopt 46 [r26];
  D20():
    deopt 54 [r30];
  L19():
    goto L1(r21);
  L22():
    goto L0();
  L26():
    args8 = ldf args;
    check L27() else D21();
  D21():
    deopt 56 [];
  L27():
    p10 = prom<V +>{
      if = ld if;
      if1 = force? if;
      checkMissing(if1);
      return if1;
    };
    r32 = dyn args8(p10);
    check L28() else D22();
  D22():
    deopt 58 [r32];
  L28():
    popenv;
    return r32;
  }
}
fun inner1525459820(name) {
  (reg name:*) -+> V { var name:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg name1:*, reg name2:V, reg args:cls, reg r2:V |
    mkenv;
    st name = name;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    name1 = ld name;
    check L3() else D0();
  L2():
    r = dyn base(<lang args(name)>);
    goto L0(r);
  D0():
    deopt 2 [name1];
  L3():
    name2 = force? name1;
    checkMissing(name2);
    args = ldf args in base;
    r2 = dyn args(name2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}