fun main() {
  () -+> V { reg r:cls, reg transform:cls, reg airquality:*, reg airquality1:V, reg p:p(V +), reg Ozone:*, reg Ozone1:V, reg r2:V, reg p1:p(V +), reg r4:V, reg transform1:cls, reg airquality2:*, reg airquality3:V, reg p2:p(V +), reg Ozone2:*, reg Ozone3:V, reg r6:V, reg p3:p(V +), reg Temp:*, reg Temp1:V, reg r8:V, reg r9:V, reg p4:p(V +), reg r11:V, reg attach:cls, reg airquality4:*, reg airquality5:V, reg p5:p(V +), reg r13:V, reg transform2:cls, reg Ozone4:*, reg Ozone5:V, reg p6:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r15:V, reg r16:V, reg Ozone6:*, reg Ozone7:V, reg r17:V, reg p7:p(V +), reg r19:V, reg detach:cls, reg airquality6:*, reg airquality7:V, reg p8:p(V +), reg r21:V |
    mkenv;
    r = clos inner2733360753;
    st transform = r;
    transform = ldf transform;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      airquality = ld airquality;
      airquality1 = force? airquality;
      checkMissing(airquality1);
      return airquality1;
    };
    p1 = prom<V +>{
      Ozone = ld Ozone;
      Ozone1 = force? Ozone;
      checkMissing(Ozone1);
      r2 = `-`(<missing>, Ozone1);
      return r2;
    };
    r4 = dyn transform[, Ozone](p, p1);
    check L1() else D1();
  D1():
    deopt 8 [r4];
  L1():
    transform1 = ldf transform;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p2 = prom<V +>{
      airquality2 = ld airquality;
      airquality3 = force? airquality2;
      checkMissing(airquality3);
      return airquality3;
    };
    p3 = prom<V +>{
      Ozone2 = ld Ozone;
      Ozone3 = force? Ozone2;
      checkMissing(Ozone3);
      r6 = `-`(<missing>, Ozone3);
      return r6;
    };
    p4 = prom<V +>{
      Temp = ld Temp;
      Temp1 = force? Temp;
      checkMissing(Temp1);
      r8 = `-`(Temp1, 32.0);
      r9 = `/`(r8, 1.8);
      return r9;
    };
    r11 = dyn transform1[, new, Temp](p2, p3, p4);
    check L3() else D3();
  D3():
    deopt 16 [r11];
  L3():
    attach = ldf attach;
    check L4() else D4();
  D4():
    deopt 18 [];
  L4():
    p5 = prom<V +>{
      airquality4 = ld airquality;
      airquality5 = force? airquality4;
      checkMissing(airquality5);
      return airquality5;
    };
    r13 = dyn attach(p5);
    check L5() else D5();
  D5():
    deopt 20 [r13];
  L5():
    transform2 = ldf transform;
    check L6() else D6();
  D6():
    deopt 22 [];
  L6():
    p6 = prom<V +>{
      Ozone4 = ld Ozone;
      Ozone5 = force? Ozone4;
      checkMissing(Ozone5);
      return Ozone5;
    };
    p7 = prom<V +>{
      sym = ldf log;
      base = ldf log in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r16):
      return r16;
    L1():
      Ozone6 = ld Ozone;
      Ozone7 = force? Ozone6;
      checkMissing(Ozone7);
      r17 = log(Ozone7, 2.718281828459045);
      goto L0(r17);
    L2():
      r15 = dyn base(<sym Ozone>);
      goto L0(r15);
    };
    r19 = dyn transform2[, logOzone](p6, p7);
    check L7() else D7();
  D7():
    deopt 26 [r19];
  L7():
    detach = ldf detach;
    check L8() else D8();
  D8():
    deopt 28 [];
  L8():
    p8 = prom<V +>{
      airquality6 = ld airquality;
      airquality7 = force? airquality6;
      checkMissing(airquality7);
      return airquality7;
    };
    r21 = dyn detach(p8);
    check L9() else D9();
  D9():
    deopt 30 [r21];
  L9():
    popenv;
    return r21;
  }
}
fun inner2733360753(_data, `...`) {
  (reg _data:*, reg ddd:dots) -+> V { var _data:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st _data = _data;
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
    r2 = dyn UseMethod("transform");
    goto L0(r2);
  L2():
    r = dyn base("transform");
    goto L0(r);
  }
}