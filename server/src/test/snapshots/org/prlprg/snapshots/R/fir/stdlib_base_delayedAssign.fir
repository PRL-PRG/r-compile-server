fun main() {
  () -+> V { reg r:cls, reg delayedAssign:cls, reg msg:*, reg msg1:V, reg p:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg substitute:cls, reg r5:V, reg x:*, reg x1:V, reg delayedAssign1:cls, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x2:V, reg cat:cls, reg p1:p(V +), reg r8:V, reg x3:*, reg x4:V, reg x5:*, reg x6:V, reg new_env:cls, reg r11:V, reg delayedAssign2:cls, reg p2:p(V +), reg ne:*, reg ne1:V, reg p3:p(V +), reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg substitute1:cls, reg r17:V, reg stopifnot:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg substitute2:cls, reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg quote:cls, reg r25:V, reg identical:cls, reg r26:V, reg p4:p(V +), reg r28:V, reg r29:cls, reg r30:cls, reg cos:*, reg cos1:V, reg p5:p(V +), reg cat1:cls, reg p6:p(V +), reg r34:V, reg r35:cls, reg gete:cls, reg e:*, reg e1:V, reg p7:p(V +), reg r37:V, reg sapply:cls, reg exps:*, reg exps1:V, reg p8:p(V +), reg typeof:*, reg typeof1:V, reg p9:p(V +), reg r40:V, reg as_list:cls, reg e2:*, reg e3:V, reg p10:p(V +), reg r42:V, reg stopifnot1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg le:*, reg le1:V, reg lapply:cls, reg exps2:*, reg exps3:V, reg p11:p(V +), reg eval:*, reg eval1:V, reg p12:p(V +), reg r47:V, reg identical1:cls, reg r48:V, reg p13:p(V +), reg r50:V |
    mkenv;
    r = clos inner1493287430;
    st delayedAssign = r;
    st msg = "old";
    delayedAssign = ldf delayedAssign;
    check L2() else D0();
  D0():
    deopt 7 [];
  L2():
    p = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r2 = dyn delayedAssign("x", p);
    check L3() else D1();
  D1():
    deopt 10 [r2];
  L3():
    sym = ldf substitute;
    base = ldf substitute in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0():
    st msg = "new!";
    x = ld x;
    check L6() else D2();
  L4():
    substitute = ldf substitute in base;
    r5 = dyn substitute(<sym x>);
    goto L0();
  L5():
    r3 = dyn base(<sym x>);
    goto L0();
  D2():
    deopt 17 [x];
  L6():
    x1 = force? x;
    checkMissing(x1);
    delayedAssign1 = ldf delayedAssign;
    check L7() else D3();
  D3():
    deopt 20 [];
  L7():
    p1 = prom<V +>{
      s = toForSeq(<int 1, 2, 3>);
      l = length(s);
      i = 0;
      goto L0(i);
    L0(i1):
      i2 = `+`.1(i1, 1);
      c = `<`.1(l, i2);
      if c then L2() else L1();
    L1():
      x2 = `[[`(s, i2, NULL, TRUE);
      st i = x2;
      cat = ldf cat;
      dyn cat("yippee!\n");
      goto L0(i2);
    L2():
      return 10.0;
    };
    r8 = dyn delayedAssign1("x", p1);
    check L8() else D4();
  D4():
    deopt 23 [r8];
  L8():
    x3 = ld x;
    check L9() else D5();
  D5():
    deopt 24 [x3];
  L9():
    x4 = force? x3;
    checkMissing(x4);
    `^`(x4, 2.0);
    x5 = ld x;
    check L10() else D6();
  D6():
    deopt 28 [x5];
  L10():
    x6 = force? x5;
    checkMissing(x6);
    `^`(x6, 2.0);
    new_env = ldf `new.env`;
    check L11() else D7();
  D7():
    deopt 33 [];
  L11():
    r11 = dyn new_env();
    check L12() else D8();
  D8():
    deopt 34 [r11];
  L12():
    st ne = r11;
    delayedAssign2 = ldf delayedAssign;
    check L13() else D9();
  D9():
    deopt 37 [];
  L13():
    p2 = prom<V +>{
      return 5.141592653589793;
    };
    p3 = prom<V +>{
      ne = ld ne;
      ne1 = force? ne;
      checkMissing(ne1);
      return ne1;
    };
    r14 = dyn delayedAssign2[, , `assign.env`]("x", p2, p3);
    check L14() else D10();
  D10():
    deopt 42 [r14];
  L14():
    sym1 = ldf substitute;
    base1 = ldf substitute in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L1():
    stopifnot = ldf stopifnot;
    check L17() else D11();
  L15():
    substitute1 = ldf substitute in base;
    r17 = dyn substitute1(<sym x>, <sym ne>);
    goto L1();
  L16():
    r15 = dyn base1(<sym x>, <sym ne>);
    goto L1();
  D11():
    deopt 47 [];
  L17():
    p4 = prom<V +>{
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L3() else L4();
    L0(r19):
      return r19;
    L3():
      sym3 = ldf substitute;
      base3 = ldf substitute in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L5() else L6();
    L4():
      r18 = dyn base2(<lang substitute(x, ne)>, <lang quote(`+`(pi, 2.0))>);
      goto L0(r18);
    L1(r21):
      sym4 = ldf quote;
      base4 = ldf quote in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L7() else L8();
    L5():
      substitute2 = ldf substitute in base;
      r22 = dyn substitute2(<sym x>, <sym ne>);
      goto L1(r22);
    L6():
      r20 = dyn base3(<sym x>, <sym ne>);
      goto L1(r20);
    L2(r24):
      identical = ldf identical in base;
      r26 = dyn identical(r21, r24, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r26);
    L7():
      quote = ldf quote in base;
      r25 = dyn quote(<lang `+`(pi, 2.0)>);
      goto L2(r25);
    L8():
      r23 = dyn base4(<lang `+`(pi, 2.0)>);
      goto L2(r23);
    };
    r28 = dyn stopifnot(p4);
    check L18() else D12();
  D12():
    deopt 49 [r28];
  L18():
    r29 = clos inner2411639935;
    checkFun.0(r29);
    r30 = r29 as cls;
    p5 = prom<V +>{
      cos = ld cos;
      cos1 = force? cos;
      checkMissing(cos1);
      return cos1;
    };
    p6 = prom<V +>{
      cat1 = ldf cat;
      dyn cat1(" HO!\n");
      return 5.141592653589793;
    };
    r34 = dyn r30(p5, "y", p6);
    check L19() else D13();
  D13():
    deopt 56 [r34];
  L19():
    st e = r34;
    r35 = clos inner1409904570;
    st gete = r35;
    gete = ldf gete;
    check L20() else D14();
  D14():
    deopt 62 [];
  L20():
    p7 = prom<V +>{
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      return e1;
    };
    r37 = dyn gete(p7);
    check L21() else D15();
  D15():
    deopt 64 [r37];
  L21():
    st exps = r37;
    sapply = ldf sapply;
    check L22() else D16();
  D16():
    deopt 67 [];
  L22():
    p8 = prom<V +>{
      exps = ld exps;
      exps1 = force? exps;
      checkMissing(exps1);
      return exps1;
    };
    p9 = prom<V +>{
      typeof = ld typeof;
      typeof1 = force? typeof;
      checkMissing(typeof1);
      return typeof1;
    };
    r40 = dyn sapply(p8, p9);
    check L23() else D17();
  D17():
    deopt 70 [r40];
  L23():
    as_list = ldf `as.list`;
    check L24() else D18();
  D18():
    deopt 72 [];
  L24():
    p10 = prom<V +>{
      e2 = ld e;
      e3 = force? e2;
      checkMissing(e3);
      return e3;
    };
    r42 = dyn as_list(p10);
    check L25() else D19();
  D19():
    deopt 74 [r42];
  L25():
    st le = r42;
    stopifnot1 = ldf stopifnot;
    check L26() else D20();
  D20():
    deopt 77 [];
  L26():
    p13 = prom<V +>{
      sym5 = ldf identical;
      base5 = ldf identical in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      le = ld le;
      le1 = force? le;
      checkMissing(le1);
      lapply = ldf lapply;
      p11 = prom<V +>{
        exps2 = ld exps;
        exps3 = force? exps2;
        checkMissing(exps3);
        return exps3;
      };
      p12 = prom<V +>{
        eval = ld eval;
        eval1 = force? eval;
        checkMissing(eval1);
        return eval1;
      };
      r47 = dyn lapply(p11, p12);
      identical1 = ldf identical in base;
      r48 = dyn identical1(le1, r47, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r48);
    L2():
      r43 = dyn base5(<sym le>, <lang lapply(exps, eval)>);
      goto L0(r43);
    };
    r50 = dyn stopifnot1(p13);
    check L27() else D21();
  D21():
    deopt 79 [r50];
  L27():
    popenv;
    return r50;
  }
}
fun inner1493287430(x, value, `eval.env`, `assign.env`) {
  (reg x:*, reg value:*, reg eval_env:*, reg assign_env:*) -+> V { var x:*, var value:*, var `eval.env`:*, reg eval_env_isMissing:L, reg eval_env_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), var `assign.env`:*, reg assign_env_isMissing:L, reg assign_env_orDefault:*, reg parent_frame1:cls, reg r2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg x1:*, reg x2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg substitute:cls, reg r8:V, reg eval_env1:*, reg eval_env2:V, reg assign_env1:*, reg assign_env2:V, reg delayedAssign:cls, reg r9:V |
    mkenv;
    st x = x;
    st value = value;
    eval_env_isMissing = missing.0(eval_env);
    if eval_env_isMissing then L0() else L1(eval_env);
  L0():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame(1.0);
      return r;
    };
    goto L1(p);
  L1(eval_env_orDefault):
    st `eval.env` = eval_env_orDefault;
    assign_env_isMissing = missing.0(assign_env);
    if assign_env_isMissing then L2() else L3(assign_env);
  L2():
    p1 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r2 = dyn parent_frame1(1.0);
      return r2;
    };
    goto L3(p1);
  L3(assign_env_orDefault):
    st `assign.env` = assign_env_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L4(r5):
    popenv;
    return r5;
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r4 = dyn base(<lang delayedAssign(x, substitute(value), eval.env, assign.env)>);
    goto L4(r4);
  D0():
    deopt 2 [x1];
  L8():
    x2 = force? x1;
    checkMissing(x2);
    sym1 = ldf substitute;
    base1 = ldf substitute in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L5(r7):
    eval_env1 = ld `eval.env`;
    check L11() else D1();
  L9():
    substitute = ldf substitute in base;
    r8 = dyn substitute(<sym value>);
    goto L5(r8);
  L10():
    r6 = dyn base1(<sym value>);
    goto L5(r6);
  D1():
    deopt 7 [eval_env1];
  L11():
    eval_env2 = force? eval_env1;
    checkMissing(eval_env2);
    assign_env1 = ld `assign.env`;
    check L12() else D2();
  D2():
    deopt 9 [assign_env1];
  L12():
    assign_env2 = force? assign_env1;
    checkMissing(assign_env2);
    delayedAssign = ldf delayedAssign in base;
    r9 = dyn delayedAssign(x2, r7, eval_env2, assign_env2);
    check L13() else D3();
  D3():
    deopt 12 [r9];
  L13():
    goto L4(r9);
  }
}
fun inner2411639935(x, y, z) {
  (reg x:*, reg y:*, reg z:*) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var z:*, reg environment:cls, reg r:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(1.0) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    st z = z;
    environment = ldf environment;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn environment();
    check L2() else D1();
  D1():
    deopt 2 [r];
  L2():
    popenv;
    return r;
  }
}
fun inner1409904570(e_) {
  (reg e_:*) -+> V { var e_:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e_1:*, reg e_2:V, reg names:cls, reg r2:V, reg ne:*, reg ne1:V, reg l:*, reg names__:cls, reg r3:V, reg lapply:cls, reg lapply1:cls, reg ne2:*, reg ne3:V, reg p:p(V +), reg as_name:*, reg as_name1:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:cls, reg p3:p(V +), reg r10:V |
    mkenv;
    st e_ = e_;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st ne = r1;
    ne = ld ne;
    check L5() else D2();
  L1():
    e_1 = ld e_;
    check L3() else D0();
  L2():
    r = dyn base(<sym e_>);
    goto L0(r);
  D0():
    deopt 2 [e_1];
  D2():
    deopt 7 [ne];
  L3():
    e_2 = force? e_1;
    checkMissing(e_2);
    names = ldf names in base;
    r2 = dyn names(e_2);
    check L4() else D1();
  L5():
    ne1 = force? ne;
    checkMissing(ne1);
    l = ld ne;
    names__ = ldf `names<-`;
    check L6() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 10 [ne1, l, ne1];
  L4():
    goto L0(r2);
  L6():
    r3 = dyn names__(l, NULL, ne1);
    check L7() else D4();
  D4():
    deopt 12 [ne1, r3];
  L7():
    st ne = r3;
    lapply = ldf lapply;
    check L8() else D5();
  D5():
    deopt 15 [];
  L8():
    p2 = prom<V +>{
      lapply1 = ldf lapply;
      p = prom<V +>{
        ne2 = ld ne;
        ne3 = force? ne2;
        checkMissing(ne3);
        return ne3;
      };
      p1 = prom<V +>{
        as_name = ld `as.name`;
        as_name1 = force? as_name;
        checkMissing(as_name1);
        return as_name1;
      };
      r6 = dyn lapply1(p, p1);
      return r6;
    };
    p3 = prom<V +>{
      r8 = clos inner4266987626;
      return r8;
    };
    r10 = dyn lapply(p2, p3);
    check L9() else D6();
  D6():
    deopt 18 [r10];
  L9():
    popenv;
    return r10;
  }
}
fun inner4266987626(n) {
  (reg n:*) -+> V { var n:*, reg eval:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V |
    mkenv;
    st n = n;
    eval = ldf eval;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      substitute = ldf substitute in base;
      r2 = dyn substitute(<lang substitute(X, e_)>, <lang list(X=n)>);
      goto L0(r2);
    L2():
      r = dyn base(<lang substitute(X, e_)>, <lang list(X=n)>);
      goto L0(r);
    };
    r4 = dyn eval(p);
    check L1() else D1();
  D1():
    deopt 3 [r4];
  L1():
    popenv;
    return r4;
  }
}