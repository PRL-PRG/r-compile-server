fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg matrix:cls, reg runif:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg sample:cls, reg p2:p(V +), reg r9:V, reg rowsum:cls, reg x:*, reg x1:V, reg p3:p(V +), reg group:*, reg group1:V, reg p4:p(V +), reg r12:V, reg tapply:cls, reg x2:*, reg x3:V, reg p5:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg group2:*, reg group3:V, reg c:L, reg group5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg row:cls, reg x4:*, reg x5:V, reg p6:p(V +), reg r17:V, reg __:cls, reg r18:V, reg col:cls, reg x6:*, reg x7:V, reg p7:p(V +), reg r20:V, reg list:cls, reg r21:V, reg p8:p(V +), reg sum:*, reg sum1:V, reg p9:p(V +), reg r24:V, reg t:cls, reg sapply:cls, reg split:cls, reg as_data_frame:cls, reg x8:*, reg x9:V, reg p10:p(V +), reg r26:V, reg p11:p(V +), reg group6:*, reg group7:V, reg p12:p(V +), reg r29:V, reg p13:p(V +), reg colSums:*, reg colSums1:V, reg p14:p(V +), reg r32:V, reg p15:p(V +), reg r34:V, reg aggregate:cls, reg x10:*, reg x11:V, reg p16:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r36:V, reg r37:V, reg group8:*, reg group9:V, reg list1:cls, reg r38:V, reg p17:p(V +), reg sum2:*, reg sum3:V, reg p18:p(V +), reg r41:V, reg c1:L, reg r43:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r44:V |
    mkenv;
    r = clos inner3062290719;
    st rowsum = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0():
    matrix = ldf matrix;
    check L6() else D2();
  L2():
    require = ldf require;
    check L4() else D0();
  L3():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L4():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L5() else D1();
  L6():
    p1 = prom<V +>{
      runif = ldf runif;
      r5 = dyn runif(100.0);
      return r5;
    };
    r7 = dyn matrix[, ncol](p1, 5.0);
    check L7() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [r7];
  L5():
    goto L0();
  L7():
    st x = r7;
    sample = ldf sample;
    check L8() else D4();
  D4():
    deopt 16 [];
  L8():
    p2 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8>;
    };
    r9 = dyn sample(p2, 20.0, TRUE);
    check L9() else D5();
  D5():
    deopt 20 [r9];
  L9():
    st group = r9;
    rowsum = ldf rowsum;
    check L10() else D6();
  D6():
    deopt 23 [];
  L10():
    p3 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p4 = prom<V +>{
      group = ld group;
      group1 = force? group;
      checkMissing(group1);
      return group1;
    };
    r12 = dyn rowsum(p3, p4);
    check L11() else D7();
  D7():
    deopt 26 [r12];
  L11():
    st xsum = r12;
    tapply = ldf tapply;
    check L12() else D8();
  D8():
    deopt 29 [];
  L12():
    p5 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p8 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r15):
      return r15;
    L2():
      group2 = ld group;
      group3 = force? group2;
      checkMissing(group3);
      c = `is.object`(group3);
      if c then L4() else L5(group3);
    L3():
      r14 = dyn base1(<lang `[`(group, row(x))>, <lang col(x)>);
      goto L0(r14);
    L1(dx1):
      col = ldf col;
      p7 = prom<V +>{
        x6 = ld x;
        x7 = force? x6;
        checkMissing(x7);
        return x7;
      };
      r20 = dyn col(p7);
      list = ldf list in base;
      r21 = dyn list(dx1, r20);
      goto L0(r21);
    L4():
      dr = tryDispatchBuiltin.1("[", group3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(group5):
      row = ldf row;
      p6 = prom<V +>{
        x4 = ld x;
        x5 = force? x4;
        checkMissing(x5);
        return x5;
      };
      r17 = dyn row(p6);
      __ = ldf `[` in base;
      r18 = dyn __(group5, r17);
      goto L1(r18);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    p9 = prom<V +>{
      sum = ld sum;
      sum1 = force? sum;
      checkMissing(sum1);
      return sum1;
    };
    r24 = dyn tapply(p5, p8, p9);
    check L13() else D9();
  D9():
    deopt 33 [r24];
  L13():
    t = ldf t;
    check L14() else D10();
  D10():
    deopt 35 [];
  L14():
    p15 = prom<V +>{
      sapply = ldf sapply;
      p13 = prom<V +>{
        split = ldf split;
        p11 = prom<V +>{
          as_data_frame = ldf `as.data.frame`;
          p10 = prom<V +>{
            x8 = ld x;
            x9 = force? x8;
            checkMissing(x9);
            return x9;
          };
          r26 = dyn as_data_frame(p10);
          return r26;
        };
        p12 = prom<V +>{
          group6 = ld group;
          group7 = force? group6;
          checkMissing(group7);
          return group7;
        };
        r29 = dyn split(p11, p12);
        return r29;
      };
      p14 = prom<V +>{
        colSums = ld colSums;
        colSums1 = force? colSums;
        checkMissing(colSums1);
        return colSums1;
      };
      r32 = dyn sapply(p13, p14);
      return r32;
    };
    r34 = dyn t(p15);
    check L15() else D11();
  D11():
    deopt 37 [r34];
  L15():
    aggregate = ldf aggregate;
    check L16() else D12();
  D12():
    deopt 39 [];
  L16():
    p16 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    p17 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      group8 = ld group;
      group9 = force? group8;
      checkMissing(group9);
      list1 = ldf list in base;
      r38 = dyn list1(group9);
      goto L0(r38);
    L2():
      r36 = dyn base2(<sym group>);
      goto L0(r36);
    };
    p18 = prom<V +>{
      sum2 = ld sum;
      sum3 = force? sum2;
      checkMissing(sum3);
      return sum3;
    };
    r41 = dyn aggregate(p16, p17, p18);
    check L17() else D13();
  D13():
    deopt 43 [r41];
  L17():
    c1 = `is.object`(r41);
    if c1 then L18() else L19(r41);
  L1(dx3):
    popenv;
    return dx3;
  L18():
    dr2 = tryDispatchBuiltin.1("[", r41);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L20() else L19(dr2);
  L19(r43):
    __1 = ldf `[` in base;
    r44 = dyn __1(r43, -1.0);
    goto L1(r44);
  L20():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  }
}
fun inner3062290719(x, group, reorder, `...`) {
  (reg x:*, reg group:*, reg reorder:*, reg ddd:dots) -+> V { var x:*, var group:*, var reorder:*, reg reorder_isMissing:L, reg reorder_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st group = group;
    reorder_isMissing = missing.0(reorder);
    if reorder_isMissing then L0(TRUE) else L0(reorder);
  L0(reorder_orDefault):
    st reorder = reorder_orDefault;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("rowsum");
    goto L1(r2);
  L3():
    r = dyn base("rowsum");
    goto L1(r);
  }
}