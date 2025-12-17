fun main() {
  () -+> V { reg r:cls, reg data_class:cls, reg model_frame:cls, reg __:cls, reg r1:V, reg p:p(V +), reg cars:*, reg cars1:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg r6:V, reg model_frame1:cls, reg __1:cls, reg r7:V, reg p3:p(V +), reg cars2:*, reg cars3:V, reg p4:p(V +), reg speed:*, reg speed1:V, reg r10:V, reg p5:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg dist:*, reg dist1:V, reg r14:V, reg p6:p(V +), reg r16:V, reg get_all_vars:cls, reg __2:cls, reg r17:V, reg p7:p(V +), reg cars4:*, reg cars5:V, reg p8:p(V +), reg p9:p(V +), reg r21:V, reg stopifnot:cls, reg is_data_frame:cls, reg ncars:*, reg ncars1:V, reg p10:p(V +), reg r23:V, reg p11:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg cars6:*, reg cars7:V, reg ncars2:*, reg ncars3:V, reg c:L, reg ncars5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg cars8:*, reg cars9:V, reg names:cls, reg r29:V, reg __3:cls, reg r30:V, reg identical:cls, reg r31:V, reg p12:p(V +), reg ncol:cls, reg ncars9:*, reg ncars10:V, reg p13:p(V +), reg r34:V, reg ncol1:cls, reg cars10:*, reg cars11:V, reg p14:p(V +), reg r36:V, reg r37:V, reg r38:V, reg p15:p(V +), reg r40:V |
    mkenv;
    r = clos inner2953276916;
    st `model.frame` = r;
    data_class = ldf `data.class`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p2 = prom<V +>{
      model_frame = ldf `model.frame`;
      p = prom<V +>{
        __ = ldf `~` in base;
        r1 = dyn __(<sym dist>, <sym speed>);
        return r1;
      };
      p1 = prom<V +>{
        cars = ld cars;
        cars1 = force? cars;
        checkMissing(cars1);
        return cars1;
      };
      r4 = dyn model_frame[, data](p, p1);
      return r4;
    };
    r6 = dyn data_class(p2);
    check L1() else D1();
  D1():
    deopt 6 [r6];
  L1():
    model_frame1 = ldf `model.frame`;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p3 = prom<V +>{
      __1 = ldf `~` in base;
      r7 = dyn __1(<sym dist>, <sym speed>);
      return r7;
    };
    p4 = prom<V +>{
      cars2 = ld cars;
      cars3 = force? cars2;
      checkMissing(cars3);
      return cars3;
    };
    p5 = prom<V +>{
      speed = ld speed;
      speed1 = force? speed;
      checkMissing(speed1);
      r10 = `<`(speed1, 10.0);
      return r10;
    };
    p6 = prom<V +>{
      sym = ldf log;
      base = ldf log in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r13):
      return r13;
    L1():
      dist = ld dist;
      dist1 = force? dist;
      checkMissing(dist1);
      r14 = log(dist1, 2.718281828459045);
      goto L0(r14);
    L2():
      r12 = dyn base(<sym dist>);
      goto L0(r12);
    };
    r16 = dyn model_frame1[, data, subset, z](p3, p4, p5, p6);
    check L3() else D3();
  D3():
    deopt 16 [r16];
  L3():
    get_all_vars = ldf get_all_vars;
    check L4() else D4();
  D4():
    deopt 18 [];
  L4():
    p7 = prom<V +>{
      __2 = ldf `~` in base;
      r17 = dyn __2(<lang sqrt(dist)>, <lang I(`/`(speed, 2.0))>);
      return r17;
    };
    p8 = prom<V +>{
      cars4 = ld cars;
      cars5 = force? cars4;
      checkMissing(cars5);
      return cars5;
    };
    p9 = prom<V +>{
      return <int 2, 3>;
    };
    r21 = dyn get_all_vars[, data, newVar](p7, p8, p9);
    check L5() else D5();
  D5():
    deopt 24 [r21];
  L5():
    st ncars = r21;
    stopifnot = ldf stopifnot;
    check L6() else D6();
  D6():
    deopt 27 [];
  L6():
    p11 = prom<V +>{
      is_data_frame = ldf `is.data.frame`;
      p10 = prom<V +>{
        ncars = ld ncars;
        ncars1 = force? ncars;
        checkMissing(ncars1);
        return ncars1;
      };
      r23 = dyn is_data_frame(p10);
      return r23;
    };
    p12 = prom<V +>{
      sym1 = ldf identical;
      base1 = ldf identical in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L3() else L4();
    L0(r26):
      return r26;
    L3():
      cars6 = ld cars;
      cars7 = force? cars6;
      checkMissing(cars7);
      ncars2 = ld ncars;
      ncars3 = force? ncars2;
      checkMissing(ncars3);
      c = `is.object`(ncars3);
      if c then L5() else L6(ncars3);
    L4():
      r25 = dyn base1(<sym cars>, <lang `[`(ncars, , names(cars))>);
      goto L0(r25);
    L1(dx1):
      identical = ldf identical in base;
      r31 = dyn identical(cars7, dx1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r31);
    L5():
      dr = tryDispatchBuiltin.1("[", ncars3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L7() else L6(dr);
    L6(ncars5):
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L8() else L9();
    L2(r28):
      __3 = ldf `[` in base;
      r30 = dyn __3(ncars3, <missing>, r28);
      goto L1(r30);
    L7():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L8():
      cars8 = ld cars;
      cars9 = force? cars8;
      checkMissing(cars9);
      names = ldf names in base;
      r29 = dyn names(cars9);
      goto L2(r29);
    L9():
      r27 = dyn base2(<sym cars>);
      goto L2(r27);
    };
    p15 = prom<V +>{
      ncol = ldf ncol;
      p13 = prom<V +>{
        ncars9 = ld ncars;
        ncars10 = force? ncars9;
        checkMissing(ncars10);
        return ncars10;
      };
      r34 = dyn ncol(p13);
      ncol1 = ldf ncol;
      p14 = prom<V +>{
        cars10 = ld cars;
        cars11 = force? cars10;
        checkMissing(cars11);
        return cars11;
      };
      r36 = dyn ncol1(p14);
      r37 = `+`(r36, 1.0);
      r38 = `==`(r34, r37);
      return r38;
    };
    r40 = dyn stopifnot(p11, p12, p15);
    check L7() else D7();
  D7():
    deopt 31 [r40];
  L7():
    popenv;
    return r40;
  }
}
fun inner2953276916(formula, `...`) {
  (reg formula:*, reg ddd:dots) -+> V { var formula:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st formula = formula;
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
    r2 = dyn UseMethod("model.frame");
    goto L0(r2);
  L2():
    r = dyn base("model.frame");
    goto L0(r);
  }
}