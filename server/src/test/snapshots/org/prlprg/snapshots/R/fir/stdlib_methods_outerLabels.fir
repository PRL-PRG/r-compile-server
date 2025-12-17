fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3711709001;
    st outerLabels = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3711709001(labels, new) {
  (reg labels:*, reg new:*) -+> V { var labels:*, var new:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg labels1:*, reg labels2:V, reg length:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg new1:*, reg new2:V, reg length1:cls, reg r5:V, reg paste:cls, reg labels3:*, reg labels4:V, reg c:L, reg labels6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg labels9:V, reg r7:V, reg n:*, reg n1:V, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg labels12:V, reg r10:V, reg m:*, reg m1:V, reg n2:*, reg n3:V, reg rep_int:cls, reg r11:V, reg rep_int1:cls, reg r12:V, reg __:cls, reg r13:V, reg p:p(V +), reg new3:*, reg new4:V, reg c1:L, reg new6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg new9:V, reg r16:V, reg m2:*, reg m3:V, reg r17:V, reg n4:*, reg n5:V, reg rep_int2:cls, reg r18:V, reg __1:cls, reg r19:V, reg p1:p(V +), reg r21:V |
    mkenv;
    st labels = labels;
    st new = new;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st n = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L2():
    labels1 = ld labels;
    check L4() else D0();
  L3():
    r = dyn base(<sym labels>);
    goto L0(r);
  D0():
    deopt 2 [labels1];
  L1(r4):
    st m = r4;
    paste = ldf paste;
    check L10() else D4();
  L4():
    labels2 = force? labels1;
    checkMissing(labels2);
    length = ldf length in base;
    r2 = dyn length(labels2);
    check L5() else D1();
  L6():
    new1 = ld new;
    check L8() else D2();
  L7():
    r3 = dyn base1(<sym new>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [new1];
  D4():
    deopt 15 [];
  L5():
    goto L0(r2);
  L8():
    new2 = force? new1;
    checkMissing(new2);
    length1 = ldf length in base;
    r5 = dyn length1(new2);
    check L9() else D3();
  L10():
    p = prom<V +>{
      labels3 = ld labels;
      labels4 = force? labels3;
      checkMissing(labels4);
      c = `is.object`(labels4);
      if c then L3() else L4(labels4);
    L0(dx1):
      return dx1;
    L3():
      dr = tryDispatchBuiltin.1("[", labels4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L5() else L4(dr);
    L4(labels6):
      sym2 = ldf `rep.int`;
      base2 = ldf `rep.int` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L6() else L7();
    L1(labels9, r7):
      __ = ldf `[` in base;
      r13 = dyn __(labels9, r7);
      goto L0(r13);
    L5():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L6():
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      r8 = `:`(1, n1);
      sym3 = ldf `rep.int`;
      base3 = ldf `rep.int` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L8() else L9();
    L7():
      r6 = dyn base2(<lang `:`(1, n)>, <lang rep.int(m, n)>);
      goto L1(labels6, r6);
    L2(labels12, r10):
      rep_int1 = ldf `rep.int` in base;
      r12 = dyn rep_int1(r8, r10);
      goto L1(labels12, r12);
    L8():
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      rep_int = ldf `rep.int` in base;
      r11 = dyn rep_int(m1, n3);
      goto L2(labels6, r11);
    L9():
      r9 = dyn base3(<sym m>, <sym n>);
      goto L2(labels6, r9);
    };
    p1 = prom<V +>{
      new3 = ld new;
      new4 = force? new3;
      checkMissing(new4);
      c1 = `is.object`(new4);
      if c1 then L2() else L3(new4);
    L0(dx3):
      return dx3;
    L2():
      dr2 = tryDispatchBuiltin.1("[", new4);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(new6):
      sym4 = ldf `rep.int`;
      base4 = ldf `rep.int` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L5() else L6();
    L1(new9, r16):
      __1 = ldf `[` in base;
      r19 = dyn __1(new9, r16);
      goto L0(r19);
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L5():
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      r17 = `:`(1, m3);
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      rep_int2 = ldf `rep.int` in base;
      r18 = dyn rep_int2(r17, n5);
      goto L1(new6, r18);
    L6():
      r15 = dyn base4(<lang `:`(1, m)>, <sym n>);
      goto L1(new6, r15);
    };
    r21 = dyn paste[, , sep](p, p1, "#");
    check L11() else D5();
  D3():
    deopt 12 [r5];
  D5():
    deopt 20 [r21];
  L9():
    goto L1(r5);
  L11():
    popenv;
    return r21;
  }
}