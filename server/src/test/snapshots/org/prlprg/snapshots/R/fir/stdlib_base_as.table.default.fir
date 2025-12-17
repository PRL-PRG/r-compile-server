fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.table.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg is_table:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg x3:*, reg x4:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x5:*, reg x6:V, reg is_array:cls, reg r4:V, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c6:L, reg r6:V, reg x7:*, reg x8:V, reg is_numeric:cls, reg r7:V, reg c7:L, reg c8:V, reg c10:L, reg as_array:cls, reg x9:*, reg x10:V, reg p1:p(V +), reg r9:V, reg structure:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg x11:*, reg x12:V, reg oldClass:cls, reg r14:V, reg c11:cls, reg r15:V, reg p2:p(V +), reg provideDimnames:cls, reg x13:*, reg x14:V, reg p3:p(V +), reg r18:V, reg p4:p(V +), reg r20:V, reg stop:cls, reg r21:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    is_table = ldf `is.table`;
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
    r1 = dyn is_table(p);
    check L6() else D1();
  D1():
    deopt 3 [r1];
  L6():
    c = `as.logical`(r1);
    if c then L7() else L0();
  L0():
    sym = ldf `is.array`;
    base = ldf `is.array` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L7():
    x3 = ld x;
    check L8() else D2();
  D2():
    deopt 4 [x3];
  L1(r3):
    c1 = `as.logical`(r3);
    if c1 then L2(c1) else L14();
  L8():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L10():
    x5 = ld x;
    check L12() else D3();
  L11():
    r2 = dyn base(<sym x>);
    goto L1(r2);
  D3():
    deopt 8 [x5];
  L2(c2):
    c10 = `as.logical`(c2);
    if c10 then L20() else L4();
  L12():
    x6 = force? x5;
    checkMissing(x6);
    is_array = ldf `is.array` in base;
    r4 = dyn is_array(x6);
    check L13() else D4();
  L14():
    sym1 = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  D4():
    deopt 11 [r4];
  L3(c6, r6):
    c7 = `as.logical`(r6);
    c8 = `||`(c6, c7);
    goto L2(c8);
  L4():
    stop = ldf stop;
    check L26() else D11();
  L13():
    goto L1(r4);
  L15():
    x7 = ld x;
    check L17() else D5();
  L16():
    r5 = dyn base1(<sym x>);
    goto L3(c1, r5);
  L20():
    as_array = ldf `as.array`;
    check L21() else D7();
  D5():
    deopt 14 [c1, x7];
  D7():
    deopt 20 [];
  D11():
    deopt 31 [];
  L17():
    x8 = force? x7;
    checkMissing(x8);
    is_numeric = ldf `is.numeric` in base;
    r7 = dyn is_numeric(x8);
    check L18() else D6();
  L21():
    p1 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r9 = dyn as_array(p1);
    check L22() else D8();
  L26():
    r21 = dyn stop("cannot coerce to a table");
    check L27() else D12();
  D6():
    deopt 17 [c1, r7];
  D8():
    deopt 22 [r9];
  D12():
    deopt 33 [r21];
  L18():
    goto L3(c1, r7);
  L22():
    st x = r9;
    structure = ldf structure;
    check L23() else D9();
  L27():
    popenv;
    return r21;
  D9():
    deopt 25 [];
  L23():
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r11):
      return r11;
    L2():
      sym3 = ldf oldClass;
      base3 = ldf oldClass in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L4() else L5();
    L3():
      r10 = dyn base2("table", <lang oldClass(x)>);
      goto L0(r10);
    L1(r13):
      c11 = ldf c in base;
      r15 = dyn c11("table", r13);
      goto L0(r15);
    L4():
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      oldClass = ldf oldClass in base;
      r14 = dyn oldClass(x12);
      goto L1(r14);
    L5():
      r12 = dyn base3(<sym x>);
      goto L1(r12);
    };
    p4 = prom<V +>{
      provideDimnames = ldf provideDimnames;
      p3 = prom<V +>{
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        return x14;
      };
      r18 = dyn provideDimnames(p3);
      return r18;
    };
    r20 = dyn structure[class, ](p2, p4);
    check L24() else D10();
  D10():
    deopt 29 [r20];
  L24():
    popenv;
    return r20;
  }
}