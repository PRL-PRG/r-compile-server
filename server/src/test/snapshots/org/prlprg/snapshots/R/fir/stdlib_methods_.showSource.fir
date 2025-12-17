fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4102710431;
    st `.showSource` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4102710431(object) {
  (reg object:*) -+> V { var object:*, reg cat:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg class:cls, reg r2:V, reg p:p(V +), reg r4:V, reg cat1:cls, reg format:cls, reg __:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg __1:cls, reg r12:V, reg nzchar:cls, reg r13:V, reg c:L, reg cat2:cls, reg __2:cls, reg r14:V, reg p3:p(V +), reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg __3:cls, reg r20:V, reg nzchar1:cls, reg r21:V, reg c1:L, reg cat3:cls, reg __4:cls, reg r22:V, reg p4:p(V +), reg r24:V |
    mkenv;
    st object = object;
    cat = ldf cat;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      sym = ldf class;
      base = ldf class in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      class = ldf class in base;
      r2 = dyn class(object2);
      goto L0(r2);
    L2():
      r = dyn base(<sym object>);
      goto L0(r);
    };
    r4 = dyn cat[, , , sep]("Object of class \"", p, "\"\n", "");
    check L6() else D1();
  D1():
    deopt 7 [r4];
  L6():
    cat1 = ldf cat;
    check L7() else D2();
  D2():
    deopt 9 [];
  L7():
    p2 = prom<V +>{
      format = ldf format;
      p1 = prom<V +>{
        __ = ldf `@` in base;
        r5 = dyn __(<sym object>, <sym dateCreated>);
        return r5;
      };
      r7 = dyn format(p1);
      return r7;
    };
    r9 = dyn cat1("Source environment created ", p2, "\n");
    check L8() else D3();
  D3():
    deopt 13 [r9];
  L8():
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L0(r11):
    c = `as.logical`(r11);
    if c then L12() else L1();
  L9():
    __1 = ldf `@` in base;
    r12 = dyn __1(<sym object>, <sym packageName>);
    nzchar = ldf nzchar in base;
    r13 = dyn nzchar(r12);
    check L11() else D4();
  L10():
    r10 = dyn base1(<lang `@`(object, packageName)>);
    goto L0(r10);
  D4():
    deopt 19 [r13];
  L1():
    goto L2();
  L2():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L11():
    goto L0(r13);
  L12():
    cat2 = ldf cat;
    check L13() else D5();
  D5():
    deopt 21 [];
  L3(r19):
    c1 = `as.logical`(r19);
    if c1 then L19() else L4();
  L13():
    p3 = prom<V +>{
      __2 = ldf `@` in base;
      r14 = dyn __2(<sym object>, <sym packageName>);
      return r14;
    };
    r16 = dyn cat2[, , , sep]("For package \"", p3, "\"\n", "");
    check L14() else D6();
  L16():
    __3 = ldf `@` in base;
    r20 = dyn __3(<sym object>, <sym sourceFile>);
    nzchar1 = ldf nzchar in base;
    r21 = dyn nzchar1(r20);
    check L18() else D7();
  L17():
    r18 = dyn base2(<lang `@`(object, sourceFile)>);
    goto L3(r18);
  D6():
    deopt 27 [r16];
  D7():
    deopt 35 [r21];
  L4():
    invisible.0();
    popenv;
    return NULL;
  L14():
    goto L2();
  L18():
    goto L3(r21);
  L19():
    cat3 = ldf cat;
    check L20() else D8();
  D8():
    deopt 37 [];
  L20():
    p4 = prom<V +>{
      __4 = ldf `@` in base;
      r22 = dyn __4(<sym object>, <sym sourceFile>);
      return r22;
    };
    r24 = dyn cat3[, , , sep]("From source file \"", p4, "\"\n", "");
    check L21() else D9();
  D9():
    deopt 43 [r24];
  L21():
    popenv;
    return r24;
  }
}