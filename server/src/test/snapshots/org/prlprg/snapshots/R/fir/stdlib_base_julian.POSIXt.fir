fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2830387652;
    st `julian.POSIXt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2830387652(x, origin, `...`) {
  (reg x:*, reg origin:*, reg ddd:dots) -+> V { var x:*, var origin:*, reg origin_isMissing:L, reg origin_orDefault:*, reg as_POSIXct:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg as_POSIXct1:cls, reg origin1:*, reg origin2:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg origin3:*, reg origin4:V, reg length:cls, reg r6:V, reg r7:V, reg c:L, reg stop:cls, reg r8:V, reg difftime:cls, reg as_POSIXct2:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg r11:V, reg p3:p(V +), reg origin5:*, reg origin6:V, reg p4:p(V +), reg r14:V, reg structure:cls, reg res:*, reg res1:V, reg p5:p(V +), reg origin7:*, reg origin8:V, reg p6:p(V +), reg r17:V |
    mkenv;
    st x = x;
    origin_isMissing = missing.0(origin);
    if origin_isMissing then L0() else L1(origin);
  L0():
    p = prom<V +>{
      as_POSIXct = ldf `as.POSIXct`;
      r = dyn as_POSIXct[, tz]("1970-01-01", "GMT");
      return r;
    };
    goto L1(p);
  L1(origin_orDefault):
    st origin = origin_orDefault;
    st `...` = ddd;
    as_POSIXct1 = ldf `as.POSIXct`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p1 = prom<V +>{
      origin1 = ld origin;
      origin2 = force? origin1;
      checkMissing(origin2);
      return origin2;
    };
    r3 = dyn as_POSIXct1(p1);
    check L6() else D1();
  D1():
    deopt 3 [r3];
  L6():
    st origin = r3;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L2(r5):
    r7 = `!=`(r5, 1);
    c = `as.logical`(r7);
    if c then L11() else L3();
  L7():
    origin3 = ld origin;
    check L9() else D2();
  L8():
    r4 = dyn base(<sym origin>);
    goto L2(r4);
  D2():
    deopt 7 [origin3];
  L3():
    goto L4();
  L4():
    difftime = ldf difftime;
    check L15() else D6();
  L9():
    origin4 = force? origin3;
    checkMissing(origin4);
    length = ldf length in base;
    r6 = dyn length(origin4);
    check L10() else D3();
  L11():
    stop = ldf stop;
    check L12() else D4();
  D3():
    deopt 10 [r6];
  D4():
    deopt 14 [];
  D6():
    deopt 20 [];
  L10():
    goto L2(r6);
  L12():
    r8 = dyn stop("'origin' must be of length one");
    check L13() else D5();
  L15():
    p3 = prom<V +>{
      as_POSIXct2 = ldf `as.POSIXct`;
      p2 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r11 = dyn as_POSIXct2(p2);
      return r11;
    };
    p4 = prom<V +>{
      origin5 = ld origin;
      origin6 = force? origin5;
      checkMissing(origin6);
      return origin6;
    };
    r14 = dyn difftime[, , units](p3, p4, "days");
    check L16() else D7();
  D5():
    deopt 16 [r8];
  D7():
    deopt 25 [r14];
  L13():
    goto L4();
  L16():
    st res = r14;
    structure = ldf structure;
    check L17() else D8();
  D8():
    deopt 28 [];
  L17():
    p5 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      return res1;
    };
    p6 = prom<V +>{
      origin7 = ld origin;
      origin8 = force? origin7;
      checkMissing(origin8);
      return origin8;
    };
    r17 = dyn structure[, origin](p5, p6);
    check L18() else D9();
  D9():
    deopt 32 [r17];
  L18():
    popenv;
    return r17;
  }
}