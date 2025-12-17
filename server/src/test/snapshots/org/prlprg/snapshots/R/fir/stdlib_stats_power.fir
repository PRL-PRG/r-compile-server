fun main() {
  () -+> V { reg r:cls, reg power:cls, reg r1:V, reg quasi:cls, reg power1:cls, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V, reg c:L, reg r7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg r12:V, reg c1:cls, reg r13:V, reg __:cls, reg r14:V |
    mkenv;
    r = clos inner1358582909;
    st power = r;
    power = ldf power;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    r1 = dyn power();
    check L3() else D1();
  D1():
    deopt 5 [r1];
  L3():
    quasi = ldf quasi;
    check L4() else D2();
  D2():
    deopt 7 [];
  L4():
    p1 = prom<V +>{
      power1 = ldf power;
      p = prom<V +>{
        return 0.3333333333333333;
      };
      r3 = dyn power1(p);
      return r3;
    };
    r5 = dyn quasi[link](p1);
    check L5() else D3();
  D3():
    deopt 10 [r5];
  L5():
    c = `is.object`(r5);
    if c then L6() else L7(r5);
  L0(dx1):
    popenv;
    return dx1;
  L6():
    dr = tryDispatchBuiltin.1("[", r5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(r7):
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1(r11, r12):
    __ = ldf `[` in base;
    r14 = dyn __(r11, r12);
    goto L0(r14);
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L9():
    c1 = ldf c in base;
    r13 = dyn c1("linkfun", "linkinv");
    check L11() else D4();
  L10():
    r10 = dyn base("linkfun", "linkinv");
    goto L1(r7, r10);
  D4():
    deopt 16 [r7, r13];
  L11():
    goto L1(r7, r13);
  }
}
fun inner1358582909(lambda) {
  (reg lambda:*) -+> V { var lambda:*, reg lambda_isMissing:L, reg lambda_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg lambda1:*, reg lambda2:V, reg is_numeric:cls, reg r2:V, reg r3:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg lambda3:*, reg lambda4:V, reg is_na:cls, reg r6:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r7:V, reg lambda5:*, reg lambda6:V, reg r9:V, reg c10:L, reg make_link:cls, reg r10:V, reg lambda7:*, reg lambda8:V, reg r13:V, reg c11:L, reg make_link1:cls, reg r14:V, reg r17:cls, reg r18:cls, reg r19:cls, reg r20:cls, reg paste0:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg round:cls, reg r23:V, reg p:p(V +), reg r25:V, reg structure:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg linkfun:*, reg linkfun1:V, reg linkinv:*, reg linkinv1:V, reg mu_eta:*, reg mu_eta1:V, reg valideta:*, reg valideta1:V, reg link:*, reg link1:V, reg list:cls, reg r28:V, reg p1:p(V +), reg r30:V |
    mkenv;
    lambda_isMissing = missing.0(lambda);
    if lambda_isMissing then L0(1.0) else L0(lambda);
  L0(lambda_orDefault):
    st lambda = lambda_orDefault;
    sym = ldf `is.numeric`;
    base = ldf `is.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L2(c) else L14();
  L10():
    lambda1 = ld lambda;
    check L12() else D0();
  L11():
    r = dyn base(<sym lambda>);
    goto L1(r);
  D0():
    deopt 2 [lambda1];
  L2(c1):
    c9 = `as.logical`(c1);
    if c9 then L20() else L4();
  L12():
    lambda2 = force? lambda1;
    checkMissing(lambda2);
    is_numeric = ldf `is.numeric` in base;
    r2 = dyn is_numeric(lambda2);
    check L13() else D1();
  L14():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  D1():
    deopt 5 [r2];
  L3(c5, r5):
    c6 = `as.logical`(r5);
    c7 = `||`(c5, c6);
    goto L2(c7);
  L4():
    goto L5();
  L5():
    lambda5 = ld lambda;
    check L24() else D6();
  L13():
    goto L1(r2);
  L15():
    lambda3 = ld lambda;
    check L17() else D2();
  L16():
    r4 = dyn base1(<sym lambda>);
    goto L3(c, r4);
  L20():
    stop = ldf stop;
    check L21() else D4();
  D2():
    deopt 9 [c, lambda3];
  D4():
    deopt 15 [];
  D6():
    deopt 20 [lambda5];
  L17():
    lambda4 = force? lambda3;
    checkMissing(lambda4);
    is_na = ldf `is.na` in base;
    r6 = dyn is_na(lambda4);
    check L18() else D3();
  L21():
    r7 = dyn stop("invalid argument 'lambda'");
    check L22() else D5();
  L24():
    lambda6 = force? lambda5;
    checkMissing(lambda6);
    r9 = `<=`(lambda6, 0.0);
    c10 = `as.logical`(r9);
    if c10 then L25() else L6();
  D3():
    deopt 12 [c, r6];
  D5():
    deopt 17 [r7];
  L6():
    lambda7 = ld lambda;
    check L30() else D9();
  L18():
    goto L3(c, r6);
  L22():
    goto L5();
  L25():
    make_link = ldf `make.link`;
    check L26() else D7();
  D7():
    deopt 25 [];
  D9():
    deopt 31 [lambda7];
  L26():
    r10 = dyn make_link("log");
    check L27() else D8();
  L30():
    lambda8 = force? lambda7;
    checkMissing(lambda8);
    r13 = `==`(lambda8, 1.0);
    c11 = `as.logical`(r13);
    if c11 then L31() else L8();
  D8():
    deopt 27 [r10];
  L8():
    r17 = clos inner987613256;
    st linkfun = r17;
    r18 = clos inner1704214286;
    st linkinv = r18;
    r19 = clos inner1704214286;
    st `mu.eta` = r19;
    r20 = clos inner1704214286;
    st valideta = r20;
    paste0 = ldf paste0;
    check L36() else D12();
  L27():
    popenv;
    return r10;
  L31():
    make_link1 = ldf `make.link`;
    check L32() else D10();
  D10():
    deopt 36 [];
  D12():
    deopt 55 [];
  L32():
    r14 = dyn make_link1("identity");
    check L33() else D11();
  L36():
    p = prom<V +>{
      sym2 = ldf round;
      base2 = ldf round in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      round = ldf round in base;
      r23 = dyn round(<sym lambda>, 3.0);
      goto L0(r23);
    L2():
      r21 = dyn base2(<sym lambda>, 3.0);
      goto L0(r21);
    };
    r25 = dyn paste0("mu^", p);
    check L37() else D13();
  D11():
    deopt 38 [r14];
  D13():
    deopt 58 [r25];
  L33():
    popenv;
    return r14;
  L37():
    st link = r25;
    structure = ldf structure;
    check L38() else D14();
  D14():
    deopt 61 [];
  L38():
    p1 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r27):
      return r27;
    L1():
      linkfun = ld linkfun;
      linkfun1 = force? linkfun;
      checkMissing(linkfun1);
      linkinv = ld linkinv;
      linkinv1 = force? linkinv;
      checkMissing(linkinv1);
      mu_eta = ld `mu.eta`;
      mu_eta1 = force? mu_eta;
      checkMissing(mu_eta1);
      valideta = ld valideta;
      valideta1 = force? valideta;
      checkMissing(valideta1);
      link = ld link;
      link1 = force? link;
      checkMissing(link1);
      list = ldf list in base;
      r28 = dyn list(linkfun1, linkinv1, mu_eta1, valideta1, link1);
      goto L0(r28);
    L2():
      r26 = dyn base3[linkfun, linkinv, `mu.eta`, valideta, name](<sym linkfun>, <sym linkinv>, <sym mu.eta>, <sym valideta>, <sym link>);
      goto L0(r26);
    };
    r30 = dyn structure[, class](p1, "link-glm");
    check L39() else D15();
  D15():
    deopt 65 [r30];
  L39():
    popenv;
    return r30;
  }
}
fun inner987613256(mu) {
  (reg mu:*) -+> V { var mu:*, reg mu1:*, reg mu2:V, reg lambda:*, reg lambda1:V, reg r:V |
    mkenv;
    st mu = mu;
    mu1 = ld mu;
    check L0() else D0();
  D0():
    deopt 0 [mu1];
  L0():
    mu2 = force? mu1;
    checkMissing(mu2);
    lambda = ld lambda;
    check L1() else D1();
  D1():
    deopt 1 [mu2, lambda];
  L1():
    lambda1 = force? lambda;
    checkMissing(lambda1);
    r = `^`(mu2, lambda1);
    popenv;
    return r;
  }
}
fun inner1704214286(eta) {
  (reg eta:*) -+> V { var eta:*, reg pmax:cls, reg eta1:*, reg eta2:V, reg lambda:*, reg lambda1:V, reg r:V, reg r1:V, reg p:p(V +), reg _Machine:*, reg _Machine1:V, reg c:L, reg _Machine3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg p1:p(V +), reg r5:V |
    mkenv;
    st eta = eta;
    pmax = ldf pmax;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      eta1 = ld eta;
      eta2 = force? eta1;
      checkMissing(eta2);
      lambda = ld lambda;
      lambda1 = force? lambda;
      checkMissing(lambda1);
      r = `/`(1.0, lambda1);
      r1 = `^`(eta2, r);
      return r1;
    };
    p1 = prom<V +>{
      _Machine = ld `.Machine`;
      _Machine1 = force? _Machine;
      checkMissing(_Machine1);
      c = `is.object`(_Machine1);
      if c then L1() else L2(_Machine1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", _Machine1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_Machine3):
      r3 = `$`(_Machine3, <sym double.eps>);
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r5 = dyn pmax(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r5];
  L1():
    popenv;
    return r5;
  }
}