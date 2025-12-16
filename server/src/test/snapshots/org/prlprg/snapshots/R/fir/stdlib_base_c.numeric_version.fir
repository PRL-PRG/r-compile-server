fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1156962967;
    st `c.numeric_version` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1156962967(`...`, recursive) {
  (reg ddd:dots, reg recursive:*) -+> V { var `...`:dots?, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, reg lapply:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg p:p(V +), reg as_numeric_version:*, reg as_numeric_version1:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg unique:cls, reg lapply1:cls, reg x:*, reg x1:V, reg p2:p(V +), reg class:*, reg class1:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V, reg length:cls, reg r13:V, reg r14:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg x2:*, reg x3:V, reg c1:L, reg x5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r17:V, reg class2:cls, reg r18:V, reg r19:V, reg structure:cls, reg unlist:cls, reg x6:*, reg x7:V, reg p5:p(V +), reg r21:V, reg p6:p(V +), reg classes:*, reg classes1:V, reg p7:p(V +), reg r24:V |
    mkenv;
    st `...` = ddd;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L0(FALSE) else L0(recursive);
  L0(recursive_orDefault):
    st recursive = recursive_orDefault;
    lapply = ldf lapply;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list;
      ddd1 = ld `...`;
      r2 = dyn list[`...`](ddd1);
      goto L0(r2);
    L2():
      r = dyn base(<sym ...>);
      goto L0(r);
    };
    p1 = prom<V +>{
      as_numeric_version = ld `as.numeric_version`;
      as_numeric_version1 = force? as_numeric_version;
      checkMissing(as_numeric_version1);
      return as_numeric_version1;
    };
    r5 = dyn lapply(p, p1);
    check L7() else D1();
  D1():
    deopt 4 [r5];
  L7():
    st x = r5;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L1(r7):
    r14 = `==`(r7, 1);
    c = `as.logical`(r14);
    if c then L13() else L2();
  L8():
    unique = ldf unique;
    check L10() else D2();
  L9():
    r6 = dyn base1(<lang unique(lapply(x, class))>);
    goto L1(r6);
  D2():
    deopt 9 [];
  L2():
    goto L5("numeric_version");
  L5(r19):
    st classes = r19;
    structure = ldf structure;
    check L22() else D7();
  L10():
    p4 = prom<V +>{
      lapply1 = ldf lapply;
      p2 = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        return x1;
      };
      p3 = prom<V +>{
        class = ld class;
        class1 = force? class;
        checkMissing(class1);
        return class1;
      };
      r10 = dyn lapply1(p2, p3);
      return r10;
    };
    r12 = dyn unique(p4);
    check L11() else D3();
  L13():
    sym2 = ldf class;
    base2 = ldf class in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  D3():
    deopt 11 [r12];
  D7():
    deopt 29 [];
  L3(r16):
    goto L5(r16);
  L11():
    length = ldf length in base;
    r13 = dyn length(r12);
    check L12() else D4();
  L14():
    x2 = ld x;
    check L16() else D5();
  L15():
    r15 = dyn base2(<lang `[[`(x, 1)>);
    goto L3(r15);
  L22():
    p6 = prom<V +>{
      unlist = ldf unlist;
      p5 = prom<V +>{
        x6 = ld x;
        x7 = force? x6;
        checkMissing(x7);
        return x7;
      };
      r21 = dyn unlist[, recursive](p5, FALSE);
      return r21;
    };
    p7 = prom<V +>{
      classes = ld classes;
      classes1 = force? classes;
      checkMissing(classes1);
      return classes1;
    };
    r24 = dyn structure[, class](p6, p7);
    check L23() else D8();
  D4():
    deopt 13 [r13];
  D5():
    deopt 18 [x2];
  D8():
    deopt 33 [r24];
  L12():
    goto L1(r13);
  L16():
    x3 = force? x2;
    checkMissing(x3);
    c1 = `is.object`(x3);
    if c1 then L17() else L18(x3);
  L23():
    popenv;
    return r24;
  L4(dx1):
    class2 = ldf class in base;
    r18 = dyn class2(dx1);
    check L20() else D6();
  L17():
    dr = tryDispatchBuiltin.1("[[", x3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(x5):
    __ = ldf `[[` in base;
    r17 = dyn __(x5, 1);
    goto L4(r17);
  D6():
    deopt 24 [r18];
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L20():
    goto L3(r18);
  }
}