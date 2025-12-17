fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.Rd_get_title` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg _Rd_get_section:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg character:cls, reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg title:*, reg title1:V, reg length:cls, reg r5:V, reg c:L, reg _Rd_get_text:cls, reg title2:*, reg title3:V, reg p1:p(V +), reg r7:V, reg result:*, reg result1:V, reg c1:L, reg result3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg result6:V, reg r9:V, reg result7:*, reg result8:V, reg nzchar:cls, reg r10:V, reg __:cls, reg r11:V, reg paste:cls, reg result9:*, reg result10:V, reg p2:p(V +), reg r13:V |
    mkenv;
    st x = x;
    _Rd_get_section = ldf `.Rd_get_section`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn _Rd_get_section(p, "title");
    check L6() else D1();
  D1():
    deopt 4 [r1];
  L6():
    st title = r1;
    character = ldf character;
    check L7() else D2();
  D2():
    deopt 7 [];
  L7():
    r2 = dyn character();
    check L8() else D3();
  D3():
    deopt 8 [r2];
  L8():
    st result = r2;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r4):
    c = `as.logical`(r4);
    if c then L13() else L1();
  L9():
    title = ld title;
    check L11() else D4();
  L10():
    r3 = dyn base(<sym title>);
    goto L0(r3);
  D4():
    deopt 12 [title];
  L1():
    goto L4();
  L4():
    paste = ldf paste;
    check L25() else D11();
  L11():
    title1 = force? title;
    checkMissing(title1);
    length = ldf length in base;
    r5 = dyn length(title1);
    check L12() else D5();
  L13():
    _Rd_get_text = ldf `.Rd_get_text`;
    check L14() else D6();
  D5():
    deopt 15 [r5];
  D6():
    deopt 17 [];
  D11():
    deopt 34 [];
  L12():
    goto L0(r5);
  L14():
    p1 = prom<V +>{
      title2 = ld title;
      title3 = force? title2;
      checkMissing(title3);
      return title3;
    };
    r7 = dyn _Rd_get_text(p1);
    check L15() else D7();
  L25():
    p2 = prom<V +>{
      result9 = ld result;
      result10 = force? result9;
      checkMissing(result10);
      return result10;
    };
    r13 = dyn paste[, collapse](p2, " ");
    check L26() else D12();
  D7():
    deopt 19 [r7];
  D12():
    deopt 38 [r13];
  L15():
    st result = r7;
    result = ld result;
    check L16() else D8();
  L26():
    popenv;
    return r13;
  D8():
    deopt 21 [result];
  L16():
    result1 = force? result;
    checkMissing(result1);
    c1 = `is.object`(result1);
    if c1 then L17() else L18(result1);
  L2(dx1):
    st result = dx1;
    goto L4();
  L17():
    dr = tryDispatchBuiltin.1("[", result1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(result3):
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L3(result6, r9):
    __ = ldf `[` in base;
    r11 = dyn __(result6, r9);
    goto L2(r11);
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L20():
    result7 = ld result;
    check L22() else D9();
  L21():
    r8 = dyn base1(<sym result>);
    goto L3(result3, r8);
  D9():
    deopt 25 [result3, result7];
  L22():
    result8 = force? result7;
    checkMissing(result8);
    nzchar = ldf nzchar in base;
    r10 = dyn nzchar(result8);
    check L23() else D10();
  D10():
    deopt 28 [result3, r10];
  L23():
    goto L3(result3, r10);
  }
}