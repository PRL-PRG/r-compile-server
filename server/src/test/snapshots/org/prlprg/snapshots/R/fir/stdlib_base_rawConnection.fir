fun main() {
  () -+> V { reg r:cls, reg rawConnection:cls, reg raw:cls, reg r1:V, reg p:p(V +), reg r3:V, reg writeBin:cls, reg LETTERS:*, reg LETTERS1:V, reg p1:p(V +), reg zz:*, reg zz1:V, reg p2:p(V +), reg r6:V, reg seek:cls, reg zz2:*, reg zz3:V, reg p3:p(V +), reg r8:V, reg readLines:cls, reg zz4:*, reg zz5:V, reg p4:p(V +), reg r10:V, reg seek1:cls, reg zz6:*, reg zz7:V, reg p5:p(V +), reg r12:V, reg writeBin1:cls, reg letters:*, reg letters1:V, reg c:L, reg letters3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r13:V, reg p6:p(V +), reg zz8:*, reg zz9:V, reg p7:p(V +), reg r16:V, reg rawConnectionValue:cls, reg zz10:*, reg zz11:V, reg p8:p(V +), reg r18:V, reg close:cls, reg zz12:*, reg zz13:V, reg p9:p(V +), reg r20:V |
    mkenv;
    r = clos inner695797010;
    st rawConnection = r;
    rawConnection = ldf rawConnection;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      raw = ldf raw;
      r1 = dyn raw(0.0);
      return r1;
    };
    r3 = dyn rawConnection(p, "r+");
    check L1() else D1();
  D1():
    deopt 7 [r3];
  L1():
    st zz = r3;
    writeBin = ldf writeBin;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p1 = prom<V +>{
      LETTERS = ld LETTERS;
      LETTERS1 = force? LETTERS;
      checkMissing(LETTERS1);
      return LETTERS1;
    };
    p2 = prom<V +>{
      zz = ld zz;
      zz1 = force? zz;
      checkMissing(zz1);
      return zz1;
    };
    r6 = dyn writeBin(p1, p2);
    check L3() else D3();
  D3():
    deopt 13 [r6];
  L3():
    seek = ldf seek;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    p3 = prom<V +>{
      zz2 = ld zz;
      zz3 = force? zz2;
      checkMissing(zz3);
      return zz3;
    };
    r8 = dyn seek(p3, 0.0);
    check L5() else D5();
  D5():
    deopt 18 [r8];
  L5():
    readLines = ldf readLines;
    check L6() else D6();
  D6():
    deopt 20 [];
  L6():
    p4 = prom<V +>{
      zz4 = ld zz;
      zz5 = force? zz4;
      checkMissing(zz5);
      return zz5;
    };
    r10 = dyn readLines(p4);
    check L7() else D7();
  D7():
    deopt 22 [r10];
  L7():
    seek1 = ldf seek;
    check L8() else D8();
  D8():
    deopt 24 [];
  L8():
    p5 = prom<V +>{
      zz6 = ld zz;
      zz7 = force? zz6;
      checkMissing(zz7);
      return zz7;
    };
    r12 = dyn seek1(p5, 0.0);
    check L9() else D9();
  D9():
    deopt 27 [r12];
  L9():
    writeBin1 = ldf writeBin;
    check L10() else D10();
  D10():
    deopt 29 [];
  L10():
    p6 = prom<V +>{
      letters = ld letters;
      letters1 = force? letters;
      checkMissing(letters1);
      c = `is.object`(letters1);
      if c then L1() else L2(letters1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", letters1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(letters3):
      __ = ldf `[` in base;
      r13 = dyn __(letters3, <int 1, 2, 3>);
      goto L0(r13);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p7 = prom<V +>{
      zz8 = ld zz;
      zz9 = force? zz8;
      checkMissing(zz9);
      return zz9;
    };
    r16 = dyn writeBin1(p6, p7);
    check L11() else D11();
  D11():
    deopt 32 [r16];
  L11():
    rawConnectionValue = ldf rawConnectionValue;
    check L12() else D12();
  D12():
    deopt 34 [];
  L12():
    p8 = prom<V +>{
      zz10 = ld zz;
      zz11 = force? zz10;
      checkMissing(zz11);
      return zz11;
    };
    r18 = dyn rawConnectionValue(p8);
    check L13() else D13();
  D13():
    deopt 36 [r18];
  L13():
    close = ldf close;
    check L14() else D14();
  D14():
    deopt 38 [];
  L14():
    p9 = prom<V +>{
      zz12 = ld zz;
      zz13 = force? zz12;
      checkMissing(zz13);
      return zz13;
    };
    r20 = dyn close(p9);
    check L15() else D15();
  D15():
    deopt 40 [r20];
  L15():
    popenv;
    return r20;
  }
}
fun inner695797010(object, open) {
  (reg object:*, reg open:*) -+> V { var object:*, var open:*, reg open_isMissing:L, reg open_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg deparse:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg substitute:cls, reg r4:V, reg p:p(V +), reg r6:V, reg object1:*, reg object2:V, reg open1:*, reg open2:V, reg rawConnection:cls, reg r7:V |
    mkenv;
    st object = object;
    open_isMissing = missing.0(open);
    if open_isMissing then L0("r") else L0(open);
  L0(open_orDefault):
    st open = open_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    deparse = ldf deparse;
    check L4() else D0();
  L3():
    r = dyn base(<lang rawConnection(deparse(substitute(object)), object, open)>);
    goto L1(r);
  D0():
    deopt 3 [];
  L4():
    p = prom<V +>{
      sym1 = ldf substitute;
      base1 = ldf substitute in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r3):
      return r3;
    L1():
      substitute = ldf substitute in base;
      r4 = dyn substitute(<sym object>);
      goto L0(r4);
    L2():
      r2 = dyn base1(<sym object>);
      goto L0(r2);
    };
    r6 = dyn deparse(p);
    check L5() else D1();
  D1():
    deopt 5 [r6];
  L5():
    object1 = ld object;
    check L6() else D2();
  D2():
    deopt 6 [object1];
  L6():
    object2 = force? object1;
    checkMissing(object2);
    open1 = ld open;
    check L7() else D3();
  D3():
    deopt 8 [open1];
  L7():
    open2 = force? open1;
    checkMissing(open2);
    rawConnection = ldf rawConnection in base;
    r7 = dyn rawConnection(r6, object2, open2);
    check L8() else D4();
  D4():
    deopt 11 [r7];
  L8():
    goto L1(r7);
  }
}