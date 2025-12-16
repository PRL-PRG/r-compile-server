fun main() {
  () -+> V { reg r:cls, reg matrix:cls, reg p:p(V +), reg r2:V, reg unlist:cls, reg determinant:cls, reg x:*, reg x1:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg r6:V, reg det:cls, reg x2:*, reg x3:V, reg p3:p(V +), reg r8:V, reg det1:cls, reg print:cls, reg cbind:cls, reg p4:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg c:cls, reg r12:V, reg p5:p(V +), reg r14:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V |
    mkenv;
    r = clos `inner-103057629`;
    st det = r;
    matrix = ldf matrix;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    r2 = dyn matrix[, ncol](p, 2.0);
    check L1() else D1();
  D1():
    deopt 8 [r2];
  L1():
    st x = r2;
    unlist = ldf unlist;
    check L2() else D2();
  D2():
    deopt 11 [];
  L2():
    p2 = prom<V +>{
      determinant = ldf determinant;
      p1 = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        return x1;
      };
      r4 = dyn determinant(p1);
      return r4;
    };
    r6 = dyn unlist(p2);
    check L3() else D3();
  D3():
    deopt 13 [r6];
  L3():
    det = ldf det;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    p3 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r8 = dyn det(p3);
    check L5() else D5();
  D5():
    deopt 17 [r8];
  L5():
    det1 = ldf det;
    check L6() else D6();
  D6():
    deopt 19 [];
  L6():
    p7 = prom<V +>{
      print = ldf print;
      p6 = prom<V +>{
        cbind = ldf cbind;
        p4 = prom<V +>{
          return <int 1, 2, 3>;
        };
        p5 = prom<V +>{
          sym = ldf c;
          base = ldf c in base;
          guard = `==`.4(sym, base);
          if guard then L1() else L2();
        L0(r11):
          return r11;
        L1():
          c = ldf c in base;
          r12 = dyn c(2.0, 0.0, 1.0);
          goto L0(r12);
        L2():
          r10 = dyn base(2.0, 0.0, 1.0);
          goto L0(r10);
        };
        r14 = dyn cbind(1.0, p4, p5);
        return r14;
      };
      r16 = dyn print(p6);
      return r16;
    };
    r18 = dyn det1(p7);
    check L7() else D7();
  D7():
    deopt 21 [r18];
  L7():
    popenv;
    return r18;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg determinant:cls, reg x1:*, reg x2:V, reg p:p(V +), reg ddd1:dots?, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg z:*, reg z1:V, reg c:L, reg z3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg dx4:V, reg r6:V, reg z4:*, reg z5:V, reg c1:L, reg dx6:V, reg z7:V, reg dr2:V, reg dc1:L, reg dx8:V, reg dx9:V, reg dx10:V, reg r7:V, reg r8:V, reg r9:V, reg c2:cls, reg r10:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    determinant = ldf determinant;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    ddd1 = ld `...`;
    r1 = dyn determinant[, logarithm, `...`](p, TRUE, ddd1);
    check L3() else D1();
  D1():
    deopt 6 [r1];
  L3():
    st z = r1;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r3):
    popenv;
    return r3;
  L4():
    z = ld z;
    check L6() else D2();
  L5():
    r2 = dyn base(<lang `*`(`$`(z, sign), exp(`$`(z, modulus)))>);
    goto L0(r2);
  D2():
    deopt 10 [z];
  L6():
    z1 = force? z;
    checkMissing(z1);
    c = `is.object`(z1);
    if c then L8() else L9(z1);
  L7(dx1):
    sym1 = ldf exp;
    base1 = ldf exp in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L8():
    dr = tryDispatchBuiltin.1("$", z1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(z3):
    r4 = `$`(z3, <sym sign>);
    goto L7(r4);
  L1(dx4, r6):
    r9 = `*`(dx4, r6);
    c2 = ldf c in base;
    r10 = dyn c2(r9);
    check L18() else D4();
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L11():
    z4 = ld z;
    check L13() else D3();
  L12():
    r5 = dyn base1(<lang `$`(z, modulus)>);
    goto L1(dx1, r5);
  D3():
    deopt 13 [dx1, z4];
  D4():
    deopt 19 [r10];
  L13():
    z5 = force? z4;
    checkMissing(z5);
    c1 = `is.object`(z5);
    if c1 then L15() else L16(dx1, z5);
  L18():
    goto L0(r10);
  L14(dx9, dx10):
    r8 = exp(dx10);
    goto L1(dx9, r8);
  L15():
    dr2 = tryDispatchBuiltin.1("$", z5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L17() else L16(dx1, dr2);
  L16(dx6, z7):
    r7 = `$`(z7, <sym modulus>);
    goto L14(dx6, r7);
  L17():
    dx8 = getTryDispatchBuiltinValue(dr2);
    goto L14(dx1, dx8);
  }
}