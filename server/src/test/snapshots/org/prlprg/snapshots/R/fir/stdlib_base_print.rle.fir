fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2029939750;
    st `print.rle` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2029939750(x, digits, prefix, `...`) {
  (reg x:*, reg digits:*, reg prefix:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var prefix:*, reg prefix_isMissing:L, reg prefix_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg digits1:*, reg digits2:V, reg c:V, reg c1:L, reg getOption1:cls, reg r4:V, reg cat:cls, reg prefix1:*, reg prefix2:V, reg p1:p(V +), reg r7:V, reg __:cls, reg r8:V, reg r9:cls, reg x1:*, reg x2:V, reg c2:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r10:V, reg p2:p(V +), reg r12:V, reg cat1:cls, reg prefix3:*, reg prefix4:V, reg p3:p(V +), reg r14:V, reg __1:cls, reg r15:V, reg r16:cls, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r17:V, reg p4:p(V +), reg digits3:*, reg digits4:V, reg p5:p(V +), reg r20:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg r22:V, reg x9:*, reg x10:V, reg invisible:cls, reg r23:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("digits");
      return r;
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    prefix_isMissing = missing.0(prefix);
    if prefix_isMissing then L2("") else L2(prefix);
  L2(prefix_orDefault):
    st prefix = prefix_orDefault;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L3(r3):
    c1 = `as.logical`(r3);
    if c1 then L10() else L4();
  L7():
    digits1 = ld digits;
    check L9() else D0();
  L8():
    r2 = dyn base(<sym digits>);
    goto L3(r2);
  D0():
    deopt 1 [digits1];
  L4():
    goto L5();
  L5():
    cat = ldf cat;
    check L14() else D3();
  L9():
    digits2 = force? digits1;
    checkMissing(digits2);
    c = `==`(digits2, NULL);
    goto L3(c);
  L10():
    getOption1 = ldf getOption;
    check L11() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 12 [];
  L11():
    r4 = dyn getOption1("digits");
    check L12() else D2();
  L14():
    p1 = prom<V +>{
      prefix1 = ld prefix;
      prefix2 = force? prefix1;
      checkMissing(prefix2);
      return prefix2;
    };
    r7 = dyn cat[, , , sep]("", "Run Length Encoding\n", "  lengths:", p1);
    check L15() else D4();
  D2():
    deopt 7 [r4];
  D4():
    deopt 18 [r7];
  L12():
    st digits = r4;
    goto L5();
  L15():
    __ = ldf `::`;
    check L16() else D5();
  D5():
    deopt 20 [];
  L16():
    r8 = dyn __("utils", "str");
    check L17() else D6();
  D6():
    deopt 23 [r8];
  L17():
    checkFun.0(r8);
    r9 = r8 as cls;
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c2 = `is.object`(x2);
      if c2 then L1() else L2(x2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x4):
      r10 = `$`(x4, <sym lengths>);
      goto L0(r10);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r12 = dyn r9(p2);
    check L18() else D7();
  D7():
    deopt 26 [r12];
  L18():
    cat1 = ldf cat;
    check L19() else D8();
  D8():
    deopt 28 [];
  L19():
    p3 = prom<V +>{
      prefix3 = ld prefix;
      prefix4 = force? prefix3;
      checkMissing(prefix4);
      return prefix4;
    };
    r14 = dyn cat1[, , sep]("", "  values :", p3);
    check L20() else D9();
  D9():
    deopt 33 [r14];
  L20():
    __1 = ldf `::`;
    check L21() else D10();
  D10():
    deopt 35 [];
  L21():
    r15 = dyn __1("utils", "str");
    check L22() else D11();
  D11():
    deopt 38 [r15];
  L22():
    checkFun.0(r15);
    r16 = r15 as cls;
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c3 = `is.object`(x6);
      if c3 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r17 = `$`(x8, <sym values>);
      goto L0(r17);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p5 = prom<V +>{
      digits3 = ld digits;
      digits4 = force? digits3;
      checkMissing(digits4);
      return digits4;
    };
    r20 = dyn r16[, `digits.d`](p4, p5);
    check L23() else D12();
  D12():
    deopt 43 [r20];
  L23():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L6(r22):
    popenv;
    return r22;
  L24():
    x9 = ld x;
    check L26() else D13();
  L25():
    r21 = dyn base1(<sym x>);
    goto L6(r21);
  D13():
    deopt 46 [x9];
  L26():
    x10 = force? x9;
    checkMissing(x10);
    invisible = ldf invisible in base;
    r23 = dyn invisible(x10);
    check L27() else D14();
  D14():
    deopt 49 [r23];
  L27():
    goto L6(r23);
  }
}