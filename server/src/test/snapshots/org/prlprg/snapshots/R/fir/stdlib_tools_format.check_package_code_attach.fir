fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_package_code_attach` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg unlist:cls, reg Map:cls, reg _format_calls_in_file:*, reg _format_calls_in_file1:V, reg p:p(V +), reg x3:*, reg x4:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg x5:*, reg x6:V, reg names:cls, reg r13:V, reg p2:p(V +), reg r15:V, reg p3:p(V +), reg r17:V, reg c1:cls, reg r18:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L8() else L1();
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L6():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L7() else D1();
  L8():
    character = ldf character;
    check L9() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  L3(r8):
    popenv;
    return r8;
  L7():
    goto L0(r2);
  L9():
    r4 = dyn character();
    check L10() else D3();
  L13():
    unlist = ldf unlist;
    check L15() else D4();
  L14():
    r7 = dyn base1("Found the following calls to attach():", <lang unlist(Map(.format_calls_in_file, x, names(x)))>);
    goto L3(r7);
  D3():
    deopt 9 [r4];
  D4():
    deopt 17 [];
  L10():
    popenv;
    return r4;
  L15():
    p3 = prom<V +>{
      Map = ldf Map;
      p = prom<V +>{
        _format_calls_in_file = ld `.format_calls_in_file`;
        _format_calls_in_file1 = force? _format_calls_in_file;
        checkMissing(_format_calls_in_file1);
        return _format_calls_in_file1;
      };
      p1 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      p2 = prom<V +>{
        sym2 = ldf names;
        base2 = ldf names in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r12):
        return r12;
      L1():
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        names = ldf names in base;
        r13 = dyn names(x6);
        goto L0(r13);
      L2():
        r11 = dyn base2(<sym x>);
        goto L0(r11);
      };
      r15 = dyn Map(p, p1, p2);
      return r15;
    };
    r17 = dyn unlist(p3);
    check L16() else D5();
  D5():
    deopt 19 [r17];
  L16():
    c1 = ldf c in base;
    r18 = dyn c1("Found the following calls to attach():", r17);
    check L17() else D6();
  D6():
    deopt 21 [r18];
  L17():
    goto L3(r18);
  }
}