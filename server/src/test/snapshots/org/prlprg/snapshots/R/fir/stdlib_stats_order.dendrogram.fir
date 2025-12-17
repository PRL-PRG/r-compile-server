fun main() {
  () -+> V { reg r:cls, reg set_seed:cls, reg r1:V, reg rnorm:cls, reg r2:V, reg hclust:cls, reg dist:cls, reg x:*, reg x1:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg hc:*, reg hc1:V, reg c:L, reg hc3:V, reg dr:V, reg dc:L, reg dx:V, reg r7:V, reg as_dendrogram:cls, reg hc4:*, reg hc5:V, reg p2:p(V +), reg r9:V, reg order_dendrogram:cls, reg dd:*, reg dd1:V, reg p3:p(V +), reg r11:V, reg stopifnot:cls, reg hc6:*, reg hc7:V, reg c1:L, reg hc9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r12:V, reg order_dendrogram1:cls, reg dd2:*, reg dd3:V, reg p4:p(V +), reg r14:V, reg r15:V, reg p5:p(V +), reg r17:V, reg as_dendrogram1:cls, reg hclust1:cls, reg dist1:cls, reg USArrests:*, reg USArrests1:V, reg p6:p(V +), reg r19:V, reg p7:p(V +), reg r21:V, reg p8:p(V +), reg r23:V, reg labels:cls, reg d2:*, reg d3:V, reg p9:p(V +), reg r25:V, reg stopifnot1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r26:V, reg r27:V, reg labels1:cls, reg d4:*, reg d5:V, reg p10:p(V +), reg r29:V, reg rownames:cls, reg USArrests2:*, reg USArrests3:V, reg p11:p(V +), reg r31:V, reg c2:L, reg r33:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg order_dendrogram2:cls, reg d6:*, reg d7:V, reg p12:p(V +), reg r35:V, reg __:cls, reg r36:V, reg identical:cls, reg r37:V, reg p13:p(V +), reg r39:V |
    mkenv;
    r = clos inner2501545716;
    st `order.dendrogram` = r;
    set_seed = ldf `set.seed`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn set_seed(123.0);
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    rnorm = ldf rnorm;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    r2 = dyn rnorm(10.0);
    check L3() else D3();
  D3():
    deopt 10 [r2];
  L3():
    st x = r2;
    hclust = ldf hclust;
    check L4() else D4();
  D4():
    deopt 13 [];
  L4():
    p1 = prom<V +>{
      dist = ldf dist;
      p = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        return x1;
      };
      r4 = dyn dist(p);
      return r4;
    };
    r6 = dyn hclust(p1);
    check L5() else D5();
  D5():
    deopt 15 [r6];
  L5():
    st hc = r6;
    hc = ld hc;
    check L6() else D6();
  D6():
    deopt 17 [hc];
  L6():
    hc1 = force? hc;
    checkMissing(hc1);
    c = `is.object`(hc1);
    if c then L8() else L9(hc1);
  L7():
    as_dendrogram = ldf `as.dendrogram`;
    check L11() else D7();
  L8():
    dr = tryDispatchBuiltin.1("$", hc1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(hc3):
    r7 = `$`(hc3, <sym order>);
    goto L7();
  D7():
    deopt 21 [];
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7();
  L11():
    p2 = prom<V +>{
      hc4 = ld hc;
      hc5 = force? hc4;
      checkMissing(hc5);
      return hc5;
    };
    r9 = dyn as_dendrogram(p2);
    check L12() else D8();
  D8():
    deopt 23 [r9];
  L12():
    st dd = r9;
    order_dendrogram = ldf `order.dendrogram`;
    check L13() else D9();
  D9():
    deopt 26 [];
  L13():
    p3 = prom<V +>{
      dd = ld dd;
      dd1 = force? dd;
      checkMissing(dd1);
      return dd1;
    };
    r11 = dyn order_dendrogram(p3);
    check L14() else D10();
  D10():
    deopt 28 [r11];
  L14():
    stopifnot = ldf stopifnot;
    check L15() else D11();
  D11():
    deopt 30 [];
  L15():
    p5 = prom<V +>{
      hc6 = ld hc;
      hc7 = force? hc6;
      checkMissing(hc7);
      c1 = `is.object`(hc7);
      if c1 then L1() else L2(hc7);
    L0(dx3):
      order_dendrogram1 = ldf `order.dendrogram`;
      p4 = prom<V +>{
        dd2 = ld dd;
        dd3 = force? dd2;
        checkMissing(dd3);
        return dd3;
      };
      r14 = dyn order_dendrogram1(p4);
      r15 = `==`(dx3, r14);
      return r15;
    L1():
      dr2 = tryDispatchBuiltin.1("$", hc7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(hc9):
      r12 = `$`(hc9, <sym order>);
      goto L0(r12);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r17 = dyn stopifnot(p5);
    check L16() else D12();
  D12():
    deopt 32 [r17];
  L16():
    as_dendrogram1 = ldf `as.dendrogram`;
    check L17() else D13();
  D13():
    deopt 34 [];
  L17():
    p8 = prom<V +>{
      hclust1 = ldf hclust;
      p7 = prom<V +>{
        dist1 = ldf dist;
        p6 = prom<V +>{
          USArrests = ld USArrests;
          USArrests1 = force? USArrests;
          checkMissing(USArrests1);
          return USArrests1;
        };
        r19 = dyn dist1(p6);
        return r19;
      };
      r21 = dyn hclust1(p7);
      return r21;
    };
    r23 = dyn as_dendrogram1(p8);
    check L18() else D14();
  D14():
    deopt 36 [r23];
  L18():
    st d2 = r23;
    labels = ldf labels;
    check L19() else D15();
  D15():
    deopt 39 [];
  L19():
    p9 = prom<V +>{
      d2 = ld d2;
      d3 = force? d2;
      checkMissing(d3);
      return d3;
    };
    r25 = dyn labels(p9);
    check L20() else D16();
  D16():
    deopt 41 [r25];
  L20():
    stopifnot1 = ldf stopifnot;
    check L21() else D17();
  D17():
    deopt 43 [];
  L21():
    p13 = prom<V +>{
      sym = ldf identical;
      base = ldf identical in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r27):
      return r27;
    L2():
      labels1 = ldf labels;
      p10 = prom<V +>{
        d4 = ld d2;
        d5 = force? d4;
        checkMissing(d5);
        return d5;
      };
      r29 = dyn labels1(p10);
      rownames = ldf rownames;
      p11 = prom<V +>{
        USArrests2 = ld USArrests;
        USArrests3 = force? USArrests2;
        checkMissing(USArrests3);
        return USArrests3;
      };
      r31 = dyn rownames(p11);
      c2 = `is.object`(r31);
      if c2 then L4() else L5(r31);
    L3():
      r26 = dyn base(<lang labels(d2)>, <lang `[`(rownames(USArrests), order.dendrogram(d2))>);
      goto L0(r26);
    L1(dx5):
      identical = ldf identical in base;
      r37 = dyn identical(r29, dx5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r37);
    L4():
      dr4 = tryDispatchBuiltin.1("[", r31);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5(dr4);
    L5(r33):
      order_dendrogram2 = ldf `order.dendrogram`;
      p12 = prom<V +>{
        d6 = ld d2;
        d7 = force? d6;
        checkMissing(d7);
        return d7;
      };
      r35 = dyn order_dendrogram2(p12);
      __ = ldf `[` in base;
      r36 = dyn __(r33, r35);
      goto L1(r36);
    L6():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    };
    r39 = dyn stopifnot1(p13);
    check L22() else D18();
  D18():
    deopt 45 [r39];
  L22():
    popenv;
    return r39;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x3:*, reg x4:V, reg is_list:cls, reg r8:V, reg c1:L, reg unlist:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r10:V, reg as_vector:cls, reg x7:*, reg x8:V, reg p1:p(V +), reg r12:V |
    mkenv;
    st x = x;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L9() else L1();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<sym x>, "dendrogram");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    goto L2();
  L2():
    sym1 = ldf `is.list`;
    base1 = ldf `is.list` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "dendrogram", FALSE);
    check L8() else D1();
  L9():
    stop = ldf stop;
    check L10() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 10 [];
  L3(r7):
    c1 = `as.logical`(r7);
    if c1 then L17() else L4();
  L8():
    goto L0(r2);
  L10():
    r4 = dyn stop("'order.dendrogram' requires a dendrogram");
    check L11() else D3();
  L13():
    x3 = ld x;
    check L15() else D4();
  L14():
    r6 = dyn base1(<sym x>);
    goto L3(r6);
  D3():
    deopt 12 [r4];
  D4():
    deopt 17 [x3];
  L4():
    as_vector = ldf `as.vector`;
    check L21() else D8();
  L11():
    goto L2();
  L15():
    x4 = force? x3;
    checkMissing(x4);
    is_list = ldf `is.list` in base;
    r8 = dyn is_list(x4);
    check L16() else D5();
  L17():
    unlist = ldf unlist;
    check L18() else D6();
  D5():
    deopt 20 [r8];
  D6():
    deopt 22 [];
  D8():
    deopt 26 [];
  L16():
    goto L3(r8);
  L18():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r10 = dyn unlist(p);
    check L19() else D7();
  L21():
    p1 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r12 = dyn as_vector(p1);
    check L22() else D9();
  D7():
    deopt 24 [r10];
  D9():
    deopt 28 [r12];
  L19():
    popenv;
    return r10;
  L22():
    popenv;
    return r12;
  }
}