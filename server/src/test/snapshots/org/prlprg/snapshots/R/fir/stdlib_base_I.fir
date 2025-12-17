fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st I = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg unique_default:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg oldClass:cls, reg r4:V, reg c:cls, reg r5:V, reg p:p(V +), reg r7:V, reg l:*, reg class__:cls, reg r8:V, reg x3:*, reg x4:V |
    mkenv;
    st x = x;
    unique_default = ldf `unique.default`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      return r1;
    L2():
      sym1 = ldf oldClass;
      base1 = ldf oldClass in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r = dyn base("AsIs", <lang oldClass(x)>);
      goto L0(r);
    L1(r3):
      c = ldf c in base;
      r5 = dyn c("AsIs", r3);
      goto L0(r5);
    L4():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      oldClass = ldf oldClass in base;
      r4 = dyn oldClass(x2);
      goto L1(r4);
    L5():
      r2 = dyn base1(<sym x>);
      goto L1(r2);
    };
    r7 = dyn unique_default(p);
    check L1() else D1();
  D1():
    deopt 3 [r7];
  L1():
    l = ld x;
    class__ = ldf `class<-`;
    check L2() else D2();
  D2():
    deopt 5 [r7, l, r7];
  L2():
    r8 = dyn class__(l, NULL, r7);
    check L3() else D3();
  D3():
    deopt 7 [r7, r8];
  L3():
    st x = r8;
    x3 = ld x;
    check L4() else D4();
  D4():
    deopt 9 [x3];
  L4():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  }
}