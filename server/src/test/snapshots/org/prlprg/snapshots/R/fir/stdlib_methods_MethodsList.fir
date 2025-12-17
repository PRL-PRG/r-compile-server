fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3203256739;
    st MethodsList = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3203256739(`.ArgName`, `...`) {
  (reg _ArgName:*, reg ddd:dots) -+> V { var `.ArgName`:*, var `...`:dots?, reg _MlistDefunct:cls, reg r:V, reg makeMethodsList:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg list:cls, reg ddd1:dots?, reg r3:V, reg p:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg _ArgName1:*, reg _ArgName2:V, reg c:L, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg _ArgName3:*, reg _ArgName4:V, reg c2:L, reg c3:L, reg c5:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg c8:L, reg r12:V, reg _ArgName5:*, reg _ArgName6:V, reg length:cls, reg r13:V, reg r14:V, reg c9:L, reg c10:V, reg c12:L, reg as_name:cls, reg _ArgName7:*, reg _ArgName8:V, reg p1:p(V +), reg r16:V, reg stop:cls, reg r17:V, reg _ArgName9:*, reg _ArgName10:V, reg l:*, reg slot__:cls, reg r18:V, reg value:*, reg value1:V |
    mkenv;
    st `.ArgName` = _ArgName;
    st `...` = ddd;
    _MlistDefunct = ldf `.MlistDefunct`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    r = dyn _MlistDefunct("MethodsList");
    check L8() else D1();
  D1():
    deopt 3 [r];
  L8():
    makeMethodsList = ldf makeMethodsList;
    check L9() else D2();
  D2():
    deopt 5 [];
  L9():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      list = ldf list;
      ddd1 = ld `...`;
      r3 = dyn list[`...`](ddd1);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym ...>);
      goto L0(r1);
    };
    r5 = dyn makeMethodsList(p);
    check L10() else D3();
  D3():
    deopt 7 [r5];
  L10():
    st value = r5;
    sym1 = ldf `is.name`;
    base1 = ldf `is.name` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L0(r7):
    c1 = `as.logical`(r7);
    if c1 then L14() else L1();
  L11():
    _ArgName1 = ld `.ArgName`;
    check L13() else D4();
  L12():
    r6 = dyn base1(<sym .ArgName>);
    goto L0(r6);
  D4():
    deopt 10 [_ArgName1];
  L1():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L2():
    _ArgName9 = ld `.ArgName`;
    check L31() else D12();
  L13():
    _ArgName2 = force? _ArgName1;
    checkMissing(_ArgName2);
    c = `is.symbol`(_ArgName2);
    goto L0(c);
  L14():
    goto L2();
  D12():
    deopt 37 [_ArgName9];
  L3(r10):
    c3 = `as.logical`(r10);
    if c3 then L19() else L4(c3);
  L16():
    _ArgName3 = ld `.ArgName`;
    check L18() else D5();
  L17():
    r9 = dyn base2(<sym .ArgName>);
    goto L3(r9);
  L31():
    _ArgName10 = force? _ArgName9;
    checkMissing(_ArgName10);
    l = ld value;
    slot__ = ldf `slot<-`;
    check L32() else D13();
  D5():
    deopt 16 [_ArgName3];
  D13():
    deopt 40 [_ArgName10, l, _ArgName10];
  L4(c5):
    c12 = `as.logical`(c5);
    if c12 then L25() else L6();
  L18():
    _ArgName4 = force? _ArgName3;
    checkMissing(_ArgName4);
    c2 = `is.character`(_ArgName4);
    goto L3(c2);
  L19():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L32():
    r18 = dyn slot__(l, NULL, "argument", _ArgName10);
    check L33() else D14();
  D14():
    deopt 43 [_ArgName10, r18];
  L5(c8, r12):
    r14 = `==`(r12, 1.0);
    c9 = `as.logical`(r14);
    c10 = `&&`(c8, c9);
    goto L4(c10);
  L6():
    stop = ldf stop;
    check L29() else D10();
  L20():
    _ArgName5 = ld `.ArgName`;
    check L22() else D6();
  L21():
    r11 = dyn base3(<sym .ArgName>);
    goto L5(c3, r11);
  L25():
    as_name = ldf `as.name`;
    check L26() else D8();
  L33():
    st value = r18;
    value = ld value;
    check L34() else D15();
  D6():
    deopt 21 [c3, _ArgName5];
  D8():
    deopt 29 [];
  D10():
    deopt 34 [];
  D15():
    deopt 45 [value];
  L22():
    _ArgName6 = force? _ArgName5;
    checkMissing(_ArgName6);
    length = ldf length in base;
    r13 = dyn length(_ArgName6);
    check L23() else D7();
  L26():
    p1 = prom<V +>{
      _ArgName7 = ld `.ArgName`;
      _ArgName8 = force? _ArgName7;
      checkMissing(_ArgName8);
      return _ArgName8;
    };
    r16 = dyn as_name(p1);
    check L27() else D9();
  L29():
    r17 = dyn stop("invalid first argument: should be the name of the first argument in the dispatch");
    check L30() else D11();
  L34():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  D7():
    deopt 24 [c3, r13];
  D9():
    deopt 31 [r16];
  D11():
    deopt 36 [r17];
  L23():
    goto L5(c3, r13);
  L27():
    st `.ArgName` = r16;
    goto L2();
  L30():
    goto L2();
  }
}