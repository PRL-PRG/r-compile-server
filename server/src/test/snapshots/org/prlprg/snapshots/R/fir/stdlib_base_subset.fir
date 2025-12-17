fun main() {
  () -+> V { reg r:cls, reg subset:cls, reg airquality:*, reg airquality1:V, reg p:p(V +), reg Temp:*, reg Temp1:V, reg r2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg Ozone:*, reg Ozone1:V, reg Temp2:*, reg Temp3:V, reg c:cls, reg r6:V, reg p2:p(V +), reg r8:V, reg subset1:cls, reg airquality2:*, reg airquality3:V, reg p3:p(V +), reg Day:*, reg Day1:V, reg r10:V, reg p4:p(V +), reg Temp4:*, reg Temp5:V, reg r12:V, reg p5:p(V +), reg r14:V, reg subset2:cls, reg airquality4:*, reg airquality5:V, reg p6:p(V +), reg Ozone2:*, reg Ozone3:V, reg Wind:*, reg Wind1:V, reg r16:V, reg p7:p(V +), reg r18:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg with:cls, reg airquality6:*, reg airquality7:V, reg p8:p(V +), reg subset3:cls, reg Ozone4:*, reg Ozone5:V, reg p9:p(V +), reg Temp6:*, reg Temp7:V, reg r23:V, reg p10:p(V +), reg r25:V, reg p11:p(V +), reg r27:V, reg rownames:cls, reg state_x77:*, reg state_x78:V, reg p12:p(V +), reg r29:V, reg _in_:cls, reg nm:*, reg nm1:V, reg p13:p(V +), reg grep:cls, reg nm2:*, reg nm3:V, reg p14:p(V +), reg r32:V, reg p15:p(V +), reg r34:V, reg subset4:cls, reg state_x79:*, reg state_x80:V, reg p16:p(V +), reg start_with_M:*, reg start_with_M1:V, reg p17:p(V +), reg Illiteracy:*, reg Illiteracy1:V, reg Murder:*, reg Murder1:V, reg r37:V, reg p18:p(V +), reg r39:V, reg subset5:cls, reg state_x81:*, reg state_x82:V, reg p19:p(V +), reg grepl:cls, reg nm4:*, reg nm5:V, reg p20:p(V +), reg r42:V, reg p21:p(V +), reg Illiteracy2:*, reg Illiteracy3:V, reg Murder2:*, reg Murder3:V, reg r44:V, reg p22:p(V +), reg r46:V |
    mkenv;
    r = clos inner2044426018;
    st subset = r;
    subset = ldf subset;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      airquality = ld airquality;
      airquality1 = force? airquality;
      checkMissing(airquality1);
      return airquality1;
    };
    p1 = prom<V +>{
      Temp = ld Temp;
      Temp1 = force? Temp;
      checkMissing(Temp1);
      r2 = `>`(Temp1, 80.0);
      return r2;
    };
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      Ozone = ld Ozone;
      Ozone1 = force? Ozone;
      checkMissing(Ozone1);
      Temp2 = ld Temp;
      Temp3 = force? Temp2;
      checkMissing(Temp3);
      c = ldf c in base;
      r6 = dyn c(Ozone1, Temp3);
      goto L0(r6);
    L2():
      r4 = dyn base(<sym Ozone>, <sym Temp>);
      goto L0(r4);
    };
    r8 = dyn subset[, , select](p, p1, p2);
    check L2() else D1();
  D1():
    deopt 9 [r8];
  L2():
    subset1 = ldf subset;
    check L3() else D2();
  D2():
    deopt 11 [];
  L3():
    p3 = prom<V +>{
      airquality2 = ld airquality;
      airquality3 = force? airquality2;
      checkMissing(airquality3);
      return airquality3;
    };
    p4 = prom<V +>{
      Day = ld Day;
      Day1 = force? Day;
      checkMissing(Day1);
      r10 = `==`(Day1, 1.0);
      return r10;
    };
    p5 = prom<V +>{
      Temp4 = ld Temp;
      Temp5 = force? Temp4;
      checkMissing(Temp5);
      r12 = `-`(<missing>, Temp5);
      return r12;
    };
    r14 = dyn subset1[, , select](p3, p4, p5);
    check L4() else D3();
  D3():
    deopt 16 [r14];
  L4():
    subset2 = ldf subset;
    check L5() else D4();
  D4():
    deopt 18 [];
  L5():
    p6 = prom<V +>{
      airquality4 = ld airquality;
      airquality5 = force? airquality4;
      checkMissing(airquality5);
      return airquality5;
    };
    p7 = prom<V +>{
      Ozone2 = ld Ozone;
      Ozone3 = force? Ozone2;
      checkMissing(Ozone3);
      Wind = ld Wind;
      Wind1 = force? Wind;
      checkMissing(Wind1);
      r16 = `:`(Ozone3, Wind1);
      return r16;
    };
    r18 = dyn subset2[, select](p6, p7);
    check L6() else D5();
  D5():
    deopt 22 [r18];
  L6():
    sym1 = ldf with;
    base1 = ldf with in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L0():
    rownames = ldf rownames;
    check L11() else D8();
  L7():
    with = ldf with;
    check L9() else D6();
  L8():
    r19 = dyn base1(<sym airquality>, <lang subset(Ozone, `>`(Temp, 80.0))>);
    goto L0();
  D6():
    deopt 25 [];
  D8():
    deopt 30 [];
  L9():
    p8 = prom<V +>{
      airquality6 = ld airquality;
      airquality7 = force? airquality6;
      checkMissing(airquality7);
      return airquality7;
    };
    p11 = prom<V +>{
      subset3 = ldf subset;
      p9 = prom<V +>{
        Ozone4 = ld Ozone;
        Ozone5 = force? Ozone4;
        checkMissing(Ozone5);
        return Ozone5;
      };
      p10 = prom<V +>{
        Temp6 = ld Temp;
        Temp7 = force? Temp6;
        checkMissing(Temp7);
        r23 = `>`(Temp7, 80.0);
        return r23;
      };
      r25 = dyn subset3(p9, p10);
      return r25;
    };
    r27 = dyn with(p8, p11);
    check L10() else D7();
  L11():
    p12 = prom<V +>{
      state_x77 = ld `state.x77`;
      state_x78 = force? state_x77;
      checkMissing(state_x78);
      return state_x78;
    };
    r29 = dyn rownames(p12);
    check L12() else D9();
  D7():
    deopt 28 [r27];
  D9():
    deopt 32 [r29];
  L10():
    goto L0();
  L12():
    st nm = r29;
    _in_ = ldf `%in%`;
    check L13() else D10();
  D10():
    deopt 35 [];
  L13():
    p13 = prom<V +>{
      nm = ld nm;
      nm1 = force? nm;
      checkMissing(nm1);
      return nm1;
    };
    p15 = prom<V +>{
      grep = ldf grep;
      p14 = prom<V +>{
        nm2 = ld nm;
        nm3 = force? nm2;
        checkMissing(nm3);
        return nm3;
      };
      r32 = dyn grep[, , value]("^M", p14, TRUE);
      return r32;
    };
    r34 = dyn _in_(p13, p15);
    check L14() else D11();
  D11():
    deopt 38 [r34];
  L14():
    st start_with_M = r34;
    subset4 = ldf subset;
    check L15() else D12();
  D12():
    deopt 41 [];
  L15():
    p16 = prom<V +>{
      state_x79 = ld `state.x77`;
      state_x80 = force? state_x79;
      checkMissing(state_x80);
      return state_x80;
    };
    p17 = prom<V +>{
      start_with_M = ld start_with_M;
      start_with_M1 = force? start_with_M;
      checkMissing(start_with_M1);
      return start_with_M1;
    };
    p18 = prom<V +>{
      Illiteracy = ld Illiteracy;
      Illiteracy1 = force? Illiteracy;
      checkMissing(Illiteracy1);
      Murder = ld Murder;
      Murder1 = force? Murder;
      checkMissing(Murder1);
      r37 = `:`(Illiteracy1, Murder1);
      return r37;
    };
    r39 = dyn subset4(p16, p17, p18);
    check L16() else D13();
  D13():
    deopt 45 [r39];
  L16():
    subset5 = ldf subset;
    check L17() else D14();
  D14():
    deopt 47 [];
  L17():
    p19 = prom<V +>{
      state_x81 = ld `state.x77`;
      state_x82 = force? state_x81;
      checkMissing(state_x82);
      return state_x82;
    };
    p21 = prom<V +>{
      grepl = ldf grepl;
      p20 = prom<V +>{
        nm4 = ld nm;
        nm5 = force? nm4;
        checkMissing(nm5);
        return nm5;
      };
      r42 = dyn grepl("^M", p20);
      return r42;
    };
    p22 = prom<V +>{
      Illiteracy2 = ld Illiteracy;
      Illiteracy3 = force? Illiteracy2;
      checkMissing(Illiteracy3);
      Murder2 = ld Murder;
      Murder3 = force? Murder2;
      checkMissing(Murder3);
      r44 = `:`(Illiteracy3, Murder3);
      return r44;
    };
    r46 = dyn subset5(p19, p21, p22);
    check L18() else D15();
  D15():
    deopt 51 [r46];
  L18():
    popenv;
    return r46;
  }
}
fun inner2044426018(x, `...`) {
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
    r2 = dyn UseMethod("subset");
    goto L0(r2);
  L2():
    r = dyn base("subset");
    goto L0(r);
  }
}