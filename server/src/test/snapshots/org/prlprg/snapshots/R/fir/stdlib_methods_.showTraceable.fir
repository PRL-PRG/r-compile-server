fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4102710431;
    st `.showTraceable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4102710431(object) {
  (reg object:*) -+> V { var object:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg __:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg emptyenv:cls, reg r5:V, reg identical:cls, reg r6:V, reg c:L, reg cat:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg object1:*, reg object2:V, reg class:cls, reg r9:V, reg p:p(V +), reg r11:V, reg callGeneric:cls, reg __1:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg cat1:cls, reg r15:V, reg cat2:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg object3:*, reg object4:V, reg class1:cls, reg r18:V, reg p2:p(V +), reg r20:V, reg callGeneric1:cls, reg __2:cls, reg r21:V, reg p3:p(V +), reg r23:V, reg cat3:cls, reg r24:V |
    mkenv;
    st object = object;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L9() else L2();
  L3():
    __ = ldf `@` in base;
    r2 = dyn __(<sym object>, <sym source>);
    sym1 = ldf emptyenv;
    base1 = ldf emptyenv in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L4():
    r = dyn base(<lang `@`(object, source)>, <lang emptyenv()>);
    goto L0(r);
  L1(r4):
    identical = ldf identical in base;
    r6 = dyn identical(r2, r4, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L8() else D1();
  L2():
    cat2 = ldf cat;
    check L17() else D8();
  L5():
    emptyenv = ldf emptyenv in base;
    r5 = dyn emptyenv();
    check L7() else D0();
  L6():
    r3 = dyn base1();
    goto L1(r3);
  L9():
    cat = ldf cat;
    check L10() else D2();
  D0():
    deopt 7 [r5];
  D1():
    deopt 16 [r6];
  D2():
    deopt 18 [];
  D8():
    deopt 34 [];
  L7():
    goto L1(r5);
  L8():
    goto L0(r6);
  L10():
    p = prom<V +>{
      sym2 = ldf class;
      base2 = ldf class in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      class = ldf class in base;
      r9 = dyn class(object2);
      goto L0(r9);
    L2():
      r7 = dyn base2(<sym object>);
      goto L0(r7);
    };
    r11 = dyn cat[, , , sep]("Object with tracing code, class \"", p, "\"\nOriginal definition: \n", "");
    check L11() else D3();
  L17():
    p2 = prom<V +>{
      sym3 = ldf class;
      base3 = ldf class in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      class1 = ldf class in base;
      r18 = dyn class1(object4);
      goto L0(r18);
    L2():
      r16 = dyn base3(<sym object>);
      goto L0(r16);
    };
    r20 = dyn cat2[, , , sep]("Object of class \"", p2, "\", from source\n", "");
    check L18() else D9();
  D3():
    deopt 24 [r11];
  D9():
    deopt 40 [r20];
  L11():
    callGeneric = ldf callGeneric;
    check L12() else D4();
  L18():
    callGeneric1 = ldf callGeneric;
    check L19() else D10();
  D4():
    deopt 26 [];
  D10():
    deopt 42 [];
  L12():
    p1 = prom<V +>{
      __1 = ldf `@` in base;
      r12 = dyn __1(<sym object>, <sym original>);
      return r12;
    };
    r14 = dyn callGeneric(p1);
    check L13() else D5();
  L19():
    p3 = prom<V +>{
      __2 = ldf `@` in base;
      r21 = dyn __2(<sym object>, <sym .Data>);
      return r21;
    };
    r23 = dyn callGeneric1(p3);
    check L20() else D11();
  D5():
    deopt 28 [r14];
  D11():
    deopt 44 [r23];
  L13():
    cat1 = ldf cat;
    check L14() else D6();
  L20():
    cat3 = ldf cat;
    check L21() else D12();
  D6():
    deopt 30 [];
  D12():
    deopt 46 [];
  L14():
    r15 = dyn cat1("\n## (to see the tracing code, look at body(object))\n");
    check L15() else D7();
  L21():
    r24 = dyn cat3("\n## (to see original from package, look at object@original)\n");
    check L22() else D13();
  D7():
    deopt 32 [r15];
  D13():
    deopt 48 [r24];
  L15():
    popenv;
    return r15;
  L22():
    popenv;
    return r24;
  }
}