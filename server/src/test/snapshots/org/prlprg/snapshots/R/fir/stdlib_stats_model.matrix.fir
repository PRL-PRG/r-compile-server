fun main() {
  () -+> V { reg r:cls, reg __:cls, reg r1:V, reg __1:cls, reg r2:V, reg r3:cls, reg model_frame:cls, reg ff:*, reg ff1:V, reg p:p(V +), reg trees:*, reg trees1:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg model_matrix:cls, reg ff2:*, reg ff3:V, reg p3:p(V +), reg m:*, reg m1:V, reg p4:p(V +), reg r11:V, reg data_frame:cls, reg gl:cls, reg r12:V, reg p5:p(V +), reg gl1:cls, reg r14:V, reg p6:p(V +), reg r16:V, reg options:cls, reg r17:V, reg model_matrix1:cls, reg __2:cls, reg r18:V, reg p7:p(V +), reg dd:*, reg dd1:V, reg p8:p(V +), reg r21:V, reg model_matrix2:cls, reg __3:cls, reg r22:V, reg p9:p(V +), reg dd2:*, reg dd3:V, reg p10:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r25:V, reg r26:V, reg list:cls, reg r27:V, reg p11:p(V +), reg r29:V, reg model_matrix3:cls, reg __4:cls, reg r30:V, reg p12:p(V +), reg dd4:*, reg dd5:V, reg p13:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r33:V, reg r34:V, reg contr_poly:*, reg contr_poly1:V, reg list1:cls, reg r35:V, reg p14:p(V +), reg r37:V, reg model_matrix4:cls, reg __5:cls, reg r38:V, reg p15:p(V +), reg dd6:*, reg dd7:V, reg p16:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r41:V, reg r42:V, reg list2:cls, reg r43:V, reg p17:p(V +), reg r45:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r46:V, reg m_orth:*, reg m_orth1:V, reg crossprod:cls, reg r48:V, reg stopifnot:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r49:V, reg r50:V, reg model_matrix5:cls, reg __6:cls, reg r51:V, reg p18:p(V +), reg dd8:*, reg dd9:V, reg p19:p(V +), reg r54:V, reg model_matrix6:cls, reg __7:cls, reg r55:V, reg p20:p(V +), reg dd10:*, reg dd11:V, reg p21:p(V +), reg r58:V, reg identical:cls, reg r59:V, reg p22:p(V +), reg r61:V |
    mkenv;
    r = clos inner64320599;
    st `model.matrix` = r;
    __ = ldf `~` in base;
    r1 = dyn __(<lang log(Volume)>, <lang `+`(log(Height), log(Girth))>);
    st ff = r1;
    __1 = ldf `::`;
    check L1() else D0();
  D0():
    deopt 7 [];
  L1():
    r2 = dyn __1("utils", "str");
    check L2() else D1();
  D1():
    deopt 10 [r2];
  L2():
    checkFun.0(r2);
    r3 = r2 as cls;
    p2 = prom<V +>{
      model_frame = ldf `model.frame`;
      p = prom<V +>{
        ff = ld ff;
        ff1 = force? ff;
        checkMissing(ff1);
        return ff1;
      };
      p1 = prom<V +>{
        trees = ld trees;
        trees1 = force? trees;
        checkMissing(trees1);
        return trees1;
      };
      r6 = dyn model_frame(p, p1);
      st m = r6;
      invisible.0();
      return r6;
    };
    r8 = dyn r3(p2);
    check L3() else D2();
  D2():
    deopt 13 [r8];
  L3():
    model_matrix = ldf `model.matrix`;
    check L4() else D3();
  D3():
    deopt 15 [];
  L4():
    p3 = prom<V +>{
      ff2 = ld ff;
      ff3 = force? ff2;
      checkMissing(ff3);
      return ff3;
    };
    p4 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r11 = dyn model_matrix(p3, p4);
    check L5() else D4();
  D4():
    deopt 18 [r11];
  L5():
    st mat = r11;
    data_frame = ldf `data.frame`;
    check L6() else D5();
  D5():
    deopt 21 [];
  L6():
    p5 = prom<V +>{
      gl = ldf gl;
      r12 = dyn gl(3.0, 4.0);
      return r12;
    };
    p6 = prom<V +>{
      gl1 = ldf gl;
      r14 = dyn gl1(4.0, 1.0, 12.0);
      return r14;
    };
    r16 = dyn data_frame[a, b](p5, p6);
    check L7() else D6();
  D6():
    deopt 26 [r16];
  L7():
    st dd = r16;
    options = ldf options;
    check L8() else D7();
  D7():
    deopt 29 [];
  L8():
    r17 = dyn options("contrasts");
    check L9() else D8();
  D8():
    deopt 31 [r17];
  L9():
    model_matrix1 = ldf `model.matrix`;
    check L10() else D9();
  D9():
    deopt 33 [];
  L10():
    p7 = prom<V +>{
      __2 = ldf `~` in base;
      r18 = dyn __2(<lang `+`(a, b)>);
      return r18;
    };
    p8 = prom<V +>{
      dd = ld dd;
      dd1 = force? dd;
      checkMissing(dd1);
      return dd1;
    };
    r21 = dyn model_matrix1(p7, p8);
    check L11() else D10();
  D10():
    deopt 36 [r21];
  L11():
    model_matrix2 = ldf `model.matrix`;
    check L12() else D11();
  D11():
    deopt 38 [];
  L12():
    p9 = prom<V +>{
      __3 = ldf `~` in base;
      r22 = dyn __3(<lang `+`(a, b)>);
      return r22;
    };
    p10 = prom<V +>{
      dd2 = ld dd;
      dd3 = force? dd2;
      checkMissing(dd3);
      return dd3;
    };
    p11 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r26):
      return r26;
    L1():
      list = ldf list in base;
      r27 = dyn list("contr.sum");
      goto L0(r27);
    L2():
      r25 = dyn base[a]("contr.sum");
      goto L0(r25);
    };
    r29 = dyn model_matrix2[, , `contrasts.arg`](p9, p10, p11);
    check L13() else D12();
  D12():
    deopt 43 [r29];
  L13():
    model_matrix3 = ldf `model.matrix`;
    check L14() else D13();
  D13():
    deopt 45 [];
  L14():
    p12 = prom<V +>{
      __4 = ldf `~` in base;
      r30 = dyn __4(<lang `+`(a, b)>);
      return r30;
    };
    p13 = prom<V +>{
      dd4 = ld dd;
      dd5 = force? dd4;
      checkMissing(dd5);
      return dd5;
    };
    p14 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      contr_poly = ld `contr.poly`;
      contr_poly1 = force? contr_poly;
      checkMissing(contr_poly1);
      list1 = ldf list in base;
      r35 = dyn list1("contr.sum", contr_poly1);
      goto L0(r35);
    L2():
      r33 = dyn base1[a, b]("contr.sum", <sym contr.poly>);
      goto L0(r33);
    };
    r37 = dyn model_matrix3[, , `contrasts.arg`](p12, p13, p14);
    check L15() else D14();
  D14():
    deopt 50 [r37];
  L15():
    model_matrix4 = ldf `model.matrix`;
    check L16() else D15();
  D15():
    deopt 52 [];
  L16():
    p15 = prom<V +>{
      __5 = ldf `~` in base;
      r38 = dyn __5(<lang `+`(a, b)>);
      return r38;
    };
    p16 = prom<V +>{
      dd6 = ld dd;
      dd7 = force? dd6;
      checkMissing(dd7);
      return dd7;
    };
    p17 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r42):
      return r42;
    L1():
      list2 = ldf list in base;
      r43 = dyn list2("contr.helmert");
      goto L0(r43);
    L2():
      r41 = dyn base2[a]("contr.helmert");
      goto L0(r41);
    };
    r45 = dyn model_matrix4[, , `contrasts.arg`](p15, p16, p17);
    check L17() else D16();
  D16():
    deopt 57 [r45];
  L17():
    st `m.orth` = r45;
    sym3 = ldf crossprod;
    base3 = ldf crossprod in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L18() else L19();
  L0():
    stopifnot = ldf stopifnot;
    check L22() else D19();
  L18():
    m_orth = ld `m.orth`;
    check L20() else D17();
  L19():
    r46 = dyn base3(<sym m.orth>);
    goto L0();
  D17():
    deopt 61 [m_orth];
  D19():
    deopt 66 [];
  L20():
    m_orth1 = force? m_orth;
    checkMissing(m_orth1);
    crossprod = ldf crossprod in base;
    r48 = dyn crossprod(m_orth1);
    check L21() else D18();
  L22():
    p22 = prom<V +>{
      sym4 = ldf identical;
      base4 = ldf identical in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r50):
      return r50;
    L1():
      model_matrix5 = ldf `model.matrix`;
      p18 = prom<V +>{
        __6 = ldf `~` in base;
        r51 = dyn __6(<lang `+`(a, b)>);
        return r51;
      };
      p19 = prom<V +>{
        dd8 = ld dd;
        dd9 = force? dd8;
        checkMissing(dd9);
        return dd9;
      };
      r54 = dyn model_matrix5(p18, p19);
      model_matrix6 = ldf `model.matrix`;
      p20 = prom<V +>{
        __7 = ldf `~` in base;
        r55 = dyn __7(<lang `+`(a, b)>);
        return r55;
      };
      p21 = prom<V +>{
        dd10 = ld dd;
        dd11 = force? dd10;
        checkMissing(dd11);
        return dd11;
      };
      r58 = dyn model_matrix6[, , `contrasts.arg`](p20, p21, "contr.FOO");
      identical = ldf identical in base;
      r59 = dyn identical(r54, r58, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r59);
    L2():
      r49 = dyn base4(<lang model.matrix(`~`(`+`(a, b)), dd)>, <lang model.matrix(`~`(`+`(a, b)), dd, contrasts.arg="contr.FOO")>);
      goto L0(r49);
    };
    r61 = dyn stopifnot(p22);
    check L23() else D20();
  D18():
    deopt 64 [r48];
  D20():
    deopt 68 [r61];
  L21():
    goto L0();
  L23():
    popenv;
    return r61;
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
    r2 = dyn UseMethod("model.matrix");
    goto L0(r2);
  L2():
    r = dyn base("model.matrix");
    goto L0(r);
  }
}