fun main() {
  () -+> V { reg r:cls, reg as_function:cls, reg alist:cls, reg a:*, reg a1:V, reg b:*, reg b1:V, reg r1:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V, reg as_function1:cls, reg alist1:cls, reg a2:*, reg a3:V, reg b2:*, reg b3:V, reg r6:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V, reg r11:cls, reg r12:V |
    mkenv;
    r = clos `inner-103057629`;
    st `as.function` = r;
    as_function = ldf `as.function`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p1 = prom<V +>{
      alist = ldf alist;
      p = prom<V +>{
        a = ld a;
        a1 = force? a;
        checkMissing(a1);
        b = ld b;
        b1 = force? b;
        checkMissing(b1);
        r1 = `+`(a1, b1);
        return r1;
      };
      r3 = dyn alist[a, b, ](<missing>, 2.0, p);
      return r3;
    };
    r5 = dyn as_function(p1);
    check L1() else D1();
  D1():
    deopt 6 [r5];
  L1():
    as_function1 = ldf `as.function`;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p3 = prom<V +>{
      alist1 = ldf alist;
      p2 = prom<V +>{
        a2 = ld a;
        a3 = force? a2;
        checkMissing(a3);
        b2 = ld b;
        b3 = force? b2;
        checkMissing(b3);
        r6 = `+`(a3, b3);
        return r6;
      };
      r8 = dyn alist1[a, b, ](<missing>, 2.0, p2);
      return r8;
    };
    r10 = dyn as_function1(p3);
    check L3() else D3();
  D3():
    deopt 10 [r10];
  L3():
    checkFun.0(r10);
    r11 = r10 as cls;
    r12 = dyn r11(3.0);
    check L4() else D4();
  D4():
    deopt 13 [r12];
  L4():
    popenv;
    return r12;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("as.function");
    goto L0(r2);
  L2():
    r = dyn base("as.function");
    goto L0(r);
  }
}