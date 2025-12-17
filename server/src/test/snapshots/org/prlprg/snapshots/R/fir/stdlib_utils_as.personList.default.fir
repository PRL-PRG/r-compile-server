fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `as.personList.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg c:L, reg x3:*, reg x4:V, reg do_call:cls, reg c1:*, reg c2:V, reg p:p(V +), reg lapply:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg as_person:*, reg as_person1:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V |
    mkenv;
    st x = x;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L7() else L1();
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<sym x>, "person");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    do_call = ldf `do.call`;
    check L11() else D3();
  L5():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "person", FALSE);
    check L6() else D1();
  L7():
    x3 = ld x;
    check L8() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 8 [x3];
  D3():
    deopt 14 [];
  L6():
    goto L0(r2);
  L8():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L11():
    p = prom<V +>{
      c1 = ld c;
      c2 = force? c1;
      checkMissing(c2);
      return c2;
    };
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      p2 = prom<V +>{
        as_person = ld `as.person`;
        as_person1 = force? as_person;
        checkMissing(as_person1);
        return as_person1;
      };
      r8 = dyn lapply(p1, p2);
      return r8;
    };
    r10 = dyn do_call(p, p3);
    check L12() else D4();
  D4():
    deopt 17 [r10];
  L12():
    popenv;
    return r10;
  }
}