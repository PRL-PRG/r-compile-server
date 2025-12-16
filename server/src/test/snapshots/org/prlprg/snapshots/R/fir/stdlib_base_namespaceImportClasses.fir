fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1995204894;
    st namespaceImportClasses = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1995204894(self, ns, vars, from) {
  (reg self:*, reg ns:*, reg vars:*, reg from:*) -+> V { var self:*, var ns:*, var vars:*, var from:*, reg from_isMissing:L, reg from_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg vars1:*, reg vars2:V, reg r2:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg __:cls, reg r3:V, reg r4:cls, reg vars3:*, reg vars4:V, reg c1:L, reg vars6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __1:cls, reg r5:V, reg p:p(V +), reg r7:V, reg l1:*, reg c2:L, reg i8:I, reg r9:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i10:I, reg dx3:V, reg i11:*, reg i12:V, reg ____:cls, reg r12:V, reg namespaceImportFrom:cls, reg self1:*, reg self2:V, reg p1:p(V +), reg asNamespace:cls, reg ns1:*, reg ns2:V, reg p2:p(V +), reg r15:V, reg p3:p(V +), reg vars7:*, reg vars8:V, reg p4:p(V +), reg from1:*, reg from2:V, reg p5:p(V +), reg r19:V |
    mkenv;
    st self = self;
    st ns = ns;
    st vars = vars;
    from_isMissing = missing.0(from);
    if from_isMissing then L0(NULL) else L0(from);
  L0(from_orDefault):
    st from = from_orDefault;
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(r1):
    s = toForSeq(r1);
    l = length(s);
    i = 0;
    goto L2(i);
  L5():
    vars1 = ld vars;
    check L7() else D0();
  L6():
    r = dyn base(<sym vars>);
    goto L1(r);
  D0():
    deopt 1 [vars1];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L8() else L4();
  L7():
    vars2 = force? vars1;
    checkMissing(vars2);
    r2 = seq_along(vars2);
    goto L1(r2);
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    __ = ldf `::`;
    check L9() else D1();
  L8():
    namespaceImportFrom = ldf namespaceImportFrom;
    check L16() else D5();
  D1():
    deopt 5 [i2];
  D5():
    deopt 21 [];
  L9():
    r3 = dyn __("methods", "classMetaName");
    check L10() else D2();
  L16():
    p1 = prom<V +>{
      self1 = ld self;
      self2 = force? self1;
      checkMissing(self2);
      return self2;
    };
    p3 = prom<V +>{
      asNamespace = ldf asNamespace;
      p2 = prom<V +>{
        ns1 = ld ns;
        ns2 = force? ns1;
        checkMissing(ns2);
        return ns2;
      };
      r15 = dyn asNamespace(p2);
      return r15;
    };
    p4 = prom<V +>{
      vars7 = ld vars;
      vars8 = force? vars7;
      checkMissing(vars8);
      return vars8;
    };
    p5 = prom<V +>{
      from1 = ld from;
      from2 = force? from1;
      checkMissing(from2);
      return from2;
    };
    r19 = dyn namespaceImportFrom[, , , from](p1, p3, p4, p5);
    check L17() else D6();
  D2():
    deopt 8 [i2, r3];
  D6():
    deopt 27 [r19];
  L10():
    checkFun.0(r3);
    r4 = r3 as cls;
    p = prom<V +>{
      vars3 = ld vars;
      vars4 = force? vars3;
      checkMissing(vars4);
      c1 = `is.object`(vars4);
      if c1 then L1() else L2(vars4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", vars4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(vars6):
      i5 = ld i;
      i6 = force? i5;
      __1 = ldf `[[` in base;
      r5 = dyn __1(vars6, i6);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r7 = dyn r4(p);
    check L11() else D3();
  L17():
    popenv;
    return r19;
  D3():
    deopt 11 [i2, r7];
  L11():
    l1 = ld vars;
    c2 = `is.object`(l1);
    if c2 then L12() else L13(i2, r7, l1);
  L3(i10, dx3):
    st vars = dx3;
    goto L2(i10);
  L12():
    dr2 = tryDispatchBuiltin.0("[[<-", l1, r7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L14() else L13(i2, r7, dr2);
  L13(i8, r9, l3):
    i11 = ld i;
    check L15() else D4();
  D4():
    deopt 13 [i8, r9, l3, r7, i11];
  L14():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(i2, dx2);
  L15():
    i12 = force? i11;
    ____ = ldf `[[<-` in base;
    r12 = dyn ____(l3, r7, i12);
    goto L3(i8, r12);
  }
}