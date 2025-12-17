fun main() {
  () -+> V { reg r:cls, reg update:cls, reg __:cls, reg r1:V, reg p:p(V +), reg __1:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg update1:cls, reg __2:cls, reg r6:V, reg p2:p(V +), reg __3:cls, reg r8:V, reg p3:p(V +), reg r10:V, reg update2:cls, reg __4:cls, reg r11:V, reg p4:p(V +), reg __5:cls, reg r13:V, reg p5:p(V +), reg r15:V |
    mkenv;
    r = clos inner149914737;
    st `update.formula` = r;
    update = ldf update;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      __ = ldf `~` in base;
      r1 = dyn __(<sym y>, <sym x>);
      return r1;
    };
    p1 = prom<V +>{
      __1 = ldf `~` in base;
      r3 = dyn __1(<lang `+`(., x2)>);
      return r3;
    };
    r5 = dyn update(p, p1);
    check L1() else D1();
  D1():
    deopt 7 [r5];
  L1():
    update1 = ldf update;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p2 = prom<V +>{
      __2 = ldf `~` in base;
      r6 = dyn __2(<sym y>, <sym x>);
      return r6;
    };
    p3 = prom<V +>{
      __3 = ldf `~` in base;
      r8 = dyn __3(<lang log(.)>, <sym .>);
      return r8;
    };
    r10 = dyn update1(p2, p3);
    check L3() else D3();
  D3():
    deopt 12 [r10];
  L3():
    update2 = ldf update;
    check L4() else D4();
  D4():
    deopt 14 [];
  L4():
    p4 = prom<V +>{
      __4 = ldf `~` in base;
      r11 = dyn __4(<sym .>, <lang `+`(u, v)>);
      return r11;
    };
    p5 = prom<V +>{
      __5 = ldf `~` in base;
      r13 = dyn __5(<sym res>, <sym .>);
      return r13;
    };
    r15 = dyn update2(p4, p5);
    check L5() else D5();
  D5():
    deopt 17 [r15];
  L5():
    popenv;
    return r15;
  }
}
fun inner149914737(old, new, `...`) {
  (reg old:*, reg new:*, reg ddd:dots) -+> V { var old:*, var new:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_updateform:*, reg C_updateform1:V, reg as_formula:cls, reg old1:*, reg old2:V, reg p:p(V +), reg r3:V, reg as_formula1:cls, reg new1:*, reg new2:V, reg p1:p(V +), reg r5:V, reg vargs:dots, reg r6:V, reg formula:cls, reg terms_formula:cls, reg tmp:*, reg tmp1:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V |
    mkenv;
    st old = old;
    st new = new;
    st `...` = ddd;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st tmp = r1;
    formula = ldf formula;
    check L8() else D5();
  L1():
    C_updateform = ld C_updateform;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_updateform>, <lang as.formula(old)>, <lang as.formula(new)>);
    goto L0(r);
  D0():
    deopt 1 [C_updateform];
  D5():
    deopt 12 [];
  L3():
    C_updateform1 = force? C_updateform;
    checkMissing(C_updateform1);
    as_formula = ldf `as.formula`;
    check L4() else D1();
  L8():
    p3 = prom<V +>{
      terms_formula = ldf `terms.formula`;
      p2 = prom<V +>{
        tmp = ld tmp;
        tmp1 = force? tmp;
        checkMissing(tmp1);
        return tmp1;
      };
      r8 = dyn terms_formula[, simplify](p2, TRUE);
      return r8;
    };
    r10 = dyn formula(p3);
    check L9() else D6();
  D1():
    deopt 3 [C_updateform1];
  D6():
    deopt 14 [r10];
  L4():
    p = prom<V +>{
      old1 = ld old;
      old2 = force? old1;
      checkMissing(old2);
      return old2;
    };
    r3 = dyn as_formula(p);
    check L5() else D2();
  L9():
    popenv;
    return r10;
  D2():
    deopt 5 [C_updateform1, r3];
  L5():
    as_formula1 = ldf `as.formula`;
    check L6() else D3();
  D3():
    deopt 6 [C_updateform1, r3];
  L6():
    p1 = prom<V +>{
      new1 = ld new;
      new2 = force? new1;
      checkMissing(new2);
      return new2;
    };
    r5 = dyn as_formula1(p1);
    check L7() else D4();
  D4():
    deopt 8 [C_updateform1, r3, r5];
  L7():
    vargs = dots[r3, r5];
    r6 = `.Call`(C_updateform1, vargs, <missing>);
    goto L0(r6);
  }
}