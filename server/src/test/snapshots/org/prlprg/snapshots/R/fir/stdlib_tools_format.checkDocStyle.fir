fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.checkDocStyle` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg unlist:cls, reg lapply:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg names:cls, reg r5:V, reg p:p(V +), reg _fmt:*, reg _fmt1:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg as_character:cls, reg r11:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    r = clos inner3369547807;
    st `.fmt` = r;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r2):
    popenv;
    return r2;
  L1():
    unlist = ldf unlist;
    check L3() else D0();
  L2():
    r1 = dyn base(<lang unlist(lapply(names(x), .fmt))>);
    goto L0(r1);
  D0():
    deopt 6 [];
  L3():
    p2 = prom<V +>{
      lapply = ldf lapply;
      p = prom<V +>{
        sym1 = ldf names;
        base1 = ldf names in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r4):
        return r4;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        names = ldf names in base;
        r5 = dyn names(x2);
        goto L0(r5);
      L2():
        r3 = dyn base1(<sym x>);
        goto L0(r3);
      };
      p1 = prom<V +>{
        _fmt = ld `.fmt`;
        _fmt1 = force? _fmt;
        checkMissing(_fmt1);
        return _fmt1;
      };
      r8 = dyn lapply(p, p1);
      return r8;
    };
    r10 = dyn unlist(p2);
    check L4() else D1();
  D1():
    deopt 8 [r10];
  L4():
    as_character = ldf `as.character` in base;
    r11 = dyn as_character(r10);
    check L5() else D2();
  D2():
    deopt 10 [r11];
  L5():
    goto L0(r11);
  }
}
fun inner3369547807(nm) {
  (reg nm:*) -+> V { var nm:*, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nm1:*, reg nm2:V, reg __:cls, reg r:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg methods_with_full_name:*, reg methods_with_full_name1:V, reg length:cls, reg r4:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg gettextf:cls, reg nm3:*, reg nm4:V, reg p:p(V +), reg r8:V, reg _pretty_format:cls, reg methods_with_full_name2:*, reg methods_with_full_name3:V, reg p1:p(V +), reg r10:V, reg c3:cls, reg r11:V, reg character:cls, reg r12:V |
    mkenv;
    st nm = nm;
    x = ld x;
    check L5() else D0();
  D0():
    deopt 0 [x];
  L5():
    x1 = force? x;
    checkMissing(x1);
    c = `is.object`(x1);
    if c then L6() else L7(x1);
  L0(dx1):
    c1 = `is.object`(dx1);
    if c1 then L10() else L11(dx1);
  L6():
    dr = tryDispatchBuiltin.1("[[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(x3):
    nm1 = ld nm;
    check L9() else D1();
  D1():
    deopt 2 [x3, nm1];
  L1(dx5):
    st methods_with_full_name = dx5;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L9():
    nm2 = force? nm1;
    __ = ldf `[[` in base;
    r = dyn __(x3, nm2);
    goto L0(r);
  L10():
    dr2 = tryDispatchBuiltin.1("[[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L12() else L11(dr2);
  L11(dx3):
    __1 = ldf `[[` in base;
    r1 = dyn __1(dx3, "withFullName");
    goto L1(r1);
  L2(r3):
    c2 = `as.logical`(r3);
    if c2 then L17() else L3();
  L12():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx4);
  L13():
    methods_with_full_name = ld methods_with_full_name;
    check L15() else D2();
  L14():
    r2 = dyn base(<sym methods_with_full_name>);
    goto L2(r2);
  D2():
    deopt 11 [methods_with_full_name];
  L3():
    character = ldf character;
    check L26() else D9();
  L15():
    methods_with_full_name1 = force? methods_with_full_name;
    checkMissing(methods_with_full_name1);
    length = ldf length in base;
    r4 = dyn length(methods_with_full_name1);
    check L16() else D3();
  L17():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  D3():
    deopt 14 [r4];
  D9():
    deopt 30 [];
  L4(r6):
    popenv;
    return r6;
  L16():
    goto L2(r4);
  L18():
    gettextf = ldf gettextf;
    check L20() else D4();
  L19():
    r5 = dyn base1(<lang gettextf("S3 methods shown with full name in Rd file '%s':", nm)>, <lang .pretty_format(methods_with_full_name)>, "");
    goto L4(r5);
  L26():
    r12 = dyn character();
    check L27() else D10();
  D4():
    deopt 18 [];
  D10():
    deopt 31 [r12];
  L20():
    p = prom<V +>{
      nm3 = ld nm;
      nm4 = force? nm3;
      checkMissing(nm4);
      return nm4;
    };
    r8 = dyn gettextf("S3 methods shown with full name in Rd file '%s':", p);
    check L21() else D5();
  L27():
    popenv;
    return r12;
  D5():
    deopt 21 [r8];
  L21():
    _pretty_format = ldf `.pretty_format`;
    check L22() else D6();
  D6():
    deopt 23 [];
  L22():
    p1 = prom<V +>{
      methods_with_full_name2 = ld methods_with_full_name;
      methods_with_full_name3 = force? methods_with_full_name2;
      checkMissing(methods_with_full_name3);
      return methods_with_full_name3;
    };
    r10 = dyn _pretty_format(p1);
    check L23() else D7();
  D7():
    deopt 25 [r10];
  L23():
    c3 = ldf c in base;
    r11 = dyn c3(r8, r10, "");
    check L24() else D8();
  D8():
    deopt 28 [r11];
  L24():
    goto L4(r11);
  }
}