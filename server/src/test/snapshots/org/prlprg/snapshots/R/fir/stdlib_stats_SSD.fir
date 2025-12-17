fun main() {
  () -+> V { reg r:cls, reg matrix:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg list:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg lm:cls, reg __:cls, reg r13:V, reg p2:p(V +), reg r15:V, reg SSD:cls, reg mlmfit:*, reg mlmfit1:V, reg p3:p(V +), reg r17:V, reg estVar:cls, reg mlmfit2:*, reg mlmfit3:V, reg p4:p(V +), reg r19:V |
    mkenv;
    r = clos inner64320599;
    st SSD = r;
    matrix = ldf matrix;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(420.0, 420.0, 480.0, 480.0, 600.0, 780.0, 420.0, 480.0, 480.0, 360.0, 480.0, 600.0, 480.0, 480.0, 540.0, 660.0, 780.0, 780.0, 420.0, 540.0, 540.0, 480.0, 780.0, 900.0, 540.0, 660.0, 540.0, 480.0, 660.0, 720.0, 360.0, 420.0, 360.0, 360.0, 480.0, 540.0, 480.0, 480.0, 600.0, 540.0, 720.0, 840.0, 480.0, 600.0, 660.0, 540.0, 720.0, 900.0, 540.0, 600.0, 540.0, 480.0, 720.0, 780.0, 480.0, 420.0, 540.0, 540.0, 660.0, 780.0);
      goto L0(r3);
    L2():
      r1 = dyn base(420.0, 420.0, 480.0, 480.0, 600.0, 780.0, 420.0, 480.0, 480.0, 360.0, 480.0, 600.0, 480.0, 480.0, 540.0, 660.0, 780.0, 780.0, 420.0, 540.0, 540.0, 480.0, 780.0, 900.0, 540.0, 660.0, 540.0, 480.0, 660.0, 720.0, 360.0, 420.0, 360.0, 360.0, 480.0, 540.0, 480.0, 480.0, 600.0, 540.0, 720.0, 840.0, 480.0, 600.0, 660.0, 540.0, 720.0, 900.0, 540.0, 600.0, 540.0, 480.0, 720.0, 780.0, 480.0, 420.0, 540.0, 540.0, 660.0, 780.0);
      goto L0(r1);
    };
    p1 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r6):
      return r6;
    L2():
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r5 = dyn base1[subj, cond](<lang `:`(1.0, 10.0)>, <lang c("deg0NA", "deg4NA", "deg8NA", "deg0NP", "deg4NP", "deg8NP")>);
      goto L0(r5);
    L1(r8):
      list = ldf list in base;
      r10 = dyn list(<int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>, r8);
      goto L0(r10);
    L4():
      c1 = ldf c in base;
      r9 = dyn c1("deg0NA", "deg4NA", "deg8NA", "deg0NP", "deg4NP", "deg8NP");
      goto L1(r9);
    L5():
      r7 = dyn base2("deg0NA", "deg4NA", "deg8NA", "deg0NP", "deg4NP", "deg8NP");
      goto L1(r7);
    };
    r12 = dyn matrix[, ncol, byrow, dimnames](p, 6.0, TRUE, p1);
    check L1() else D1();
  D1():
    deopt 12 [r12];
  L1():
    st reacttime = r12;
    lm = ldf lm;
    check L2() else D2();
  D2():
    deopt 15 [];
  L2():
    p2 = prom<V +>{
      __ = ldf `~` in base;
      r13 = dyn __(<sym reacttime>, 1.0);
      return r13;
    };
    r15 = dyn lm(p2);
    check L3() else D3();
  D3():
    deopt 17 [r15];
  L3():
    st mlmfit = r15;
    SSD = ldf SSD;
    check L4() else D4();
  D4():
    deopt 20 [];
  L4():
    p3 = prom<V +>{
      mlmfit = ld mlmfit;
      mlmfit1 = force? mlmfit;
      checkMissing(mlmfit1);
      return mlmfit1;
    };
    r17 = dyn SSD(p3);
    check L5() else D5();
  D5():
    deopt 22 [r17];
  L5():
    estVar = ldf estVar;
    check L6() else D6();
  D6():
    deopt 24 [];
  L6():
    p4 = prom<V +>{
      mlmfit2 = ld mlmfit;
      mlmfit3 = force? mlmfit2;
      checkMissing(mlmfit3);
      return mlmfit3;
    };
    r19 = dyn estVar(p4);
    check L7() else D7();
  D7():
    deopt 26 [r19];
  L7():
    popenv;
    return r19;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st object = object;
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
    r2 = dyn UseMethod("SSD");
    goto L0(r2);
  L2():
    r = dyn base("SSD");
    goto L0(r);
  }
}